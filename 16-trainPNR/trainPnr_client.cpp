//TRAIN PNR CLIENT
#include <iostream>
#include "trainPnr_interface.hpp"

int main(void){
    TrainPnr* newPnr = new TrainPnr;

    newPnr->showPnrDetails();

    newPnr->setPnrDetails
    (
        1234567890,
        12926,
        "Paschim Express",
        {7, "Jan", 2024},
        "PNQ",
        "DEL",
        'A',
        1030,
        YES,
        YES
    );

    newPnr->showPnrDetails();

    return 0;
}
