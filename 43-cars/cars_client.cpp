//CARS CLIENT
#include <iostream>
#include "cars_interface.hpp"

int main(void){
    ::Cars::Maruti nc1;

    showDetails<::Cars::Maruti>(nc1);

    nc1.setDetails
    (
        "Maruti 800",
        "Hatchback",
        {2008, 2012, 2023},
        150000
    );

    showDetails<::Cars::Car>(nc1);

    ::Cars::Swift nc2;

    showDetails<::Cars::Swift>(nc2);

    nc2.setDetails
    (
        "Swift Dezire",
        "Sedan",
        {2010, 2015, 2023},
        850000
    );

    showDetails<::Cars::Swift>(nc2);

    return 0;
}