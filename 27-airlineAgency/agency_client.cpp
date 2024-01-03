//AIRLINE AGENCY CLIENT
#include <iostream>
#include "agency_interface.hpp"

int main(void){
    ::Airline::Agency* newAgency = new ::Airline::Agency;

    newAgency->showDetails();

    newAgency->setDetails
    (
        "Aditya Travel Agency",
        01234567,
        "ABCD",
        {"EK", "ET", "LH", "QR"},
        {1, "April", 2014},
        {"Pune", 411061}
    );

    newAgency->showDetails();

    return 0;
}
