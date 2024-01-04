//HOTEL RESERVATION CLIENT
#include <iostream>
#include "hotel_interface.hpp"

int main(void){
    ::Hotel::Reservation* newRes = new ::Hotel::Reservation;

    newRes->showDetails();

    newRes->setDetails
    (
        "Aditya Panchal",
        {1, "Jan", 2024},
        {5, "Jan", 2024},
        "Suite",
        2654,
        {'B', 'L', 'D'},
        99999
    );

    newRes->showDetails();

    return 0;
}
