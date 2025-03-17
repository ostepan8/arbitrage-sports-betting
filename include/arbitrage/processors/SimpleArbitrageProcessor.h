#pragma once

#include "arbitrage/IOddsProcessor.h"
#include "arbitrage/containers/MoneylineContainer.h"
#include "arbitrage/containers/SpreadContainer.h"
#include "arbitrage/containers/TotalsContainer.h"
#include "arbitrage/containers/PlayerPropsContainer.h"
#include <memory>
#include <vector>

namespace arbitrage
{

    // Forward declaration
    class Logger;

    /**
     * @class SimpleArbitrageProcessor
     * @brief A concrete implementation of IOddsProcessor for detecting arbitrage opportunities
     */
    class SimpleArbitrageProcessor : public IOddsProcessor
    {
    private:
        // Minimum profit threshold in percent (e.g., 1.0 means 1.0%)
        double minProfitPercent;

        // Logger for recording processing information
        std::shared_ptr<Logger> logger;

    public:
        /**
         * @brief Constructor with minimum profit threshold and logger
         * @param minProfit Minimum profit percentage to consider (e.g., 1.5 for 1.5%)
         * @param logger Shared pointer to a logger instance
         */
        SimpleArbitrageProcessor(double minProfit, std::shared_ptr<Logger> logger);

        /**
         * @brief Default constructor
         * Sets minimum profit threshold to 1.0% and uses a null logger
         */
        SimpleArbitrageProcessor();

        /**
         * @brief Virtual destructor
         */
        ~SimpleArbitrageProcessor() override = default;

        /**
         * @brief Process moneyline odds to find arbitrage opportunities
         * @param ml Container with moneyline odds
         * @return Container with arbitrage opportunities found
         */
        containers::MoneylineContainer processMoneyline(const containers::MoneylineContainer &ml) override;

        /**
         * @brief Process spread odds to find arbitrage opportunities
         * @param sp Container with spread odds
         * @return Container with arbitrage opportunities found
         */
        containers::SpreadContainer processSpread(const containers::SpreadContainer &sp) override;

        /**
         * @brief Process totals odds to find arbitrage opportunities
         * @param tot Container with totals odds
         * @return Container with arbitrage opportunities found
         */
        containers::TotalsContainer processTotals(const containers::TotalsContainer &tot) override;

        /**
         * @brief Process player props odds to find arbitrage opportunities
         * @param pp Container with player props odds
         * @return Container with arbitrage opportunities found
         */
        containers::PlayerPropsContainer processPlayerProps(const containers::PlayerPropsContainer &pp) override;

    private:
        /**
         * @brief Calculate implied probability from decimal odds
         * @param odds Decimal odds value
         * @return Implied probability (0.0-1.0)
         */
        double calculateImpliedProbability(double odds) const;

        /**
         * @brief Check if a set of probabilities offers an arbitrage opportunity
         * @param impliedProbabilities Vector of implied probabilities
         * @return True if an arbitrage opportunity exists, false otherwise
         */
        bool hasArbitrageOpportunity(const std::vector<double> &impliedProbabilities) const;

        /**
         * @brief Calculate profit percentage for an arbitrage opportunity
         * @param impliedProbabilities Vector of implied probabilities
         * @return Profit percentage value
         */
        double calculateProfitPercentage(const std::vector<double> &impliedProbabilities) const;
    };

} // namespace arbitrage