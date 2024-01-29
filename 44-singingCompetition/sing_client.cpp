//SINGING COMPETITION CLIENT
#include <iostream>
#include "sing_interface.hpp"

int main(void){
    ::Compete::Rap nc1;

    showDetails<::Compete::Rap>(nc1);

    nc1.setDetails
    (
        "Aditya Panchal",
        "Rap",
        {"Hindi", "Marathi", "English"},
        25,
        {9.2, 9.3, 9.4}
    );

    showDetails<::Compete::Sing>(nc1);

    std::cout << std::endl;

    ::Compete::Rock nc2;

    showDetails<::Compete::Rock>(nc2);

    nc2.setDetails

    (
        "Aditya",
        "Rock",
        {"French", "Tulu", "Telugu"},
        26,
        {9.8, 9.7, 9.6}
    );

    showDetails<::Compete::Rock>(nc2);

    return 0;
}
