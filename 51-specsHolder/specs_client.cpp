//SPECS HOLDER CLIENT
#include <iostream>
#include "specs_interface.hpp"

int main(void){
    ::Holder::Specs* ns1 = new ::Holder::Specs;

    ns1->showDetails();

    ns1->setDetails
    (
        "Craftland Specs Holder",
        240,
        {"Boys", "students", "teachers", "doctors"},
        "Wood",
        "Love",
        {22, "Jan", 2024},
        {6, 11, 16}
    );

    ns1->showDetails();

    return 0;
}
