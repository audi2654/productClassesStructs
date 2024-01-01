// G SEC BONDS SERVER
#include <iostream>
#include "gsecBonds_interface.hpp"

::Market::Bonds::Bonds()
:   sName{"0"},
    uiPrice{0},
    fCouponRate{0},
    sIssuedBy{"0"},
    dateOfIssue{0, "0", 0},
    sPaymentDuration{"0"}
{

}

::Market::Date::Date(unsigned short _d, std::string _m, unsigned short _y)
:   usDay(_d), sMonth(_m), usYear(_y)
{

}

void ::Market::Bonds::setDetails
(
    std::string _sName,
    unsigned int _uiPrice,
    float _fCouponRate,
    std::string _sIssuedBy,
    Date _dateOfIssue,
    std::string _sPaymentDuration
)
{
    sName = _sName;
    uiPrice = _uiPrice;
    fCouponRate = _fCouponRate;
    sIssuedBy = _sIssuedBy;
    dateOfIssue = _dateOfIssue;
    sPaymentDuration = _sPaymentDuration;
}

void ::Market::Bonds::showDetails()
{
    std::cout << sName << std::endl;
    std::cout << uiPrice << std::endl;
    std::cout << fCouponRate << std::endl;
    std::cout << sIssuedBy << std::endl;
    std::cout << dateOfIssue << std::endl;
    std::cout << sPaymentDuration << std::endl;
}

namespace Market{
    std::ostream& operator<<(std::ostream& os, const Date& resource)
    {
        os << resource.usDay << "-" << resource.sMonth << "-" << resource.usYear;
        return os;
    }
}
