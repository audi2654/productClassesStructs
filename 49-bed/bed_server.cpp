//BED SERVER
#include <iostream>
#include "bed_interface.hpp"

::Home::Date::Date(unsigned short _d, std::string _m, unsigned short _y)
:   usDay(_d), sMonth(_m), usYear(_y)
{

}

::Home::Dimensions::Dimensions(float _h, float _w, float _l)
:   fHeight(_h), fWidth(_w), fLength(_l)
{

}

::Home::Bed::Bed()
:   sName{"0"},
    uiPrice{0},
    sMaterial{"0"},
    svecFeatures{"0"},
    dimsOfProd{0,0,0},
    dateFirstAvailable{0, "empty", 0}
{

}

void ::Home::Bed::showDetails()
{
    std::cout << std::endl;

    std::cout << sName << std::endl;
    std::cout << uiPrice << std::endl;
    std::cout << sMaterial << std::endl;
    std::cout << svecFeatures << std::endl;
    std::cout << dimsOfProd << std::endl;
    std::cout << dateFirstAvailable << std::endl;

    std::cout << std::endl;
}

void ::Home::Bed::setDetails
(
    std::string _sName,
    unsigned int _uiPrice,
    std::string _sMaterial,
    std::vector<std::string> _svecFeatures,
    Dimensions _dimsOfProd,
    Date _dateFirstAvailable
)
{
    sName = _sName;
    uiPrice = _uiPrice;
    sMaterial = _sMaterial;
    svecFeatures = _svecFeatures;
    dimsOfProd = _dimsOfProd;
    dateFirstAvailable = _dateFirstAvailable;
}

namespace Home{
    std::ostream& operator<<(std::ostream& os, const Date& obj)
    {
        os << obj.usDay << "-" << obj.sMonth << "-" << obj.usYear;
        return os;
    }

    std::ostream& operator<<(std::ostream& os, const Dimensions& obj)
    {
        os << obj.fHeight << "x" << obj.fWidth << "-" << obj.fLength;
        return os;
    }
}
