// File: arbitrage/models/Event.h
#pragma once
#include <string>
#include <vector>
#include "Bookmaker.h"

namespace arbitrage
{

    struct Event
    {
        std::string id;
        std::string homeTeam;
        std::string awayTeam;
        std::string commenceTime;
        std::vector<Bookmaker> bookmakers;
    };

} // namespace arbitrage