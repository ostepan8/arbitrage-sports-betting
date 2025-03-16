#pragma once
#include "IJsonParser.h"
#include <memory>
#include "arbitrage/logging/ILogger.h"

namespace arbitrage
{

    class JsonParser : public IJsonParser
    {
    public:
        // Add a default parameter to allow constructor to be called without arguments
        JsonParser(std::shared_ptr<ILogger> logger = nullptr);
        std::vector<Event> parseEventArray(const std::string &jsonData) override;

    private:
        std::shared_ptr<ILogger> logger;
    };

} // namespace arbitrage