//HTTP REQUEST INTERFACE
#ifndef _REQUEST_INTERFACE_HPP
#define _REQUEST_INTERFACE_HPP

#include <iostream>
#include <ctime>
#include <random>
#include "http_request_interface.hpp"

class Date{
    friend class HttpRequest;

    private:
    time_t currentTime;

    public:
    Date();

    friend std::ostream& operator<<(std::ostream& os, const Date& resource)
    {
        std::cout << std::string(ctime(&(resource.currentTime)));
        return os;
    }
};

class HttpRequest{
    private:
    std::string sHttpMethod;
    float fVersionOfHttpProtocol;
    std::string sURL;
    std::random_device rdTxnId;
    Date dTime;
    std::string sHeader;
    std::string sBody;

    public:
    HttpRequest();

    void setHttpRequestDetails
    (
        std::string _sHttpMethod,
        float _fVersionOfHttpProtocol,
        std::string _sURL,
        std::string _sHeader,
        std::string _sBody
    );

    void showHttpRequestDetails();
};

#endif /*_REQUEST_INTERFACE_HPP*/