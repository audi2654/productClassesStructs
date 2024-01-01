//FOSSIL WATCH SERVER
#include <iostream>
#include "fossilWatch_interface.hpp"

::ProductProps::Watch::Watch()
:   sName{"0"},
    uiPrice{0},
    usCaseSize{0},
    sColor{"0"},
    fRatings{0},
    bBatteriesIncluded{0},
    dimensionsOfProduct{0,0,0},
    dateFirstAvailable{0,"0",0}
{

}

::ProductProps::Watch::Dimensions::Dimensions()
:   fLength(0), fWidth(0), fHeight(0)
{
    
}

::ProductProps::Watch::Dimensions::Dimensions(float _l, float _w, float _h)
:   fLength(_l), fWidth(_w), fHeight(_h)
{
    
}

::ProductProps::Watch::Dimensions::Date::Date()
:   usDay(0), sMonth("0"), usYear(0)
{

}

::ProductProps::Watch::Dimensions::Date::Date(unsigned short _d, std::string _m, unsigned short _y)
:   usDay(_d), sMonth(_m), usYear(_y)
{

}

void ::ProductProps::Watch::showDetails()
{
    std::cout << "Details of Fossil Watch are" << std::endl;

    std::cout << sName << std::endl;
    std::cout << uiPrice << std::endl;
    std::cout << usCaseSize << std::endl;
    std::cout << sColor << std::endl;
    std::cout << fRatings << std::endl;
    std::cout << bBatteriesIncluded << std::endl;
    std::cout << dimensionsOfProduct << std::endl;
    std::cout << dateFirstAvailable << std::endl;

    std::cout << std::endl;
}

void ::ProductProps::Watch::setDetails
(
    std::string _sName,
    unsigned int _uiPrice,
    unsigned short _usCaseSize,
    std::string _sColor,
    float _fRatings,
    bool _bBatteriesIncluded,
    Dimensions _dimensionsOfProduct,
    Dimensions::Date _dateFirstAvailable
)
{
    sName = _sName;
    uiPrice = _uiPrice;
    usCaseSize = _usCaseSize;
    sColor = _sColor;
    fRatings = _fRatings;
    bBatteriesIncluded = _bBatteriesIncluded;
    dimensionsOfProduct = _dimensionsOfProduct;
    dateFirstAvailable = _dateFirstAvailable;
}

unsigned short ::ProductProps::Watch::Dimensions::Date::getDay() const
{
    return usDay;
}

std::string ProductProps::Watch::Dimensions::Date::getMonth() const
{
    return sMonth;
}

unsigned short ::ProductProps::Watch::Dimensions::Date::getYear() const
{
    return usYear;
}


namespace ProductProps{
    std::ostream& operator<<(std::ostream& os, const Watch::Dimensions& resource)
    {
        os << resource.fLength << "x" << resource.fWidth << "x" << resource.fHeight;
        return os;
    }

    std::ostream& operator<<(std::ostream& os, const Watch::Dimensions::Date& resource)
    {
        os << resource.getDay() << "-" << resource.getMonth() << "-" << resource.getYear() << " ";
        os << resource.usDay << "-" << resource.sMonth << "-" << resource.usYear;

        return os;
    }
}
