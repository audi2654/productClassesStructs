//SERIES CLIENT
#include <iostream>
#include "series_interface.hpp"

int main(void){
    ::TV::Wire* ns1 = new ::TV::Wire;

    ns1->showDetails();

    ns1->setDetails
    (
        "The Wire",
        {"Dominic West", "Lance Reddick", "Wendell Pierce"},
        {2002},
        9.3
    );

    ns1->showDetails();

    std::cout << std::endl;

    ::TV::Series* ns2 = new ::TV::Cosmos;

    ns2->showDetails();

    ns2->setDetails
    (
        "Cosmos",
        {"Carl Sagan"},
        {1980},
        9.3
    );

    ns2->showDetails();

    return 0;
}
