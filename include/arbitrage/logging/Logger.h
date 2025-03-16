// File: arbitrage/logging/Logger.h
#pragma once
#include "ILogger.h"

namespace arbitrage
{

    class Logger : public ILogger
    {
    public:
        void info(const std::string &message) override;
        void error(const std::string &message) override;
    };

} // namespace arbitrage