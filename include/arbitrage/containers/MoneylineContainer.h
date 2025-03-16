#pragma once
#include "BaseContainer.h"
#include <vector>

namespace arbitrage
{
    namespace containers
    {

        class MoneylineContainer : public BaseContainer
        {
        public:
            // Adds a new record for a moneyline bet.
            void addRecord(int eventId, double homeOdds, double awayOdds);

            // Accessors for moneyline-specific data.
            const std::vector<double> &getHomeOdds() const { return homeOdds; }
            const std::vector<double> &getAwayOdds() const { return awayOdds; }

            // Clear both common and moneyline-specific data.
            void clear() override;

        private:
            std::vector<double> homeOdds;
            std::vector<double> awayOdds;
        };

    } // namespace containers
} // namespace arbitrage
