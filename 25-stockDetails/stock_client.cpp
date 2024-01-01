//STOCK DETAILS CLIENT
#include <iostream>
#include "stock_interface.hpp"

int main(void){
    ::Market::Stock* newStock = new ::Market::Stock;

    newStock->showDetails();

    newStock->setDetails
    (
        "MRF",
        129423,
        54936,
        142000,
        116000,
        0.14,
        {1, "Dec", 2023}
    );

    newStock->showDetails();

    return 0;
}
