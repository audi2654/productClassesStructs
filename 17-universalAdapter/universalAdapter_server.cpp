//UNIVERSAL ADAPTER SERVER
#include <iostream>
#include "universalAdapter_interface.hpp"

::productProps::UniversalAdapter::Dimensions::Dimensions(){
    //default constructor
}

::productProps::UniversalAdapter::Dimensions::Dimensions(float _l, float _w, float _h)
:   fLength(_l), fWidth(_w), fHeight(_h)
{
    //parameterised constr
}

namespace productProps{
    std::ostream& operator<<(std::ostream& os, const ::productProps::UniversalAdapter::Dimensions& resource){
        std::cout   << resource.getLength() << "x" 
                    << resource.getWidth() << "x" 
                    << resource.getHeight();
        return os;
    }
}


productProps::UniversalAdapter::Date::Date(){
    //default constructor
}

productProps::UniversalAdapter::Date::Date(unsigned short _d, std::string _m, unsigned short _y)
:   usDay(_d), sMonth(_m), usYear(_y)
{
    //parameterised constr
}

namespace productProps{
    std::ostream& operator<<(std::ostream& os, const productProps::UniversalAdapter::Date& resource){
        std::cout   << resource.usDay << "-" 
                    << resource.sMonth << "-" 
                    << resource.usYear;
        return os;
    }
}

::productProps::UniversalAdapter::UniversalAdapter()
:   sName{"empty_name"},
    usPrice{0},
    usRatedVoltage{0},
    usWeight{0},
    sColor{"empty_color"},
    sCompatibility{"empty_compatibility"},
    dimensionsOfProduct{0, 0, 0},
    dateFirstAvailable{0, "empty_month",0}
{

}

void ::productProps::UniversalAdapter::setAdapterDetails
(
    std::string _sName,
    unsigned int _usPrice,
    unsigned short _usRatedVoltage,
    unsigned short _usWeight,
    std::string _sColor,
    std::string _sCompatibility,
    Dimensions _dimensionsOfProduct,
    Date _dateFirstAvailable
)
{
    sName = _sName;
    usPrice = _usPrice;
    usRatedVoltage = _usRatedVoltage;
    usWeight = _usWeight;
    sColor = _sColor;
    sCompatibility = _sCompatibility;
    dimensionsOfProduct = _dimensionsOfProduct;
    dateFirstAvailable = _dateFirstAvailable;
}

void ::productProps::UniversalAdapter::showAdapterDetails()
{
    std::cout << "Universal Adapter details are" << std::endl;

    std::cout << sName << std::endl;
    std::cout << usPrice << std::endl;
    std::cout << usRatedVoltage << std::endl;
    std::cout << usWeight << std::endl;
    std::cout << sColor << std::endl;
    std::cout << sCompatibility << std::endl;
    std::cout << dimensionsOfProduct << std::endl;
    std::cout << dateFirstAvailable << std::endl;

    std::cout << std::endl;
}