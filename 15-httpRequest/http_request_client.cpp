//HTTP REQUEST CLIENT
#include <iostream>
#include "http_request_interface.hpp"

int main(void){
    HttpRequest* newRequest = new HttpRequest;

    newRequest->showHttpRequestDetails();

    newRequest->setHttpRequestDetails
    (
        "POST",
        1.1,
        "www.google.com",
        "User-Agent : VSCode",
        "Body : This is HTTP Request"
    );

    newRequest->showHttpRequestDetails();

    return 0;
}
