//MIC CLIENT
#include <iostream>
#include "mic_interface.hpp"

int main(void){
    ::Device::Mic* nm1 = new ::Device::Mic;

    nm1->showDetails();

    nm1->setDetails
    (
        "Boya ByM1 Microphone",
        1999,
        {"PC", "Phone", "Recorder"},
        {15, "Feb", 2015},
        {1.2, 8.4, 3.6}
    );

    nm1->showDetails();

    return 0;
}
