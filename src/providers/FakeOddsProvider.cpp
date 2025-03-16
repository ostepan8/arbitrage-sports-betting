#include "arbitrage/providers/FakeOddsProvider.h"

namespace arbitrage
{

    AllOdds FakeOddsProvider::fetchOdds()
    {
        AllOdds odds;

        // Populate MoneylineContainer with fake data.
        odds.moneyline.addRecord(1, 1.80, 2.00);
        odds.moneyline.addRecord(2, 1.90, 1.95);
        odds.moneyline.addRecord(3, 2.10, 1.85);

        // Populate SpreadContainer with fake data.
        odds.spread.addRecord(1, -3.5, 1.90, 2.10);
        odds.spread.addRecord(2, 2.5, 1.80, 2.00);
        odds.spread.addRecord(3, -1.5, 2.05, 1.95);

        // Populate TotalsContainer with fake data.
        odds.totals.addRecord(1, 45.5, 1.95, 1.95);
        odds.totals.addRecord(2, 48.0, 1.90, 2.00);
        odds.totals.addRecord(3, 42.5, 2.00, 1.85);

        // Populate PlayerPropsContainer with fake data.
        odds.playerProps.addRecord(1, 10, 25.5, 1.80);
        odds.playerProps.addRecord(2, 12, 30.0, 1.90);
        odds.playerProps.addRecord(3, 15, 22.0, 2.00);

        return odds;
    }

} // namespace arbitrage
