#pragma once

#include "arbitrage/containers/MoneylineContainer.h"
#include "arbitrage/containers/SpreadContainer.h"
#include "arbitrage/containers/TotalsContainer.h"
#include "arbitrage/containers/PlayerPropsContainer.h"

namespace arbitrage
{

    /**
     * @class AllOdds
     * @brief Container for all types of betting odds
     *
     * This class aggregates various types of betting odds containers
     * (moneyline, spread, totals, player props) into a single structure
     * that can be passed around throughout the application.
     */
    class AllOdds
    {
    public:
        // Containers for different types of odds
        containers::MoneylineContainer moneyline;
        containers::SpreadContainer spread;
        containers::TotalsContainer totals;
        containers::PlayerPropsContainer playerProps;

        /**
         * @brief Default constructor
         */
        AllOdds() = default;

        /**
         * @brief Check if any of the containers have data
         *
         * @return true if at least one container has records, false otherwise
         */
        bool hasData() const
        {
            return moneyline.size() > 0 ||
                   spread.size() > 0 ||
                   totals.size() > 0 ||
                   playerProps.size() > 0;
        }

        /**
         * @brief Clear all containers
         */
        void clear()
        {
            moneyline.clear();
            spread.clear();
            totals.clear();
            playerProps.clear();
        }
    };

} // namespace arbitrage