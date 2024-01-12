//HATS SERVER
#include <iostream>
#include <vector>
#include "hats_interface.hpp"

template <class T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& v)
{
    for(const auto& i : v)
    {
        os << "[" << i << "]";
    }
    return os;
}

::Accessory::Hats::Hats()
:   sName{"0"},
    sSeason{"0"},
    svecMaterial{"0"},
    usAge{0}
{

}

::Accessory::CowBoyHat::CowBoyHat()
:   sName{"0"},
    sSeason{"0"},
    svecMaterial{"0"},
    usAge{0}
{

}

::Accessory::BabyHat::BabyHat()
:   sName{"baby_empty_hat"},
    sSeason{"0"},
    svecMaterial{"0"},
    usAge{0}
{

}

void ::Accessory::Hats::setDetails
(
    std::string _sName,
    std::string _sSeason,
    std::vector<std::string> _svecMaterial,
    unsigned short _usAge
)
{
    std::cout << "Inside Hats::setDetails()\n" << std::endl;
    sName = _sName;
    sSeason = _sSeason;
    svecMaterial = _svecMaterial;
    usAge = _usAge;
}

void ::Accessory::BabyHat::showDetails(std::string msg) const
{
    std::cout << "Inside BabyHat::showDetails()" << std::endl;

    //::Accessory::Hats::showDetails(msg);

    std::cout << sName << std::endl;
    std::cout << sSeason << std::endl;
    std::cout << svecMaterial << std::endl;
    std::cout << usAge << std::endl; 
}

void ::Accessory::Hats::showDetails(std::string msg) const
{
    std::cout << "Inside Hats::showDetails()" << std::endl;
    
    if(!msg.empty())
        std::cout << msg << std::endl;

    std::cout << sName << std::endl;
    std::cout << sSeason << std::endl;
    std::cout << svecMaterial << std::endl;
    std::cout << usAge << std::endl; 
}
