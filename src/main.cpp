#include <iostream>
#include <cstdlib> // For std::getenv
#include "arbitrage/providers/OddsApiProvider.h"
#include "arbitrage/processors/ArbitrageProcessor.h"

using namespace arbitrage;

int main()
{
    const char *apiKey = std::getenv("ODDS_API_KEY");
    if (!apiKey)
    {
        std::cerr << "ODDS_API_KEY environment variable not set.\n";
        return 1;
    }

    // Construct your API endpoint URL using the API key.
    // Example URL - update as needed:
    std::string apiEndpoint = "https://api.the-odds-api.com/v4/sports/americanfootball_nfl/odds?api_key=" + std::string(apiKey) +
                              "&regions=us&markets=h2h,spreads,totals&oddsFormat=decimal&dateFormat=iso";

    // Instantiate the API Odds Provider using the endpoint.
    OddsApiProvider provider(apiEndpoint);

    // Fetch odds data from the API.
    AllOdds odds = provider.fetchOdds();

    // Create an instance of the arbitrage processor and process the fetched odds.
    ArbitrageProcessor processor;
    processor.process(odds);

    return 0;
}
