#pragma once

#include "arbitrage/models/AllOdds.h"

namespace arbitrage
{
    // Interface for odds providers
    class IOddsProvider
    {
    public:
        virtual ~IOddsProvider() = default;
        virtual AllOdds fetchOdds() = 0;
    };

} // namespace arbitrage