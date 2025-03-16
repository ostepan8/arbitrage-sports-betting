// File: include/arbitrage/http/HttpClient.h
#pragma once
#include "IHttpClient.h"
#include <memory>
#include "arbitrage/logging/ILogger.h"

namespace arbitrage
{

    class HttpClient : public IHttpClient
    {
    public:
        // Add a default parameter to allow constructor to be called without arguments
        HttpClient(std::shared_ptr<ILogger> logger = nullptr);
        HttpResponse get(const std::string &url) override;

    private:
        std::shared_ptr<ILogger> logger;
    };

} // namespace arbitrage