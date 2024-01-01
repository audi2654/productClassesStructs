//ADHAAR CARD SERVER
#include <iostream>
#include "adhaarCard_interface.hpp"

::IDCard::AdhaarCard::AdhaarCard
(
    unsigned long _n,
    std::string _name,
    std::string _gender,
    Date _dateOfBirth,
    Address _permanentAddr
)
:   ulNumber(_n), 
    sName(_name), 
    sGender(_gender), 
    dateOfBirth(_dateOfBirth), 
    permanentAddr(_permanentAddr)
{

}

::IDCard::Address::Address()
:   sCity{"0"}, uiPinCode(0)
{

}

::IDCard::Address::Address(std::string _c, unsigned int _p)
:   sCity{_c}, uiPinCode(_p)
{

}

::IDCard::Date::Date(unsigned short _d, std::string _m, unsigned short _y)
:   usDay(_d), sMonth(_m), usYear(_y)
{

}

void ::IDCard::AdhaarCard::showDetails()
{
    std::cout << ulNumber << std::endl;
    std::cout << sName << std::endl;
    std::cout << sGender << std::endl;
    std::cout << dateOfBirth << std::endl;
    std::cout << permanentAddr << std::endl;
}

namespace IDCard{
    std::ostream& operator<<(std::ostream& os, const IDCard::Date& resource)
    {
        os << resource.usDay << "-" << resource.sMonth << "-" << resource.usYear;
        return os;
    }

    std::ostream& operator<<(std::ostream& os, const IDCard::Address& resource)
    {
        os << resource.sCity << " " << resource.uiPinCode;
        return os;
    }
}
