//MIC SERVER
//#include <iostream>
#include "mic_interface.hpp"

::Device::Date::Date(unsigned short _d, std::string _m, unsigned short _y)
:   usDay(_d), sMonth(_m), usYear(_y)
{

}

::Device::Dimensions::Dimensions(float _h, float _w, float _l)
:   fHeight(_h), fWidth(_w), fLength(_l)
{

}

::Device::Mic::Mic()
:   sName{"0"},
    uiPrice{0},
    svecHardware{"0"},
    dateFirstAvailable{0, "empty", 0},
    dimsOfProduct{0,0,0}
{

}

void ::Device::Mic::showDetails()
{
    std::cout << std::endl;

    std::cout << sName << std::endl;
    std::cout << uiPrice << std::endl;
    std::cout << svecHardware << std::endl;
    std::cout << dateFirstAvailable << std::endl;
    std::cout << dimsOfProduct << std::endl;

    std::cout << std::endl;
}

void ::Device::Mic::setDetails
(
    std::string _sName,
    unsigned int _uiPrice,
    std::vector<std::string> _svecHardware,
    Date _dateFirstAvailable,
    Dimensions _dimsOfProduct
)
{
    sName = _sName;
    uiPrice = _uiPrice;
    svecHardware = _svecHardware;
    dateFirstAvailable = _dateFirstAvailable;
    dimsOfProduct = _dimsOfProduct;
}

namespace Device{
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
