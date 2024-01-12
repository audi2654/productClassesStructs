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

    ::Accessory::BabyHat* newHatP  = new ::Accessory::BabyHat;

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