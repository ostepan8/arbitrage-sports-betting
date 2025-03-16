#pragma once
#include "BaseContainer.h"
#include <vector>

namespace arbitrage
{
    namespace containers
    {

        class TotalsContainer : public BaseContainer
        {
        public:
            // Adds a new record for a totals (over/under) bet.
            void addRecord(int eventId, double totalPoints, double overOdds, double underOdds);

            // Accessors for totals-specific data.
            const std::vector<double> &getTotalPoints() const { return totalPoints; }
            const std::vector<double> &getOverOdds() const { return overOdds; }
            const std::vector<double> &getUnderOdds() const { return underOdds; }

            // Clear both common and totals-specific data.
            void clear() override;

        private:
            std::vector<double> totalPoints;
            std::vector<double> overOdds;
            std::vector<double> underOdds;
        };

    } // namespace containers
} // namespace arbitrage
