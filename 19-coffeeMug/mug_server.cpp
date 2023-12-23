//COFFEE MUG SERVER
#include <iostream>
#include "mug_interface.hpp"

::Mug::CoffeeMug::CoffeeMug()
:   e_Shape{TRIANGLE},
    uiPrice{0},
    e_Color{GREEN},
    sMsgOnMug{"empty_msg"},
    dimensionsOfProduct{0,0,0},
    dateFirstAvailable{0, "empty",0}
{

}

::Mug::CoffeeMug::Dimensions::Dimensions()
:   fLength(0), fWidth(0), fHeight(0)
{
    
}

::Mug::CoffeeMug::Dimensions::Dimensions(float _l, float _w, float _h)
:   fLength(_l), fWidth(_w), fHeight(_h)
{

}

::Mug::CoffeeMug::Date::Date()
:   usDay(0), sMonth("e_month"), usYear(0)
{

}

::Mug::CoffeeMug::Date::Date(unsigned short _d, std::string _m, unsigned short _y)
:   usDay(_d), sMonth(_m), usYear(_y)
{

}

void ::Mug::CoffeeMug::showCoffeeMugDetails()
{
    std::cout << "Coffee Mug Details are" << std::endl;

    std::cout << e_Shape << std::endl;
    std::cout << uiPrice << std::endl;
    std::cout << e_Color << std::endl;
    std::cout << sMsgOnMug << std::endl;
    std::cout << dimensionsOfProduct << std::endl;
    std::cout << dateFirstAvailable << std::endl;

    std::cout << std::endl;
}

void ::Mug::CoffeeMug::setCoffeeMugDetails
(
    shape_t _e_Shape,
    unsigned int _uiPrice,
    color_t _e_Color,
    std::string _sMsgOnMug,
    Dimensions _dimensionsOfProduct,
    Date _dateFirstAvailable
)
{
    e_Shape = _e_Shape;
    uiPrice = _uiPrice;
    e_Color = _e_Color;
    sMsgOnMug = _sMsgOnMug;
    dimensionsOfProduct = _dimensionsOfProduct;
    dateFirstAvailable = _dateFirstAvailable;
}

float ::Mug::CoffeeMug::Dimensions::getLength() const
{
    return fLength;
}

float ::Mug::CoffeeMug::Dimensions::getWidth() const
{
    return fWidth;
}

float ::Mug::CoffeeMug::Dimensions::getHeight() const
{
    return fHeight;
}

unsigned short Mug::CoffeeMug::Date::getDay() const
{
    return usDay;
}

std::string Mug::CoffeeMug::Date::getMonth() const
{
    return sMonth;
}

unsigned short Mug::CoffeeMug::Date::getYear() const
{
    return usYear;
}

namespace Mug{
    std::ostream& operator<<(std::ostream& os, const ::Mug::CoffeeMug::Dimensions& resource)
    {
        std::cout << resource.getLength() << "x" << resource.getWidth() << "x" << resource.getHeight();
        
        return os;
    }

    std::ostream& operator<<(std::ostream& os, const ::Mug::CoffeeMug::Date& resource)
    {
        std::cout << resource.usDay << "-" << resource.sMonth << "-" << resource.usYear;
        
        return os;
    }
}
