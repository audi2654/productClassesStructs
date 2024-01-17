//FRUITS CLIENT
#include <iostream>
#include "fruits_interface.hpp"

int main(void){
    std::string sName{"Lychee"};
    std::string sSeason{"Summer"};
    std::vector<std::string> svecCountry{"Malaysia", "China", "Vietnam"};
    std::vector<int> ivecDays{80,112};

    ::Fruits::Lychee* nf1 = new ::Fruits::Lychee;

    nf1->showDetails();

    nf1->setDetails
    (
        sName,
        sSeason,
        svecCountry,
        ivecDays
    );

    nf1->showDetails();

    std::cout << std::endl;

    sName = "Papaya";
    sSeason = "Spring";
    svecCountry = {"India", "Australia", "Mexico"};
    ivecDays = {130,165};

    ::Fruits::Tropical* nf2 = new ::Fruits::Papaya;

    nf2->Tropical::showDetails();

    nf2->setDetails
    (
        sName,
        sSeason,
        svecCountry,
        ivecDays
    );

    nf2->showDetails();

    std::cout << std::endl;

    return 0;
}
