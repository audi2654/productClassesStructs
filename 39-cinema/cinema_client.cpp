//CINEMA CLIENT
#include <iostream>
#include "cinema_interface.hpp"

int main(void){
    ::Art::Saltburn* nm1 = new ::Art::Saltburn;

    (*nm1).showDetails();

    (*nm1).setDetails
    (
        "Saltburn",
        {"Barry Keoghan", "Jacob Elordi", "Rosamund Pike"},
        131,
        3.5,
        {{31, "Aug", 2023}, {23, "Sep", 2023}, {04, "Oct", 2023}}
    );

    (*nm1).showDetails();

    std::cout << std::endl;

    ::Art::Cinema* nm2 = new ::Art::Menu;

    nm2->showDetails();

    nm2->setDetails
    (
        "The Menu",
        {"Anya Taylor-Joy", "Ralph Fiennes", "Nicholas Hoult", "Janet McTeer"},
        107,
        3.6,
        {{10, "Sep", 2022}, {23, "Sep", 2023}, {11, "Nov", 2022}}
    );

    nm2->showDetails();
    
    return 0;
}
