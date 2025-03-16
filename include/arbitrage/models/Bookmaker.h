// File: arbitrage/models/Bookmaker.h
#pragma once
#include <string>
#include <vector>
#include "Market.h"

namespace arbitrage
{

    struct Bookmaker
    {
        std::string title;
        std::vector<Market> markets;
    };

} // namespace arbitrage
