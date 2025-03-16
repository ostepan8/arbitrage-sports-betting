#include "arbitrage/providers/OddsApiProvider.h"
#include <cpr/cpr.h>
#include <nlohmann/json.hpp>
#include <iostream>

using json = nlohmann::json;

namespace arbitrage
{

    OddsApiProvider::OddsApiProvider(const std::string &endpoint)
        : apiEndpoint(endpoint)
    {
    }

    AllOdds OddsApiProvider::fetchOdds()
    {
        AllOdds odds;

        // Perform a synchronous GET request to the API endpoint.
        auto response = cpr::Get(cpr::Url{apiEndpoint});
        if (response.status_code != 200)
        {
            std::cerr << "API request failed with status: " << response.status_code << "\n";
            return odds;
        }

        try
        {
            auto j = json::parse(response.text);

            // For example, assume the API returns a JSON object with keys:
            // "moneylines", "spreads", "totals", "playerProps"
            // Each is an array of records.

            // Process Moneyline Data
            if (j.contains("moneylines"))
            {
                for (const auto &item : j["moneylines"])
                {
                    // Expected JSON: { "eventId": 1, "homeOdds": 1.80, "awayOdds": 2.00 }
                    odds.moneyline.addRecord(
                        item["eventId"].get<int>(),
                        item["homeOdds"].get<double>(),
                        item["awayOdds"].get<double>());
                }
            }

            // Process Spread Data
            if (j.contains("spreads"))
            {
                for (const auto &item : j["spreads"])
                {
                    // Expected JSON: { "eventId": 1, "spread": -3.5, "homeOdds": 1.90, "awayOdds": 2.10 }
                    odds.spread.addRecord(
                        item["eventId"].get<int>(),
                        item["spread"].get<double>(),
                        item["homeOdds"].get<double>(),
                        item["awayOdds"].get<double>());
                }
            }

            // Process Totals Data
            if (j.contains("totals"))
            {
                for (const auto &item : j["totals"])
                {
                    // Expected JSON: { "eventId": 1, "totalPoints": 45.5, "overOdds": 1.95, "underOdds": 1.95 }
                    odds.totals.addRecord(
                        item["eventId"].get<int>(),
                        item["totalPoints"].get<double>(),
                        item["overOdds"].get<double>(),
                        item["underOdds"].get<double>());
                }
            }

            // Process Player Props Data
            if (j.contains("playerProps"))
            {
                for (const auto &item : j["playerProps"])
                {
                    // Expected JSON: { "eventId": 1, "playerId": 10, "propValue": 25.5, "propOdds": 1.80 }
                    odds.playerProps.addRecord(
                        item["eventId"].get<int>(),
                        item["playerId"].get<int>(),
                        item["propValue"].get<double>(),
                        item["propOdds"].get<double>());
                }
            }
        }
        catch (const std::exception &ex)
        {
            std::cerr << "Error parsing JSON: " << ex.what() << "\n";
        }

        return odds;
    }

} // namespace arbitrage
