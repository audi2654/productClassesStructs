//PENS SERVER
#include <iostream>
#include "pens_interface.hpp"
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

::Pens::Pen::Pen()
:   sName{"0"},
    svecColors{"0"},
    sRecyclable{"0"},
    usPrice{0}
{

}

::Pens::BallPen::BallPen()
:   sBName{"0"},
    svecBColors{"0"},
    sBRecyclable{"0"},
    usBPrice{0}
{

}

::Pens::InkPen::InkPen()
:   sIName{"0"},
    svecIColors{"0"},
    sIRecyclable{"0"},
    usIPrice{0}
{

}

void ::Pens::Pen::showDetails() const
{
    std::cout << "Inside Pen::showDetails()" << std::endl;

    std::cout << sName << std::endl;
    std::cout << svecColors << std::endl;
    std::cout << sRecyclable << std::endl;
    std::cout << usPrice << std::endl;

    std::cout << std::endl;
}

void ::Pens::InkPen::showDetails() const
{
    std::cout << "Inside InkPen::showDetails()" << std::endl;

    std::cout << sIName << std::endl;
    std::cout << svecIColors << std::endl;
    std::cout << sIRecyclable << std::endl;
    std::cout << usIPrice << std::endl;

    std::cout << std::endl;
}

void ::Pens::Pen::setDetails
(
    std::string _sName,
    std::vector<std::string> _svecColors,
    std::string _sRecyclable,
    unsigned short _usPrice
)
{
    std::cout << "Inside Pen::setDetails()" << std::endl;

    sName = _sName;
    svecColors = _svecColors;
    sRecyclable = _sRecyclable;
    usPrice = _usPrice;

    std::cout << std::endl;
}

void ::Pens::InkPen::setDetails
(
    std::string _sIName,
    std::vector<std::string> _svecIColors,
    std::string _sIRecyclable,
    unsigned short _usIPrice
)
{
    std::cout << "Inside InkPen::setDetails()" << std::endl;

    sIName = _sIName;
    svecIColors = _svecIColors;
    sIRecyclable = _sIRecyclable;
    usIPrice = _usIPrice;

    std::cout << std::endl;
}
