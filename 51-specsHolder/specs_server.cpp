//SPECS HOLDER SERVER
#include <iostream>
#include "specs_interface.hpp"

::Holder::Date::Date(unsigned short _d, std::string _m, unsigned short _y)
:   usDay(_d), sMonth(_m), usYear(_y)
{

}

::Holder::Dimensions::Dimensions(float _h, float _w, float _l)
:   fHeight(_h), fWidth(_w), fLength(_l)
{

}

::Holder::Specs::Specs()
:   sName{"0"},
    uiPrice{0},
    svecAudience{"0"},
    sMaterial{"0"},
    sTheme{"0"},
    dateFirstAvailable{0, "0", 0},
    dimsOfProduct{0,0,0}
{
    
}

void ::Holder::Specs::showDetails()
{
    std::cout << std::endl;

    std::cout << sName << std::endl;
    std::cout << uiPrice << std::endl;
    std::cout << svecAudience << std::endl;
    std::cout << sMaterial << std::endl;
    std::cout << sTheme << std::endl;
    std::cout << dateFirstAvailable << std::endl;
    std::cout << dimsOfProduct << std::endl;

    std::cout << std::endl;
}

void ::Holder::Specs::setDetails
(
    std::string _sName,
    unsigned int _uiPrice,
    std::vector<std::string> _svecAudience,
    std::string _sMaterial,
    std::string _sTheme,
    Date _dateFirstAvailable,
    Dimensions _dimsOfProduct
)
{
    sName = _sName;
    uiPrice = _uiPrice;
    svecAudience = _svecAudience;
    sMaterial = _sMaterial;
    sTheme = _sTheme;
    dateFirstAvailable = _dateFirstAvailable;
    dimsOfProduct = _dimsOfProduct;
}

namespace Holder{
    std::ostream& operator<<(std::ostream& os, const Date& obj)
    {
        os << obj.usDay << "-" << obj.sMonth << "-" << obj.usYear;
        return os;
    }

    std::ostream& operator<<(std::ostream& os, const Dimensions& obj)
    {
        os << obj.fHeight << "x" << obj.fWidth << "x" << obj.fLength;
        return os;
    }
}
