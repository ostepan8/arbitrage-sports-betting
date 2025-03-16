#include "arbitrage/containers/MoneylineContainer.h"

namespace arbitrage
{
    namespace containers
    {

        void MoneylineContainer::addRecord(int eventId, double home, double away)
        {
            addEventId(eventId); // Use base functionality to add the event ID.
            homeOdds.push_back(home);
            awayOdds.push_back(away);
        }

        void MoneylineContainer::clear()
        {
            BaseContainer::clear();
            homeOdds.clear();
            awayOdds.clear();
        }

    } // namespace containers
} // namespace arbitrage
