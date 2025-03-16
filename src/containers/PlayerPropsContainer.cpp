#include "arbitrage/containers/PlayerPropsContainer.h"

namespace arbitrage
{
    namespace containers
    {

        void PlayerPropsContainer::addRecord(int eventId, int playerId, double value, double odds)
        {
            addEventId(eventId);
            playerIds.push_back(playerId);
            propValues.push_back(value);
            propOdds.push_back(odds);
        }

        void PlayerPropsContainer::clear()
        {
            BaseContainer::clear();
            playerIds.clear();
            propValues.clear();
            propOdds.clear();
        }

    } // namespace containers
} // namespace arbitrage
