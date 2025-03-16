// File: include/arbitrage/processors/ArbitrageProcessor.h
#pragma once

#include "arbitrage/IOddsProcessor.h"

namespace arbitrage
{

    class ArbitrageProcessor : public IOddsProcessor
    {
    public:
        // Implement the IOddsProcessor interface
        void process(const AllOdds &odds) override;
    };

} // namespace arbitrage
