// File: include/arbitrage/http/IHttpClient.h
#pragma once
#include <string>

namespace arbitrage
{

    struct HttpResponse
    {
        int statusCode;
        std::string body;

        bool isSuccess() const
        {
            return statusCode >= 200 && statusCode < 300;
        }
    };

    class IHttpClient
    {
    public:
        virtual ~IHttpClient() = default;
        virtual HttpResponse get(const std::string &url) = 0;
    };

} // namespace arbitrage