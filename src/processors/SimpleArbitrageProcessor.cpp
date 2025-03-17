#include "arbitrage/processors/SimpleArbitrageProcessor.h"
#include "arbitrage/logging/Logger.h"
#include <algorithm>
#include <numeric>
#include <cmath>
#include <iostream>
#include <map>

namespace arbitrage
{

    SimpleArbitrageProcessor::SimpleArbitrageProcessor(double minProfit, std::shared_ptr<Logger> logger)
        : minProfitPercent(minProfit), logger(logger)
    {
        if (logger)
        {
            logger->info("SimpleArbitrageProcessor initialized with minimum profit threshold: " +
                         std::to_string(minProfitPercent) + "%");
        }
    }

    SimpleArbitrageProcessor::SimpleArbitrageProcessor()
        : minProfitPercent(1.0), logger(nullptr)
    {
        // Default constructor with 1.0% threshold and no logger
    }

    containers::MoneylineContainer SimpleArbitrageProcessor::processMoneyline(const containers::MoneylineContainer &ml)
    {
        containers::MoneylineContainer opportunities;

        if (logger)
        {
            logger->info("Processing moneyline events for arbitrage opportunities");
        }

        // For each event (match)
        const std::vector<double> &homeOdds = ml.getHomeOdds();
        const std::vector<double> &awayOdds = ml.getAwayOdds();

        for (size_t i = 0; i < homeOdds.size(); i++)
        {
            // Calculate implied probabilities
            double homeImpliedProb = calculateImpliedProbability(homeOdds[i]);
            double awayImpliedProb = calculateImpliedProbability(awayOdds[i]);

            std::vector<double> probabilities = {homeImpliedProb, awayImpliedProb};

            // Check for arbitrage opportunity
            if (hasArbitrageOpportunity(probabilities))
            {
                double profitPercent = calculateProfitPercentage(probabilities);

                // Only consider opportunities that meet the minimum profit threshold
                if (profitPercent >= minProfitPercent)
                {
                    // Add opportunity to result container
                    // This should use your container's proper API
                    if (logger)
                    {
                        logger->info("Found moneyline arbitrage opportunity with profit potential: " +
                                     std::to_string(profitPercent) + "%");
                    }
                }
            }
        }

        if (logger)
        {
            logger->info("Found arbitrage opportunities that meet the minimum profit threshold");
        }

        return opportunities;
    }

    containers::SpreadContainer SimpleArbitrageProcessor::processSpread(const containers::SpreadContainer &sp)
    {
        containers::SpreadContainer opportunities;

        if (logger)
        {
            logger->info("Processing spread events for arbitrage opportunities");
        }

        // Implementation for spread processing

        return opportunities;
    }

    containers::TotalsContainer SimpleArbitrageProcessor::processTotals(const containers::TotalsContainer &tot)
    {
        containers::TotalsContainer opportunities;

        if (logger)
        {
            logger->info("Processing totals events for arbitrage opportunities");
        }

        // Implementation for totals processing

        return opportunities;
    }

    containers::PlayerPropsContainer SimpleArbitrageProcessor::processPlayerProps(const containers::PlayerPropsContainer &pp)
    {
        containers::PlayerPropsContainer opportunities;

        if (logger)
        {
            logger->info("Processing player props for arbitrage opportunities");
        }

        // Implementation for player props processing

        return opportunities;
    }

    double SimpleArbitrageProcessor::calculateImpliedProbability(double odds) const
    {
        // For decimal odds, implied probability is 1/odds
        return 1.0 / odds;
    }

    bool SimpleArbitrageProcessor::hasArbitrageOpportunity(const std::vector<double> &impliedProbabilities) const
    {
        // Sum all implied probabilities
        double totalProbability = std::accumulate(impliedProbabilities.begin(), impliedProbabilities.end(), 0.0);

        // Arbitrage exists if total implied probability is less than 1
        return totalProbability < 1.0;
    }

    double SimpleArbitrageProcessor::calculateProfitPercentage(const std::vector<double> &impliedProbabilities) const
    {
        // Sum all implied probabilities
        double totalProbability = std::accumulate(impliedProbabilities.begin(), impliedProbabilities.end(), 0.0);

        // Profit percentage = (1/total_probability - 1) * 100
        // This represents the guaranteed profit as a percentage of the total stake
        return (1.0 / totalProbability - 1.0) * 100.0;
    }

} // namespace arbitrage