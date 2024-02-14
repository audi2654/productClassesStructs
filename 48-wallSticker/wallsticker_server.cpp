//WALL STICKER SERVER
#include <iostream>
#include "wallsticker_interface.hpp"

::Decor::Date::Date(unsigned short _d, std::string _m, unsigned short _y)
:   usDay(_d), sMonth(_m), usYear(_y)
{

}

::Decor::Dimensions::Dimensions(float _h, float _w, float _l)
:   fHeight(_h), fWidth(_w), fLength(_l)
{

}

::Decor::WallSticker::WallSticker()
:   sName{"0"},
    sTheme{"0"},
    usQuantity{0},
    usWeight{0},
    struc_DimsOfProduct{0, 0, 0},
    dateFirstAvailable{0, "empty", 0}
{

}

void ::Decor::WallSticker::showDetails()
{
    std::cout << "Product Details of Wall Sticker" << std::endl;

    std::cout << sName << std::endl;
    std::cout << sTheme << std::endl;
    std::cout << usQuantity << std::endl;
    std::cout << usWeight << std::endl;
    std::cout << struc_DimsOfProduct << std::endl;
    std::cout << dateFirstAvailable << std::endl;

    std::cout << std::endl;
}

void ::Decor::WallSticker::setDetails
(
    std::string _sName,
    std::string _sTheme,
    unsigned short _usQuantity,
    unsigned short _usWeight,
    Dimensions _struc_DimsOfProduct,
    Date _dateFirstAvailable
)
{
    sName = _sName;
    sTheme = _sTheme;
    usQuantity = _usQuantity;
    usWeight = _usWeight;
    struc_DimsOfProduct = _struc_DimsOfProduct;
    dateFirstAvailable = _dateFirstAvailable;
}

namespace Decor{
std::ostream& operator<<(std::ostream& os, const ::Decor::Date& resource)
{
    os << resource.usDay << "-" << resource.sMonth << "-" << resource.usYear;
    return os;
}

std::ostream& operator<<(std::ostream& os, const ::Decor::Dimensions& resource)
{
    os << resource.fHeight << "x" << resource.fWidth << "x" << resource.fLength;
    return os;
}
}