#pragma once
#include "containers/MoneylineContainer.h"
#include "containers/SpreadContainer.h"
#include "containers/TotalsContainer.h"
#include "containers/PlayerPropsContainer.h"

namespace arbitrage
{

    struct AllOdds
    {
        containers::MoneylineContainer moneyline;
        containers::SpreadContainer spread;
        containers::TotalsContainer totals;
        containers::PlayerPropsContainer playerProps;
    };

    class IOddsProvider
    {
    public:
        virtual ~IOddsProvider() = default;
        // Fetches odds data and returns a set of containers populated with odds.
        virtual AllOdds fetchOdds() = 0;
    };

} // namespace arbitrage
