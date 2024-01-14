//WASHING MACHINE CLIENT
#include <iostream>
#include "wash_interface.hpp"

int main(void){
    ::Laundry::SemiWash wm1;
    ::Laundry::SemiWash& refWm = wm1;

    refWm.showDetails();

    refWm.setDetails
    (
        "Semi Automatic",
        "Front Load",
        {"Inverter", "Child Lock", "Autorestart"},
        230,
        9
    );

    refWm.showDetails();

    std::cout << std::endl;

    ::Laundry::AutoWash* wm2 = new ::Laundry::AutoWash;

    wm2->showDetails();

    wm2->setDetails
    (
        "Fully Automatic",
        "Top Load",
        {"AI", "Internet", "Heater"},
        230,
        15
    );

    wm2->showDetails();

    std::cout << std::endl;

    //----------------------------------------------//
    ::Laundry::WashMach* wm3 = new ::Laundry::AutoWash;

    wm3->showDetails();

    wm3->WashMach::setDetails
    (
        "Fully Automatic",
        "Top Load",
        {"AI", "Internet", "Heater"},
        230,
        15
    );

    wm3->showDetails();

    return 0;
}
