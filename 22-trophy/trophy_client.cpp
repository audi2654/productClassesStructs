//TROPHY CLIENT
#include <iostream>
#include "trophy_interface.hpp"

int main(void){
    ::ProductProps::Trophy newTrophy;

    newTrophy.showDetails();

    newTrophy.setDetails
    (
        "Cricket Tournament Trophy",
        9999,
        "Star",
        "Black",
        "Wooden",
        {1, "December", 2022},
        {1.2, 1.3, 2.14}
    );

    newTrophy.showDetails();
}
