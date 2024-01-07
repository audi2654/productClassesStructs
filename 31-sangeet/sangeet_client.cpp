//SANGEET CLIENT
#include <iostream>
#include "sangeet_interface.hpp"

int main(void){
    std::cout << "Details of Hindustani Music" << std::endl;
    
    ::ShastriyaSangeet::Hindustani* newMusic1 = new ::ShastriyaSangeet::Hindustani;

    newMusic1->showDetails();
    std::cout << std::endl;

    newMusic1->setDetails
    (
        "North India",
        6,
        {"Afghan", "Persian", "Arab"},
        {"Tabla", "Sarangi", "Sitar", "Santoor"},
        "Gharana Style"
    );

    newMusic1->showDetails();

    std::cout << std::endl;

    std::cout << "Details of Carnatic Music" << std::endl;

    ::ShastriyaSangeet::Carnatic* newMusic2 = new ::ShastriyaSangeet::Carnatic;

    newMusic2->showDetails();
    std::cout << std::endl;

    newMusic2->setDetails
    (
        "South India",
        72,
        {"Native"},
        {"Veena", "Mridangam", "Mandolim"},
        "Vocal Style"
    );

    newMusic2->showDetails();

    std::cout << std::endl;

    return 0;
}
