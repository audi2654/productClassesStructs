// G SEC BONDS CLIENT
#include <iostream>
#include "gsecBonds_interface.hpp"

int main(void){
    ::Market::Bonds* newBond = new ::Market::Bonds;

    newBond->showDetails();

    newBond->setDetails
    (
        "Government Sovereign Gold Bonds",
        10000,
        7.17,
        GoI,
        {8, "Jan", 2018},
        "Every Year"
    );

    newBond->showDetails();
}
