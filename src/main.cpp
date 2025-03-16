#include <iostream>
#include <cstdlib> // For std::getenv
#include <memory>  // For smart pointers

// Core components
#include "arbitrage/providers/OddsApiProvider.h"
#include "arbitrage/processors/ArbitrageProcessor.h"

// New modular components
#include "arbitrage/http/HttpClient.h"
#include "arbitrage/parsing/JsonParser.h"
#include "arbitrage/logging/Logger.h"

using namespace arbitrage;

int main()
{
    // Get API key from environment
    const char *apiKey = std::getenv("ODDS_API_KEY");
    if (!apiKey)
    {
        std::cerr << "ODDS_API_KEY environment variable not set.\n";
        return 1;
    }

    std::string bookmakers = "";

    // Construct API endpoint URL
    std::string apiEndpoint = "https://api.the-odds-api.com/v4/sports/basketball_nba/odds?api_key=" + std::string(apiKey) +
                              "&bookmakers=" + bookmakers + "&markets=h2h&oddsFormat=decimal&dateFormat=iso";

    // Create dependencies using the modular architecture
    auto logger = std::make_shared<Logger>();
    auto httpClient = std::make_unique<HttpClient>(logger);
    auto jsonParser = std::make_unique<JsonParser>(logger);

    // Log startup information
    logger->info("Starting sports arbitrage application");
    logger->info("Using API endpoint: " + apiEndpoint);

    // Create the odds provider with dependency injection
    OddsApiProvider provider(
        apiEndpoint,
        std::move(httpClient),
        std::move(jsonParser),
        logger);

    // Fetch odds data from the API
    logger->info("Fetching odds data...");
    AllOdds odds = provider.fetchOdds();

    // Process the odds data for arbitrage opportunities
    logger->info("Processing odds data for arbitrage opportunities...");
    ArbitrageProcessor processor;
    processor.process(odds);

    logger->info("Application finished successfully");
    return 0;
}