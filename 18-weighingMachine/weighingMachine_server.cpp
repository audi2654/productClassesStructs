//WEIGHING MACHINE SERVER
#include <iostream>
#include "weighingMachine_interface.hpp"

::ProductProps::WeighingMachine::WeighingMachine()
:   sName{"name"},
    uiPrice{0},
    sColor{"colot"},
    sDisplayType{"type"},
    fCustomerRatings{0},
    usWeight{0},
    dimensionOfProduct{0,0,0},
    dateFirstAvailable{0, "month",0}
{

}

::ProductProps::WeighingMachine::Dimensions::Dimensions()
:   fLength(0), fWidth(0), fHeight(0)
{

}

::ProductProps::WeighingMachine::Dimensions::Dimensions(float _l, float _w, float _h)
:   fLength(_l), fWidth(_w), fHeight(_h)
{

}

::ProductProps::WeighingMachine::Date::Date()
:   usDay(0), sMonth("empty_month"), usYear(0)
{

}

::ProductProps::WeighingMachine::Date::Date(unsigned short _d, std::string _m, unsigned short _y)
:   usDay(_d), sMonth(_m), usYear(_y)
{

}

void ::ProductProps::WeighingMachine::setMachineDetails
(
    std::string _sName,
    unsigned int _uiPrice,
    std::string _sColor,
    std::string _sDisplayType,
    float _fCustomerRatings,
    unsigned short _usWeight,
    Dimensions _dimensionOfProduct,
    Date _dateFirstAvailable
)
{
    this->sName = _sName;
    uiPrice = _uiPrice;
    sColor = _sColor;
    sDisplayType = _sDisplayType;
    fCustomerRatings = _fCustomerRatings;
    usWeight = _usWeight;
    dimensionOfProduct = _dimensionOfProduct;
    dateFirstAvailable = _dateFirstAvailable;
};

void ::ProductProps::WeighingMachine::showMachineDetails()
{
    std::cout << "Weighing Machine Details are" << std::endl;

    std::cout << sName << std::endl;
    std::cout << uiPrice << std::endl;
    std::cout << sColor << std::endl;
    std::cout << sDisplayType << std::endl;
    std::cout << fCustomerRatings << std::endl;
    std::cout << usWeight << std::endl;
    std::cout << dimensionOfProduct << std::endl;
    std::cout << dateFirstAvailable << std::endl;

    std::cout << std::endl;
};

float ::ProductProps::WeighingMachine::Dimensions::getLength() const
{
    return fLength;
};

float ::ProductProps::WeighingMachine::Dimensions::getWidth() const
{
    return fWidth;
};

float ::ProductProps::WeighingMachine::Dimensions::getHeight() const
{
    return fHeight;
};

unsigned short ::ProductProps::WeighingMachine::Date::getDay() const
{
    return usDay;
};

std::string ProductProps::WeighingMachine::Date::getMonth() const
{
    return sMonth;
};

unsigned short ::ProductProps::WeighingMachine::Date::getYear() const
{
    return usYear;
};

namespace ProductProps
{
    std::ostream& operator<<(std::ostream& os, ::ProductProps::WeighingMachine::Dimensions& resource)
    {
        //os << resource.fLength << "x" << resource.fWidth << "x" << resource.fHeight;    // error : declared private here
        os << resource.getLength() << "x" << resource.getWidth() << "x" << resource.getHeight();    // accessing public methods from Dimensions

        return os;
    };

    std::ostream& operator<<(std::ostream& os, const ::ProductProps::WeighingMachine::Date& resource)
    {
        //std::cout << resource.usDay << "-" << resource.sMonth << "-" << resource.usYear; // error : declared private here
        std::cout << resource.getDay() << "-" << resource.getMonth() << "-" << resource.getYear();    // accessing public methods from Date

        return os;
    };
}
