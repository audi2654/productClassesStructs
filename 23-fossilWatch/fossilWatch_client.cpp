//FOSSIL WATCH CLIENT
//https://www.fossil.com/en-in/products/machine-automatic-black-stainless-steel-watch/ME3253.html
#include <iostream>
#include "fossilWatch_interface.hpp"

int main(void){
    ::ProductProps::Watch newWatch;

    newWatch.showDetails();
    
    newWatch.setDetails
    (
        "Machine Automatic Watch",
        21995,
        45,
        "Black",
        4.7,
        0,
        {1.2,1.3,1.4},
        {1, "April", 2023}
    );

    newWatch.showDetails();

    return 0;
}