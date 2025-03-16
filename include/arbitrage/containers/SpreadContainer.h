#pragma once
#include "BaseContainer.h"
#include <vector>

namespace arbitrage
{
    namespace containers
    {

        class SpreadContainer : public BaseContainer
        {
        public:
            // Adds a new record for a spread bet.
            void addRecord(int eventId, double spread, double homeOdds, double awayOdds);

            // Accessors for spread-specific data.
            const std::vector<double> &getSpreads() const { return spreads; }
            const std::vector<double> &getHomeOdds() const { return homeOdds; }
            const std::vector<double> &getAwayOdds() const { return awayOdds; }

            // Clear both common and spread-specific data.
            void clear() override;

        private:
            std::vector<double> spreads;
            std::vector<double> homeOdds;
            std::vector<double> awayOdds;
        };

    } // namespace containers
} // namespace arbitrage
