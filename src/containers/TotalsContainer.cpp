#include "arbitrage/containers/TotalsContainer.h"

namespace arbitrage
{
    namespace containers
    {

        void TotalsContainer::addRecord(int eventId, double total, double over, double under)
        {
            addEventId(eventId);
            totalPoints.push_back(total);
            overOdds.push_back(over);
            underOdds.push_back(under);
        }

        void TotalsContainer::clear()
        {
            BaseContainer::clear();
            totalPoints.clear();
            overOdds.clear();
            underOdds.clear();
        }

    } // namespace containers
} // namespace arbitrage
