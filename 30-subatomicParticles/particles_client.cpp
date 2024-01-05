//SUBATOMIC PARTICLES CLIENT
#include <iostream>
#include "particles_interface.hpp"

int main(void){
    ::Subatomic::Particle* newParticle = new ::Subatomic::Particle;

    newParticle->showDetails();

    newParticle->setDetails
    (
        "Electron",
        "JJ Thomson",
        ::Subatomic::Composition_e::LEPTON,
        {30, 05, 1897},
        YES,
        -1
    );

    newParticle->showDetails();
    
    return 0;
}
