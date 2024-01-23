//SERIES SERVER
#include <iostream>
#include "series_interface.hpp"
#include <type_traits>

template <class T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& v)
{
    if(std::is_same<T, std::string>::value){
        for(const auto &i : v)
            os << "[" << i << "]";
    }
    else{
        for(int i = 0; i < v.size(); ++i)
        {
            os << "[" << v.at(i) << "]";
        }
    }
    return os;
}

::TV::Date::Date(unsigned short _y)
:   usDay{0}, sMonth{0}, usYear{_y}
{
    
}

::TV::Date::Date(unsigned short _d, std::string _m, unsigned short _y)
:   usDay{_d}, sMonth{_m}, usYear{_y}
{

}

::TV::Series::Series()
:   sName{"0"},
    svecCast{"0"},
    ivecDate{0},
    fRatings{0}
{

}

::TV::Wire::Wire()
:   sWName{"0"},
    svecWCast{"0"},
    ivecWDate{0},
    fWRatings{0}
{

}

::TV::Cosmos::Cosmos()
:   sCName{"0"},
    svecCCast{"0"},
    ivecCDate{0},
    fCRatings{0}
{

}

void ::TV::Series::showDetails() const
{
    std::cout << "Inside Series::showDetails()" << std::endl;

    std::cout << sName << std::endl;
    std::cout << svecCast << std::endl;
    std::cout << ivecDate << std::endl;
    std::cout << fRatings << std::endl;

    std::cout << std::endl;
}

void ::TV::Series::setDetails
(
    std::string _sName,
    std::vector<std::string> _svecCast,
    std::vector<Date> _ivecDate,
    float _fRatings
)
{
    std::cout << "Inside Series::setDetails()" << std::endl;

    sName = _sName;
    svecCast = _svecCast;
    ivecDate = _ivecDate;
    fRatings = _fRatings;

    std::cout << std::endl;
}

void ::TV::Cosmos::showDetails() const
{
    std::cout << "Inside Cosmos::showDetails()" << std::endl;

    std::cout << sCName << std::endl;
    std::cout << svecCCast << std::endl;
    std::cout << ivecCDate << std::endl;
    std::cout << fCRatings << std::endl;

    std::cout << std::endl;
}

void ::TV::Cosmos::setDetails
(
    std::string _sCName,
    std::vector<std::string> _svecCCast,
    std::vector<Date> _ivecCDate,
    float _fCRatings
)
{
    std::cout << "Inside Cosmos::setDetails()" << std::endl;

    sCName = _sCName;
    svecCCast = _svecCCast;
    ivecCDate = _ivecCDate;
    fCRatings = _fCRatings;

    std::cout << std::endl;
}


//if i put this at top of program i get error on all compilers, why ?
namespace TV{
    std::ostream& operator<<(std::ostream& os, const Date& resource)
    {
        if(resource.usDay > 0){
            os << resource.usDay << "-" << resource.sMonth << "-" << resource.usYear;
        }
        os << resource.usYear;

        return os;
    }
}

//also this program works on GNU G++, MingGW G++ but not on cl.exe