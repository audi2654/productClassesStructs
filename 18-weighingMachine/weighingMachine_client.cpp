//WEIGHING MACHINE CLIENT
#include <iostream>
#include "weighingMachine_interface.hpp"

int main(void){
    WeighingMachine newMachine = new WeighingMachine;

    newMachine->showMachineDetails();

    newMachine->setMachineDetails
    (
        "Healthgenie Weighing Machine",
        789,
        "Sporty Red",
        "LCD",
        4.3,
        814,
        {26, 26, 2},
        {19, "May", 2022}
    );

    newMachine->showMachineDetails();
    
    return 0;
}