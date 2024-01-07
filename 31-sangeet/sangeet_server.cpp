//SANGEET SERVER
#include <iostream>
#include <vector>
#include "sangeet_interface.hpp"

template <class T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& v)
{
    for(const auto& i : v)
    {
        os << "[" << i << "]";
    }
    return os;
}

::ShastriyaSangeet::Sangeet::Sangeet()
:   sRegion{"0"},
    usRagaCount{0},
    svecInfluencedBy{"0"},
    svecInstruments{"0"},
    sStyle{"0"}
{

}

::ShastriyaSangeet::Hindustani::Hindustani()
:   sRegion{"0"},
    usRagaCount{0},
    svecInfluencedBy{"0"},
    svecInstruments{"0"},
    sStyle{"0"}
{

}

::ShastriyaSangeet::Carnatic::Carnatic()
:   sRegion{"0"},
    usRagaCount{0},
    svecInfluencedBy{"0"},
    svecInstruments{"0"},
    sStyle{"0"}
{

}

void ::ShastriyaSangeet::Sangeet::showDetails()
{
    std::cout << "Inside Sangeet::showDetails()" << std::endl;

    std::cout << sRegion << std::endl;
    std::cout << usRagaCount << std::endl;
    std::cout << svecInfluencedBy << std::endl;
    std::cout << svecInstruments << std::endl;
    std::cout << sStyle << std::endl;
}

void ::ShastriyaSangeet::Sangeet::setDetails
(
    std::string _sRegion,
    unsigned short _usRagaCount,
    std::vector<std::string> _svecInfluencedBy,
    std::vector<std::string> _svecInstruments,
    std::string _sStyle
)
{
    sRegion = _sRegion;
    usRagaCount = _usRagaCount;
    svecInfluencedBy = _svecInfluencedBy;
    svecInstruments = _svecInstruments;
    sStyle = _sStyle;
}

void ::ShastriyaSangeet::Carnatic::showDetails()
{
    std::cout << "Inside Carnatic::showDetails()" << std::endl;

    std::cout << sRegion << std::endl;
    std::cout << usRagaCount << std::endl;
    std::cout << svecInfluencedBy << std::endl;
    std::cout << svecInstruments << std::endl;
    std::cout << sStyle << std::endl;
}
