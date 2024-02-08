//HANDBAG CLIENT
#include <iostream>
#include "handbag_interface.hpp"

int main(void){
    ::Handbag::CoinPurse* nP1 = ::Handbag::CoinPurse;

    showDetails<::Handbag::Purse>(*nP1);

    nP1->setDetails
    (
        "Coin Purse",
        4999,
        "Leather",
        {"Crocodile Green", "Vampire Red"},
        {4.2, 8.2, 6.2}
    );

    showDetails<::Handbag::Purse>(*nP1);

    std::cout << std::endl;

    ::Handbag::Purse* nP2 = ::Handbag::ClutchPurse;

    showDetails<::Handbag::Purse>(*nP2);

    nP2->setDetails
    (
        "Clutch Purse",
        9999,
        "Cloth",
        {"Teal", "Pastel Blue"},
        {1.2, 3.22, 8.9}
    );

    showDetails<::Handbag::Purse>(*nP2);

    return 0;
}
