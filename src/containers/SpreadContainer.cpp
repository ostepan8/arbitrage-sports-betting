#include "arbitrage/containers/SpreadContainer.h"

namespace arbitrage
{
    namespace containers
    {

        void SpreadContainer::addRecord(int eventId, double spread, double home, double away)
        {
            addEventId(eventId);
            spreads.push_back(spread);
            homeOdds.push_back(home);
            awayOdds.push_back(away);
        }

        void SpreadContainer::clear()
        {
            BaseContainer::clear();
            spreads.clear();
            homeOdds.clear();
            awayOdds.clear();
        }

    } // namespace containers
} // namespace arbitrage
