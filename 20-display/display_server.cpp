// LG DISPLAY SERVER
#include <iostream>
#include "display_interface.hpp"

::ProductProps::Display::Display()
:   sName{"name"},
    uiPrice{0},
    sColor{"color"},
    usPortCount{0},
    usVoltage{0},
    bBatteriesIncluded{false},
    usWeight{0},
    dRatings{0.0},
    dateFirstAvailable{0,"month",0},
    dimensionsOfProduct{0,0,0},
    displayResolution{0,0}
{
    
}

::ProductProps::Display::Date::Date()
:   usDay(0), sMonth("default_month"), usYear(0)
{

}

::ProductProps::Display::Date::Date(unsigned short _d, std::string _m, unsigned short _y)
:   usDay(_d), sMonth(_m), usYear(_y)
{

}

::ProductProps::Display::Dimensions::Dimensions()
:   fLength(0), fWidth(0), fHeight(0)
{

}

::ProductProps::Display::Dimensions::Dimensions(float _f, float _w, float _h)
:   fLength(_f), fWidth(_w), fHeight(_h)
{
    
}

::ProductProps::Display::Dimensions::DisplayDimensions::DisplayDimensions()
:   usHeight(0), usWidth(0)
{

}

::ProductProps::Display::Dimensions::DisplayDimensions::DisplayDimensions(unsigned short _h, unsigned short _w)
:   usHeight(_h), usWidth(_w)
{
    
}

void ::ProductProps::Display::showDetails()
{
    std::cout << "Details for LG Display are" << std::endl;

    std::cout << sName << std::endl;
    std::cout << uiPrice << std::endl;
    std::cout << sColor << std::endl;
    std::cout << usPortCount << std::endl;
    std::cout << usVoltage << std::endl;
    std::cout << std::boolalpha << bBatteriesIncluded << std::endl;
    std::cout << usWeight << std::endl;
    std::cout << dRatings << std::endl;
    std::cout << dateFirstAvailable << std::endl;
    std::cout << dimensionsOfProduct << std::endl;
    std::cout << displayResolution << std::endl;

    std::cout << std::endl;
}

void ::ProductProps::Display::setDetails
(
    std::string _sName,
    unsigned int _uiPrice,
    std::string _sColor,
    unsigned short _usPortCount,
    unsigned short _usVoltage,
    bool _bBatteriesIncluded,
    unsigned short _usWeight,
    double _dRatings,
    Date _dateFirstAvailable,
    Dimensions _dimensionsOfProduct,
    Dimensions::DisplayDimensions _displayResolution  
)
{
    sName = _sName;
    uiPrice = _uiPrice;
    sColor = _sColor;
    usPortCount = _usPortCount;
    usVoltage = _usVoltage;
    bBatteriesIncluded = _bBatteriesIncluded;
    usWeight = _usWeight;
    dRatings = _dRatings;
    dateFirstAvailable = _dateFirstAvailable;
    dimensionsOfProduct = _dimensionsOfProduct;
    displayResolution = _displayResolution;
}

unsigned short ProductProps::Display::Date::getDay() const
{
    return usDay;
}

std::string ProductProps::Display::Date::getMonth() const
{
    return sMonth;
}

unsigned short ProductProps::Display::Date::getYear() const
{
    return usYear;
}

namespace ProductProps{
    std::ostream& operator<<(std::ostream& os, const ::ProductProps::Display::Date& resource)
    {
        std::cout << resource.getDay() << "-" << resource.getMonth() << "-" << resource.getYear();
        return os;
    }

    std::ostream& operator<<(std::ostream& os, const ::ProductProps::Display::Dimensions& resource)
    {
        std::cout << resource.fLength << "x" << resource.fWidth << "x" << resource.fHeight;
        return os;
    }

    std::ostream& operator<<(std::ostream& os, const ::ProductProps::Display::Dimensions::DisplayDimensions& resource)
    {
        std::cout << resource.usHeight << "x" << resource.usWidth;
        return os;
    }
}