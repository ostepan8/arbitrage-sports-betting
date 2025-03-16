#pragma once
#include <string>
#include <vector>
#include "arbitrage/models/Event.h"

namespace arbitrage
{

    class IJsonParser
    {
    public:
        virtual ~IJsonParser() = default;
        virtual std::vector<Event> parseEventArray(const std::string &jsonData) = 0;
    };

} // namespace arbitrage