//CARS SERVER
#include <iostream>
#include "cars_interface.hpp"

::Cars::Car::Car()
:   sName{"empty_car"},
    sType{"0"},
    ivecYears{0},
    dPrice{0}
{

}

::Cars::Maruti::Maruti()
:   sName{"empty_Maruti"},
    sType{"0"},
    ivecYears{0},
    dPrice{0}
{

}

::Cars::Swift::Swift()
:   sName{"empty_Swift"},
    sType{"0"},
    ivecYears{0},
    dPrice{0}
{

}

void ::Cars::Car::setDetails
(
    std::string _sName,
    std::string _sType,
    std::vector<int> _ivecYears,
    double _dPrice
)
{
    this->sName =_sName;
    sType =_sType;
    ivecYears =_ivecYears;
    dPrice = _dPrice;
}
