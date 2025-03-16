#pragma once
#include "BaseContainer.h"
#include <vector>

namespace arbitrage
{
    namespace containers
    {

        class PlayerPropsContainer : public BaseContainer
        {
        public:
            // Adds a new record for a player props bet.
            void addRecord(int eventId, int playerId, double propValue, double propOdds);

            // Accessors for player props-specific data.
            const std::vector<int> &getPlayerIds() const { return playerIds; }
            const std::vector<double> &getPropValues() const { return propValues; }
            const std::vector<double> &getPropOdds() const { return propOdds; }

            // Clear both common and player props-specific data.
            void clear() override;

        private:
            std::vector<int> playerIds;
            std::vector<double> propValues;
            std::vector<double> propOdds;
        };

    } // namespace containers
} // namespace arbitrage
