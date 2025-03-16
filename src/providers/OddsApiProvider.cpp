#include "arbitrage/providers/OddsApiProvider.h"
#include "arbitrage/http/HttpClient.h"
#include "arbitrage/parsing/JsonParser.h"
#include <cpr/cpr.h>
#include <nlohmann/json.hpp>
#include <iostream>
#include <sstream>

using json = nlohmann::json;

namespace arbitrage
{

    // Legacy constructor - keep for backward compatibility
    OddsApiProvider::OddsApiProvider(const std::string &endpoint)
        : apiEndpoint(endpoint),
          httpClient(std::make_unique<HttpClient>()),
          jsonParser(std::make_unique<JsonParser>())
    {
        std::cout << "OddsApiProvider created with endpoint: " << apiEndpoint << "\n";
    }

    // New constructor with DI
    OddsApiProvider::OddsApiProvider(const std::string &endpoint,
                                     std::unique_ptr<IHttpClient> httpClient,
                                     std::unique_ptr<IJsonParser> jsonParser,
                                     std::shared_ptr<ILogger> logger)
        : apiEndpoint(endpoint),
          httpClient(std::move(httpClient)),
          jsonParser(std::move(jsonParser)),
          logger(std::move(logger))
    {
        if (this->logger)
        {
            this->logger->info("OddsApiProvider created with endpoint: " + apiEndpoint);
        }
        else
        {
            std::cout << "OddsApiProvider created with endpoint and DI: " << apiEndpoint << "\n";
        }
    }

    AllOdds OddsApiProvider::fetchOdds()
    {
        AllOdds odds;

        if (logger)
        {
            logger->info("Starting API request to: " + apiEndpoint);
        }
        else
        {
            std::cout << "Starting API request to: " << apiEndpoint << "\n";
        }

        // For now, use the original implementation
        // Later, we'll migrate to using the httpClient and jsonParser
        auto response = cpr::Get(cpr::Url{apiEndpoint});

        if (logger)
        {
            logger->info("HTTP status code received: " + std::to_string(response.status_code));
        }
        else
        {
            std::cout << "HTTP status code received: " << response.status_code << "\n";
        }

        try
        {
            auto j = json::parse(response.text);
            if (!j.is_array())
            {
                if (logger)
                {
                    logger->error("Expected a JSON array but got something else.");
                }
                else
                {
                    std::cerr << "Expected a JSON array but got something else.\n";
                }
                return odds;
            }

            if (logger)
            {
                logger->info("API response successfully parsed into JSON array with " +
                             std::to_string(j.size()) + " events.");
            }
            else
            {
                std::cout << "API response successfully parsed into JSON array with "
                          << j.size() << " events.\n";
            }

            int eventIndex = 0;
            for (const auto &event : j)
            {
                if (logger)
                {
                    logger->info("Processing event #" + std::to_string(eventIndex));
                }
                else
                {
                    std::cout << "Processing event #" << eventIndex << "\n";
                }

                // Log basic event info
                std::string id = event.value("id", "Unknown");
                std::string homeTeam = event.value("home_team", "Unknown");
                std::string awayTeam = event.value("away_team", "Unknown");
                std::string commenceTime = event.value("commence_time", "Unknown");

                if (event.contains("bookmakers") && event["bookmakers"].is_array() && event["bookmakers"].size() > 0)
                {
                    for (const auto &bookmaker : event["bookmakers"])
                    {
                        if (!bookmaker.contains("markets"))
                            continue;
                        for (const auto &market : bookmaker["markets"])
                        {
                            if (market.value("key", "") == "h2h")
                            {
                                if (logger)
                                {
                                    logger->info("Found h2h market from bookmaker: " +
                                                 bookmaker.value("title", "Unknown"));
                                }
                                else
                                {
                                    std::cout << "Found h2h market from bookmaker: "
                                              << bookmaker.value("title", "Unknown") << "\n";
                                }

                                // Check if outcomes array exists and has two entries.
                                if (market.contains("outcomes") && market["outcomes"].is_array() &&
                                    market["outcomes"].size() == 2)
                                {
                                    double odds1 = market["outcomes"][0].value("price", 0.0);
                                    double odds2 = market["outcomes"][1].value("price", 0.0);
                                    std::string team1 = market["outcomes"][0].value("name", "Unknown");
                                    std::string team2 = market["outcomes"][1].value("name", "Unknown");

                                    if (logger)
                                    {
                                        logger->info("Extracted h2h odds: " + team1 + " at " +
                                                     std::to_string(odds1) + ", " + team2 +
                                                     " at " + std::to_string(odds2));
                                    }
                                    else
                                    {
                                        std::cout << "Extracted h2h odds: "
                                                  << team1 << " at " << odds1 << ", "
                                                  << team2 << " at " << odds2 << "\n";
                                    }

                                    // For demonstration, add this record to the moneyline container.
                                    odds.moneyline.addRecord(eventIndex, odds1, odds2);
                                }
                                else
                                {
                                    if (logger)
                                    {
                                        logger->error("h2h market found but outcomes array is missing or doesn't have exactly two entries.");
                                    }
                                    else
                                    {
                                        std::cerr << "h2h market found but outcomes array is missing or doesn't have exactly two entries.\n";
                                    }
                                }
                                // Once found, break out of markets loop.
                                break;
                            }
                        }
                    }
                }

                if (logger)
                {
                    logger->info("Event: " + homeTeam + " vs " + awayTeam +
                                 ", commence_time: " + commenceTime);
                }
                else
                {
                    std::cout << "Event: " << homeTeam << " vs " << awayTeam
                              << ", commence_time: " << commenceTime << "\n";
                }

                eventIndex++;
            }
        }
        catch (const std::exception &ex)
        {
            if (logger)
            {
                logger->error("Error parsing JSON: " + std::string(ex.what()));
            }
            else
            {
                std::cerr << "Error parsing JSON: " << ex.what() << "\n";
            }
        }

        if (logger)
        {
            logger->info("fetchOdds() completed. Returning parsed odds data.");
        }
        else
        {
            std::cout << "fetchOdds() completed. Returning parsed odds data.\n";
        }

        return odds;
    }

    // Define empty placeholder methods - we'll fill these in later
    void OddsApiProvider::processEvents(const std::vector<Event> &events, AllOdds &odds) {}
    void OddsApiProvider::processBookmakers(const std::vector<Bookmaker> &bookmakers, int eventIndex, AllOdds &odds) {}
    void OddsApiProvider::processMarkets(const std::vector<Market> &markets, const std::string &bookmakerTitle, int eventIndex, AllOdds &odds) {}
    void OddsApiProvider::processH2HMarket(const Market &market, int eventIndex, AllOdds &odds) {}

} // namespace arbitrage