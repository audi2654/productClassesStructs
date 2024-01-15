//CHEMICALS CLIENT
#include <iostream>
#include "chem_interface.hpp"

int main(void){
    ::Chems::LSD* chem1 = new ::Chems::LSD;

    chem1->showDetails();

    chem1->setDetails
    (
        "Acid",
        "Lysergic Acid Diethylamide",
        {"Increased Body Temp", "Loss of Coordination"},
        {6, 11}
    );

    chem1->showDetails();

    std::cout << std::endl;

    ::Chems::Drugs* chem2 = new ::Chems::MagicMushroom;

    chem2->showDetails();

    chem2->Drugs::setDetails
    (
        "Magic Mushrooms",
        "Psilocybin",
        {"Hallucination", "Panic"},
        {3, 6}
    );

    chem2->Drugs::showDetails();

    return 0;
}
