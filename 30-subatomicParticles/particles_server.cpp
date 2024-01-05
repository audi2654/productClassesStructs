//SUBATOMIC PARTICLES SERVER
#include <iostream>
#include <vector>
#include "particles_interface.hpp"

template <class T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& v)
{
    for(const auto& i : v)
    {
        os << i << "-";
    }
    return os;
}

::Subatomic::Particle::Particle()
:   sName{"0"},
    sDiscoveryBy{"0"},
    composition{LEPTON},
    sVecDate{0},
    bIsElementary{0},
    ssCharge{-0}
{

}

void ::Subatomic::Particle::showDetails()
{
    std::cout << "Particle Details are" << std::endl;

    std::cout << sName << std::endl;
    std::cout << sDiscoveryBy << std::endl;
    std::cout << "Cat : " << composition << std::endl;
    std::cout << sVecDate << std::endl;
    std::cout << "Is Elementary : " << std::boolalpha << bIsElementary << std::endl;
    std::cout << "Charge : " << ssCharge << std::endl;

    std::cout << std::endl;
}

void ::Subatomic::Particle::setDetails
(
    std::string _sName,
    std::string _sDiscoveryBy,
    ::Subatomic::Composition_e _composition,
    std::vector<unsigned short> _sVecDate,
    bool _bIsElementary,
    signed short _ssCharge
)
{
    sName = _sName;
    sDiscoveryBy = _sDiscoveryBy;
    composition = _composition;
    sVecDate = _sVecDate;
    bIsElementary = _bIsElementary;
    ssCharge = _ssCharge;
}
