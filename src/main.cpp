#include <iostream>
#include "arbitrage/providers/FakeOddsProvider.h"
#include "arbitrage/processors/ArbitrageProcessor.h"

using namespace arbitrage;

int main()
{
    FakeOddsProvider provider;
    AllOdds odds = provider.fetchOdds();

    ArbitrageProcessor processor;
    processor.process(odds);

    return 0;
}
