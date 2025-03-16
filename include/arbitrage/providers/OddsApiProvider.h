#pragma once
#include "arbitrage/IOddsProvider.h"
#include <string>

namespace arbitrage
{
    class OddsApiProvider : public IOddsProvider
    {
    public:
        // Construct with an API endpoint URL.
        explicit OddsApiProvider(const std::string &endpoint);

        // Polls the API, parses the JSON, and returns an AllOdds struct with the data.
        AllOdds fetchOdds() override;

    private:
        std::string apiEndpoint;
    };

} // namespace arbitrage
