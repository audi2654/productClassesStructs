//HOTEL RESERVATION SERVER
#include <iostream>
#include <vector>
#include "hotel_interface.hpp"

template <class T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& v)
{
    for(const auto& i : v) {
        os << "[" << i << "]";
    }
    return os;
}

::Hotel::Reservation::Reservation()
:   sName{"0"},
    checkInDate{0, "0", 0},
    checkOutDate{0, "0", 0},
    sRoomType{"0"},
    iRoomID{0},
    svecMeals{'0'},
    iCost{0}
{

}

::Hotel::Date::Date(unsigned short _d, std::string _m, unsigned short _y)
:   usDay{_d}, sMonth{_m}, usYear{_y}
{

}

void ::Hotel::Reservation::showDetails()
{
    std::cout << "Details of Hotel Reservation are" << std::endl; 

    std::cout << sName << std::endl;
    std::cout << checkInDate << std::endl;
    std::cout << checkOutDate << std::endl;
    std::cout << sRoomType << std::endl;
    std::cout << iRoomID << std::endl;
    std::cout << svecMeals << std::endl;
    std::cout << iCost << "$" << std::endl;

    std::cout << std::endl;
}

void ::Hotel::Reservation::setDetails
(
    std::string _sName,
    Date _checkInDate,
    Date _checkOutDate,
    std::string _sRoomType,
    int _iRoomID,
    std::vector<char> _svecMeals,
    int _iCost
)
{
    sName = _sName;
    checkInDate = _checkInDate;
    checkOutDate = _checkOutDate;
    sRoomType = _sRoomType;
    iRoomID = _iRoomID;
    svecMeals = _svecMeals;
    iCost = _iCost;
}

namespace Hotel{
    std::ostream& operator<<(std::ostream& os, const Date& resource)
    {
        os << resource.usDay << "-" << resource.sMonth << "-" << resource.usYear;
        return os;
    }
}
