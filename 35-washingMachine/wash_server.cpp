//WASHING MACHINE SERVER
#include <iostream>
#include "wash_interface.hpp"
#include <vector>

template <class T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& v)
{
    for(const auto& i : v)
    {
        os << "[" << i << "]";
    }
    return os;
}

::Laundry::WashMach::WashMach()
:   sType{"0"},
    sLoadType{"0"},
    svecFeatures{"0"},
    iVolt{1},
    iCapacity{0}
{
    
}

::Laundry::SemiWash::SemiWash()
:   sSType{"0"},
    sSLoadType{"0"},
    svecSFeatures{"0"},
    iSVolt{1},
    iSCapacity{0}
{
    
}

::Laundry::AutoWash::AutoWash()
:   sAType{"0"},
    sALoadType{"0"},
    svecAFeatures{"0"},
    iAVolt{1},
    iACapacity{0}
{
    
}

void ::Laundry::WashMach::showDetails() const
{
    std::cout << "Inside WashMach::showDetails()" << std::endl;

    std::cout << sType << std::endl;
    std::cout << sLoadType << std::endl;
    std::cout << svecFeatures << std::endl;
    std::cout << iVolt << std::endl;
    std::cout << iCapacity << std::endl;

    std::cout << std::endl;
}

void ::Laundry::WashMach::setDetails
(
    std::string _sType,
    std::string _sLoadType,
    std::vector<std::string> _svecFeatures,
    int _iVolt,
    int _iCapacity
)
{
    std::cout << "Inside WashMach::setDetails()" << std::endl;

    sType = _sType;
    sLoadType = _sLoadType;
    svecFeatures = _svecFeatures;
    iVolt = _iVolt;
    iCapacity = _iCapacity;

    std::cout << std::endl;
}

void ::Laundry::AutoWash::setDetails
(
    std::string _sAType,
    std::string _sALoadType,
    std::vector<std::string> _svecAFeatures,
    int _iAVolt,
    int _iACapacity
)
{
    std::cout << "Inside AutoWash::setDetails()" << std::endl;

    sAType = _sAType;
    sALoadType = _sALoadType;
    svecAFeatures = _svecAFeatures;
    iAVolt = _iAVolt;
    iACapacity = _iACapacity;

    std::cout << std::endl;
}
