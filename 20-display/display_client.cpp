// LG DISPLAY CLIENT
#include <iostream>
#include "display_interface.hpp"

int main(void){
    ::ProductProps::Display* newDisplay = new ::ProductProps::Display;

    newDisplay->showDetails();

    newDisplay->setDetails
    (
        "LG Display",
        24990,
        27,
        

        {1080, 1920},
        {1.2, 1.3, 1.4},
        {12, "April", 2023}
    );
    
    newDisplay->showDetails();

    return 0;
}