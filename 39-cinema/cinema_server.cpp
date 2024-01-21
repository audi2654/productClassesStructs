//CINEMA SERVER
#include <iostream>
#include "cinema_interface.hpp"
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

::Art::Date::Date(unsigned short _d, std::string _m, unsigned short _y)
:   usDay(_d), sMonth(_m), usYear(_y)
{

}

::Art::Cinema::Cinema()
:   sName{"empty"},
    svecCast{"empty"},
    usRuntime{0},
    fRatings{0.0},
    dvecReleases{{0, "empty", 0}}
{

}

::Art::Saltburn::Saltburn()
:   sSName{"empty"},
    svecSCast{"empty"},
    usSRuntime{0},
    fSRatings{0.0},
    dvecSReleases{{0, "empty", 0}}
{

}

::Art::Menu::Menu()
:   sMName{"empty"},
    svecMCast{"empty"},
    usMRuntime{0},
    fMRatings{0.0},
    dvecMReleases{{0, "empty", 0}}
{

}

void ::Art::Cinema::showDetails() const
{
    std::cout << "Inside Cinema::showDetails()" << std::endl;

    std::cout << sName << std::endl;
    std::cout << svecCast << std::endl;
    std::cout << usRuntime << std::endl;
    std::cout << fRatings << std::endl;
    std::cout << dvecReleases << std::endl;

    std::cout << std::endl;
}

void ::Art::Cinema::setDetails
(
    std::string _sName,
    std::vector<std::string> _svecCast,
    unsigned short _usRuntime,
    float _fRatings,
    std::vector<Date> _dvecReleases
)
{
    std::cout << "Inside Cinema::setDetails()" << std::endl;

    sName = _sName;
    svecCast = _svecCast;
    usRuntime = _usRuntime;
    fRatings = _fRatings;
    dvecReleases = _dvecReleases;

    std::cout << std::endl;
}

void ::Art::Menu::showDetails() const
{
    std::cout << "Inside Menu::showDetails()" << std::endl;

    std::cout << sMName << std::endl;
    std::cout << svecMCast << std::endl;
    std::cout << usMRuntime << std::endl;
    std::cout << fMRatings << std::endl;
    std::cout << dvecMReleases << std::endl;

    std::cout << std::endl;
}

void ::Art::Menu::setDetails
(
    std::string _sMName,
    std::vector<std::string> _svecMCast,
    unsigned short _usMRuntime,
    float _fMRatings,
    std::vector<Date> _dvecMReleases
)
{
    std::cout << "Inside Menu::setDetails()" << std::endl;

    sMName = _sMName;
    svecMCast = _svecMCast;
    usMRuntime = _usMRuntime;
    fMRatings = _fMRatings;
    dvecMReleases = _dvecMReleases;

    std::cout << std::endl;
}

namespace Art{
    std::ostream& operator<<(std::ostream& os, const Date& resource)
    {
        os << resource.usDay << "-" << resource.sMonth << "-" << resource.usYear;
        return os;
    }
}
