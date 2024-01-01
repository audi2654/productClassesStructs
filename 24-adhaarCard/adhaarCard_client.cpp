//ADHAAR CARD CLIENT
#include <iostream>
#include "adhaarCard_interface.hpp"

int main(void){
    ::IDCard::AdhaarCard* newCard = 
    new ::IDCard::AdhaarCard(
        123456789012,
        "Aditya Panchal",
        M,
        {03, "Feb", 1998},
        {"Sambhajinagar", 431001}
    );

    newCard->showDetails();

    IDCard::Address obj;

    return 0;
}
