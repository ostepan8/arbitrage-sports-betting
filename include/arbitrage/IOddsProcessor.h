#pragma once

#include "arbitrage/containers/MoneylineContainer.h"
#include "arbitrage/containers/SpreadContainer.h"
#include "arbitrage/containers/TotalsContainer.h"
#include "arbitrage/containers/PlayerPropsContainer.h"
#include "arbitrage/models/AllOdds.h"

namespace arbitrage
{

    /**
     * @class IOddsProcessor
     * @brief Interface for processing odds data and finding arbitrage opportunities
     */
    class IOddsProcessor
    {
    public:
        /**
         * @brief Virtual destructor
         */
        virtual ~IOddsProcessor() = default;

        /**
         * @brief Process the provided odds and return a new AllOdds container with arbitrage information.
         * This function is final, enforcing that all subclasses must use the four specific processing methods.
         *
         * @param inputOdds The raw odds data.
         * @return AllOdds Processed odds with arbitrage information.
         */
        AllOdds process(const AllOdds &inputOdds)
        {
            AllOdds result;
            result.moneyline = processMoneyline(inputOdds.moneyline);
            result.spread = processSpread(inputOdds.spread);
            result.totals = processTotals(inputOdds.totals);
            result.playerProps = processPlayerProps(inputOdds.playerProps);
            return result;
        }

        /**
         * @brief Process moneyline odds to find arbitrage opportunities
         * @param ml Container with moneyline odds
         * @return Container with arbitrage opportunities found
         */
        virtual containers::MoneylineContainer processMoneyline(const containers::MoneylineContainer &ml) = 0;

        /**
         * @brief Process spread odds to find arbitrage opportunities
         * @param sp Container with spread odds
         * @return Container with arbitrage opportunities found
         */
        virtual containers::SpreadContainer processSpread(const containers::SpreadContainer &sp) = 0;

        /**
         * @brief Process totals odds to find arbitrage opportunities
         * @param tot Container with totals odds
         * @return Container with arbitrage opportunities found
         */
        virtual containers::TotalsContainer processTotals(const containers::TotalsContainer &tot) = 0;

        /**
         * @brief Process player props odds to find arbitrage opportunities
         * @param pp Container with player props odds
         * @return Container with arbitrage opportunities found
         */
        virtual containers::PlayerPropsContainer processPlayerProps(const containers::PlayerPropsContainer &pp) = 0;
    };

} // namespace arbitrage