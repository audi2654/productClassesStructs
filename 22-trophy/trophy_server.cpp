//TROPHY SERVER
#include <iostream>
#include "trophy_interface.hpp"

::Dims::Dimensions::Dimensions()
:   fLength{0}, fWidth{0}, fHeight{0}
{

}

::Dims::Dimensions::Dimensions(float _l, float _w, float _h)
:   fLength{_l}, fWidth{_w}, fHeight{_h}
{

}

::ProductProps::Trophy::Trophy()
:   sName{"empty"},
    uiPrice{0},
    sShape{"empty"},
    sColor{"empty"},
    sMaterial{"empty"},
    dateFirstAvailable{0, "empty",0},
    dimensionsOfProduct{0,0,0}
{

}

::ProductProps::Trophy::Date::Date()
:   usDay(0), sMonth("empty"), usYear{0}
{

}

::ProductProps::Trophy::Date::Date(unsigned short _d, std::string _m, unsigned short _y)
:   usDay(_d), sMonth(_m), usYear{_y}
{

}

void ::ProductProps::Trophy::showDetails()
{
    std::cout << "Details of Trophy are" << std::endl;

    std::cout << sName << std::endl;
    std::cout << uiPrice << std::endl;
    std::cout << sShape << std::endl;
    std::cout << sColor << std::endl;
    std::cout << sMaterial << std::endl;
    std::cout << dateFirstAvailable << std::endl;
    std::cout << dimensionsOfProduct << std::endl;

    std::cout << std::endl;
}

void ::ProductProps::Trophy::setDetails
(
    std::string _sName,
    unsigned int _uiPrice,
    std::string _sShape,
    std::string _sColor,
    std::string _sMaterial,
    Date _dateFirstAvailable,
    ::Dims::Dimensions _dimensionsOfProduct
)
{
    sName = _sName;
    uiPrice = _uiPrice;
    sShape = _sShape;
    sColor = _sColor;
    sMaterial = _sMaterial;
    dateFirstAvailable = _dateFirstAvailable;
    dimensionsOfProduct = _dimensionsOfProduct;
}

namespace ProductProps{
    std::ostream& operator<<(std::ostream& os, const ::ProductProps::Trophy::Date& resource)
    {
        std::cout << resource.usDay << "-" << resource.sMonth << "-" << resource.usYear;
        return os;
    }
}

namespace Dims{
    std::ostream& operator<<(std::ostream& os, const Dims::Dimensions& resource)
    {
        std::cout << resource.fLength << "x" << resource.fWidth << "x" << resource.fHeight;
        return os;
    }
}
