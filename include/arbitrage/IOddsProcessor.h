#pragma once
#include "IOddsProvider.h" // This header defines the AllOdds struct.
namespace arbitrage
{

    class IOddsProcessor
    {
    public:
        virtual ~IOddsProcessor() = default;
        // Process the provided odds and check for arbitrage opportunities.
        virtual void process(const AllOdds &odds) = 0;
    };

} // namespace arbitrage
