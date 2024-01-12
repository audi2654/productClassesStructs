//HATS CLIENT
#include <iostream>
#include "hats_interface.hpp"

int main(void){
    ::Accessory::CowBoyHat* newHat1 = new ::Accessory::CowBoyHat;

    newHat1->setDetails
    (
        "Cow Boy Hat",
        "Year around",
        {"Leather", "Nylon", "Cotton"},
        18
    );

    newHat1->showDetails("Details of CowBoy Hat are");

    std::cout << std::endl;

    ::Accessory::Hats* newHatP  = new ::Accessory::BabyHat;
    //this is Base* = new DerivedObj case, but because in Base showDetails is not declared as virtual
    //call will always go to the base version of functions so Hats::showDetails() is called

    newHatP->showDetails("Details of Baby Hat are");

    newHatP->setDetails
    (
        "Baby Boy Hat",
        "Winter",
        {"Wool", "Cotton"},
        3
    );

    newHatP->showDetails("Details of Baby Hat are");
}