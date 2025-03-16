#pragma once

#include <string>
#include <memory>
#include <vector>
#include "arbitrage/models/AllOdds.h"
#include "arbitrage/http/IHttpClient.h"
#include "arbitrage/parsing/IJsonParser.h"
#include "arbitrage/logging/ILogger.h"
#include "arbitrage/IOddsProvider.h"

namespace arbitrage
{

    // Forward declarations for models
    class Event;
    struct Bookmaker;
    struct Market;

    /**
     * @class OddsApiProvider
     * @brief Provider that fetches odds data from an API endpoint
     */
    class OddsApiProvider : public IOddsProvider
    {
    public:
        /**
         * @brief Legacy constructor for backward compatibility
         *
         * @param endpoint The API endpoint URL
         */
        OddsApiProvider(const std::string &endpoint);

        /**
         * @brief Constructor with dependency injection
         *
         * @param endpoint The API endpoint URL
         * @param httpClient HTTP client for making requests
         * @param jsonParser JSON parser for processing API responses
         * @param logger Logger for diagnostic output
         */
        OddsApiProvider(const std::string &endpoint,
                        std::unique_ptr<IHttpClient> httpClient,
                        std::unique_ptr<IJsonParser> jsonParser,
                        std::shared_ptr<ILogger> logger = nullptr);

        /**
         * @brief Fetch odds data from the API
         *
         * @return AllOdds object containing parsed odds data
         */
        AllOdds fetchOdds() override;

    private:
        std::string apiEndpoint;
        std::unique_ptr<IHttpClient> httpClient;
        std::unique_ptr<IJsonParser> jsonParser;
        std::shared_ptr<ILogger> logger;

        /**
         * @brief Process a collection of events
         */
        void processEvents(const std::vector<Event> &events, AllOdds &odds);

        /**
         * @brief Process bookmakers for an event
         */
        void processBookmakers(const std::vector<Bookmaker> &bookmakers,
                               int eventIndex, AllOdds &odds);

        /**
         * @brief Process markets for a bookmaker
         */
        void processMarkets(const std::vector<Market> &markets,
                            const std::string &bookmakerTitle,
                            int eventIndex, AllOdds &odds);

        /**
         * @brief Process a head-to-head (h2h) market
         */
        void processH2HMarket(const Market &market, int eventIndex, AllOdds &odds);
    };

} // namespace arbitrage