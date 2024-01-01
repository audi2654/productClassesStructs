//STOCK DETAILS SERVER
#include <iostream>
#include "stock_interface.hpp"

::Market::Stock::Stock()
:   sScripName{"0"},
    ulPrice{0},
    ulMarketCapitalization{0},
    ulUpperCircuit{0},
    ulLowerCircuit{0},
    fDividendYield{0},
    dateOfData{0, "0", 0}
{

}

::Market::Date::Date(unsigned short _d, std::string _m, unsigned short _y)
:   usDay(_d), sMonth(_m), usYear(_y)
{
    
}

void ::Market::Stock::setDetails
(
    std::string _sScripName,
    unsigned long _ulPrice,
    unsigned long _ulMarketCapitalization,
    unsigned long _ulUpperCircuit,
    unsigned long _ulLowerCircuit,
    float _fDividendYield,
    Date _dateOfData
)
{
    sScripName = _sScripName;
    ulPrice = _ulPrice;
    ulMarketCapitalization = _ulMarketCapitalization;
    ulUpperCircuit = _ulUpperCircuit;
    ulLowerCircuit = _ulLowerCircuit;
    fDividendYield = _fDividendYield;
    dateOfData = _dateOfData;
}

void ::Market::Stock::showDetails()
{
    std::cout << "Stock Detail are" << std::endl;

    std::cout << sScripName << std::endl;
    std::cout << ulPrice << std::endl;
    std::cout << ulMarketCapitalization << std::endl;
    std::cout << ulUpperCircuit << std::endl;
    std::cout << ulLowerCircuit << std::endl;
    std::cout << fDividendYield << std::endl;
    std::cout << dateOfData << std::endl;

    std::cout << std::endl;
}

namespace Market{
    std::ostream& operator<<(std::ostream& os, const Date& resource)
    {
        os << resource.usDay << "-" << resource.sMonth << "-" << resource.usYear;
        return os;
    }
}
