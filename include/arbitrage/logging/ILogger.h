// File: arbitrage/logging/ILogger.h
#pragma once
#include <string>

namespace arbitrage
{

    class ILogger
    {
    public:
        virtual ~ILogger() = default;
        virtual void info(const std::string &message) = 0;
        virtual void error(const std::string &message) = 0;
    };

} // namespace arbitrage
