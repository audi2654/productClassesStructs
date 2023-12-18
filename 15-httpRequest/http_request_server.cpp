//HTTP REQUEST SERVER
#include <iostream>
#include "http_request_interface.hpp"

//function definitions
Date::Date()
:   currentTime(time(&currentTime))
{

}

HttpRequest::HttpRequest()
:   sHttpMethod{"empty_method"},
    fVersionOfHttpProtocol{0.0f},
    sURL{"empty.URL.com"},
    rdTxnId{},
    dTime{},
    sHeader{"empty_header"},
    sBody{"empty_body"}
{

}

void HttpRequest::setHttpRequestDetails
(
    std::string _sHttpMethod,
    float _fVersionOfHttpProtocol,
    std::string _sURL,
    std::string _sHeader,
    std::string _sBody
)
{
    this->sHttpMethod = _sHttpMethod;
    fVersionOfHttpProtocol = _fVersionOfHttpProtocol;
    sURL = _sURL;
    sHeader = _sHeader;
    sBody = _sBody;
}

void HttpRequest::showHttpRequestDetails()
{
    std::cout << "HTTP Request Details are" << std::endl;

    std::cout << this->sHttpMethod << std::endl;
    std::cout << fVersionOfHttpProtocol << std::endl;
    std::cout << sURL << std::endl;
    std::cout << rdTxnId() << std::endl;
    std::cout << sHeader << std::endl;
    std::cout << sBody << std::endl;
    std::cout << dTime << std::endl;
}
