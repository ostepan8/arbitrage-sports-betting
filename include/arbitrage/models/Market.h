// File: arbitrage/models/Market.h
#pragma once
#include <string>
#include <vector>
#include "Outcome.h"

namespace arbitrage
{

    struct Market
    {
        std::string key;
        std::vector<Outcome> outcomes;
    };

} // namespace arbitrage