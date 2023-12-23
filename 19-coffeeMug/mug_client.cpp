//COFFEE MUG CLIENT
#include <iostream>
#include "mug_interface.hpp"

int main(void){
    Mug::CoffeeMug* newCoffeeMug = new Mug::CoffeeMug;

    newCoffeeMug->showCoffeeMugDetails();

    newCoffeeMug->setCoffeeMugDetails
    (
        Mug::CoffeeMug::Shape::CIRCULAR,
        990,
        Mug::CoffeeMug::Color::BLACK,
        "Coffee Makes Everything Better",
        {2.0,1.5,4.0},
        {1, "Sept", 2022}
    );

    newCoffeeMug->showCoffeeMugDetails();

    return 0;
}
