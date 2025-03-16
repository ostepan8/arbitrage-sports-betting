#include "arbitrage/http/HttpClient.h"
#include <cpr/cpr.h>
#include <iostream>

namespace arbitrage
{

    HttpClient::HttpClient(std::shared_ptr<ILogger> logger)
        : logger(std::move(logger))
    {
        // Constructor implementation
    }

    HttpResponse HttpClient::get(const std::string &url)
    {
        if (logger)
        {
            logger->info("Making GET request to: " + url);
        }
        else
        {
            std::cout << "Making GET request to: " << url << std::endl;
        }

        auto response = cpr::Get(cpr::Url{url});

        HttpResponse result;
        result.statusCode = response.status_code;
        result.body = response.text;

        return result;
    }

} // namespace arbitrage