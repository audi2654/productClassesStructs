//TELESCOPES CLIENT TEMPLATE
#include <iostream>
#include "telescope_interface.hpp"

int main(void){
    ::OptiInstru::Refractor nt1;

    show_details<OptiInstru::Refractor&>(nt1);

    nt1.setDetails
    (
        "Reflecting Telescope",
        "Beginner Level",
        "Images Upside Down",
        "Low Cost"
    );

    show_details<OptiInstru::Refractor&>(nt1);      //shows 0000
    //show_details<OptiInstru::Telescope&>(nt1);    //shows correct repsonse

    std::cout << std::endl;

    ::OptiInstru::Telescope nt2;

    show_details<OptiInstru::Telescope>(nt2);

    nt2.setDetails
    (
        "Refracting Telescope",
        "Intermediate Level",
        "Right Side Up",
        "High Cost"
    );

    show_details<OptiInstru::Telescope>(nt2);

    return 0;
}
