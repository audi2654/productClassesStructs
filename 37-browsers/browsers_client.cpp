//BROWSERS CLIENT
#include <iostream>
#include "browsers_interface.hpp"

int main(void){
    ::Web::Chrome* wb1 = new ::Web::Chrome;

    wb1->showDetails();

    wb1->setDetails
    (
        "Chrome",
        "Chromium",
        {22, 04,2008},  //date vector
        {"Cookies", "Script", "Sandbox"}    //string vector
    );

    wb1->showDetails();

    std::cout << std::endl;

    ::Web::Firefox* wb2 = new ::Web::Firefox;

    wb2->showDetails();

    wb2->setDetails
    (
        "Firefox",
        "Gecko",
        {11, 03, 2002},
        {"Container", "Script", "No Tracking"}
    );

    wb2->showDetails();

    return 0;
}
