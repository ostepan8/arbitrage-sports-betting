#include "arbitrage/logging/Logger.h"
#include <iostream>

namespace arbitrage
{

    void Logger::info(const std::string &message)
    {
        std::cout << "[INFO] " << message << std::endl;
    }

    void Logger::error(const std::string &message)
    {
        std::cerr << "[ERROR] " << message << std::endl;
    }

} // namespace arbitrage