#include "arbitrage/containers/BaseContainer.h"

namespace arbitrage
{
    namespace containers
    {

        BaseContainer::~BaseContainer()
        {
            // Destructor (currently, no special cleanup required)
        }

        void BaseContainer::clear()
        {
            eventIds.clear();
        }

        size_t BaseContainer::size() const
        {
            return eventIds.size();
        }

        void BaseContainer::addEventId(int id)
        {
            eventIds.push_back(id);
        }

    } // namespace containers
} // namespace arbitrage
