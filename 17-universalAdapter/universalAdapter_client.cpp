//UNIVERSAL ADAPTER CLIENT
#include <iostream>
#include "universalAdapter_interface.hpp"

int main(void){
    ::productProps::UniversalAdapter* newAdapter = new ::productProps::UniversalAdapter;

    newAdapter->showAdapterDetails();

    newAdapter->setAdapterDetails
    (
        "Universal Adapter",
        1990,
        240,
        90,
        "Black",
        "All Phones",
        {1.2, 5.2, 6.2},
        {1, "Jan", 2022}
    );

    newAdapter->showAdapterDetails();

    return 0;
}
