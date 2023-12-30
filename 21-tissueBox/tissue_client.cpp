//TISSUE BOX CLIENT
#include <iostream>
#include "tissue_interface.hpp"

int main(void){
    ProductProps::TissueBox* newTissue = new ProductProps::TissueBox;

    newTissue->showDetails(newTissue);

    newTissue->setDetails
    (
        "Origami Tissue Box",
        219,
        "Paper",
        4.1,
        630,
        {1.4, 1.6, 1.7},
        {12, "April", 2015}
    );

    newTissue->showDetails(newTissue);

    std::cout << newTissue << std::endl;

    return 0;
}
