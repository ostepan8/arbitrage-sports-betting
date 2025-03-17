#include <iostream>
#include <cstdlib> // For std::getenv
#include <memory>  // For smart pointers

// Core components
#include "arbitrage/providers/OddsApiProvider.h"
#include "arbitrage/processors/SimpleArbitrageProcessor.h"
#include "arbitrage/http/HttpClient.h"
#include "arbitrage/parsing/JsonParser.h"
#include "arbitrage/logging/Logger.h"

int main()
{
    // Get API key from environment
    const char *apiKey = std::getenv("ODDS_API_KEY");
    if (!apiKey)
    {
        std::cerr << "ODDS_API_KEY environment variable not set.\n";
        return 1;
    }

    std::string bookmakers = "draftkings,betonlineag,bovada,caesars,betmgm";

    // Construct API endpoint URL
    std::string apiEndpoint = "https://api.the-odds-api.com/v4/sports/basketball_nba/odds?api_key=" + std::string(apiKey) +
                              "&bookmakers=" + bookmakers + "&markets=h2h&oddsFormat=decimal&dateFormat=iso";

    // Create dependencies using the modular architecture
    auto logger = std::make_shared<arbitrage::Logger>();
    auto httpClient = std::make_unique<arbitrage::HttpClient>(logger);
    auto jsonParser = std::make_unique<arbitrage::JsonParser>(logger);

    // Log startup information
    logger->info("Starting sports arbitrage application");
    logger->info("Using API endpoint: " + apiEndpoint);

    // Create the odds provider with dependency injection
    arbitrage::OddsApiProvider provider(
        apiEndpoint,
        std::move(httpClient),
        std::move(jsonParser),
        logger);

    // Fetch odds data from the API
    logger->info("Fetching odds data...");
    arbitrage::AllOdds odds = provider.fetchOdds();

    // Create a concrete processor with a minimum profit threshold of 1.5%
    logger->info("Processing odds data for arbitrage opportunities...");
    arbitrage::SimpleArbitrageProcessor processor(1.5, logger);

    // Process the odds data
    arbitrage::AllOdds arbitrageOpportunities = processor.process(odds);

    // Print the results
    logger->info("Processing complete. Found:");
    logger->info("  - " + std::to_string(arbitrageOpportunities.moneyline.size()) + " moneyline opportunities");
    logger->info("  - " + std::to_string(arbitrageOpportunities.spread.size()) + " spread opportunities");
    logger->info("  - " + std::to_string(arbitrageOpportunities.totals.size()) + " totals opportunities");
    logger->info("  - " + std::to_string(arbitrageOpportunities.playerProps.size()) + " player prop opportunities");

    logger->info("Application finished successfully");
    return 0;
}
