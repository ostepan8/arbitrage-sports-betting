#pragma once

#include "arbitrage/IOddsProvider.h"

namespace arbitrage
{

    // FakeOddsProvider implements the IOddsProvider interface and returns hard-coded fake odds data.
    class FakeOddsProvider : public IOddsProvider
    {
    public:
        // Overrides fetchOdds() to return dummy data.
        AllOdds fetchOdds() override;
    };

} // namespace arbitrage
