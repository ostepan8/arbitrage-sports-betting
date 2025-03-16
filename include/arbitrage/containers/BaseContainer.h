#pragma once
#include <vector>

namespace arbitrage
{
    namespace containers
    {

        // BaseContainer provides the common storage (e.g., event IDs)
        // and operations (clear, size, add) for our SoA bet containers.
        class BaseContainer
        {
        public:
            virtual ~BaseContainer();

            // Clears the container by removing all stored event IDs.
            virtual void clear();

            // Returns the number of records in the container.
            virtual size_t size() const;

            // Adds a new event ID to the container.
            virtual void addEventId(int id);

            const std::vector<int> &getEventIds() const { return eventIds; }

        protected:
            // Common field for all bet types: event identifiers.
            std::vector<int> eventIds;
        };

    } // namespace containers
} // namespace arbitrage
