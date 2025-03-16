// File: src/processors/ArbitrageProcessor.cpp
#include "arbitrage/processors/ArbitrageProcessor.h"
#include <iostream>

namespace arbitrage
{

    void ArbitrageProcessor::process(const AllOdds &odds)
    {
        // Example naive arbitrage check on moneyline
        const auto &ml = odds.moneyline;
        size_t count = ml.size();
        for (size_t i = 0; i < count; ++i)
        {
            double homeOdds = ml.getHomeOdds()[i];
            double awayOdds = ml.getAwayOdds()[i];
            int eventId = ml.getEventIds()[i];

            double impliedProb = (1.0 / homeOdds) + (1.0 / awayOdds);
            if (impliedProb < 1.0)
            {
                std::cout << "Arbitrage FOUND for event " << eventId
                          << ": impliedProb = " << impliedProb << "\n";
            }
            else
            {
                std::cout << "No arbitrage for event " << eventId
                          << ": impliedProb = " << impliedProb << "\n";
            }
        }
    }

} // namespace arbitrage
