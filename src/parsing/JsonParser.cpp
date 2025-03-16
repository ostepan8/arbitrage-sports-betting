#include "arbitrage/parsing/JsonParser.h"
#include <nlohmann/json.hpp>
#include <iostream>

using json = nlohmann::json;

namespace arbitrage
{

    JsonParser::JsonParser(std::shared_ptr<ILogger> logger)
        : logger(std::move(logger))
    {
        // Constructor implementation
    }

    std::vector<Event> JsonParser::parseEventArray(const std::string &jsonData)
    {
        std::vector<Event> events;

        try
        {
            auto j = json::parse(jsonData);
            if (!j.is_array())
            {
                if (logger)
                {
                    logger->error("Expected a JSON array but got something else.");
                }
                else
                {
                    std::cerr << "Expected a JSON array but got something else." << std::endl;
                }
                return events;
            }

            for (const auto &eventJson : j)
            {
                Event event;
                event.id = eventJson.value("id", "Unknown");
                event.homeTeam = eventJson.value("home_team", "Unknown");
                event.awayTeam = eventJson.value("away_team", "Unknown");
                event.commenceTime = eventJson.value("commence_time", "Unknown");

                // Parse bookmakers
                if (eventJson.contains("bookmakers") && eventJson["bookmakers"].is_array())
                {
                    for (const auto &bookmakerJson : eventJson["bookmakers"])
                    {
                        Bookmaker bookmaker;
                        bookmaker.title = bookmakerJson.value("title", "Unknown");

                        // Parse markets
                        if (bookmakerJson.contains("markets") && bookmakerJson["markets"].is_array())
                        {
                            for (const auto &marketJson : bookmakerJson["markets"])
                            {
                                Market market;
                                market.key = marketJson.value("key", "");

                                // Parse outcomes
                                if (marketJson.contains("outcomes") && marketJson["outcomes"].is_array())
                                {
                                    for (const auto &outcomeJson : marketJson["outcomes"])
                                    {
                                        Outcome outcome;
                                        outcome.name = outcomeJson.value("name", "Unknown");
                                        outcome.price = outcomeJson.value("price", 0.0);
                                        market.outcomes.push_back(outcome);
                                    }
                                }

                                bookmaker.markets.push_back(market);
                            }
                        }

                        event.bookmakers.push_back(bookmaker);
                    }
                }

                events.push_back(event);
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
                std::cerr << "Error parsing JSON: " << ex.what() << std::endl;
            }
        }

        return events;
    }

} // namespace arbitrage