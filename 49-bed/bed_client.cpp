//BED CLIENT
#include "bed_interface.hpp"

int main(void){
    ::Home::Bed nb1;

    nb1.showDetails();

    nb1.setDetails
    (
        "Wakefit Bed",
        29999,
        "Engineered Wood",
        {"Sturdy", "Brown", "Wood"},
        {2.1, 1.57, 0.6},
        {12, "March", 2022}
    );

    nb1.showDetails();

    std::cout << std::endl;

    return 0;
}