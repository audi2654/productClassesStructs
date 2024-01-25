//BEN 10 ALIENS CLIENT
#include <iostream>
#include "aliens_interface.hpp"

int main(void){
    ::Ben10::HeatBlast na1;

    show_details<::Ben10::HeatBlast>(na1);

    na1.set_details
    (
        "Heat Blast",
        "Original Series",
        "Pyrokinesis",
        "Pyros"
    );

    show_details<::Ben10::Aliens>(na1);
    return 0;
}
