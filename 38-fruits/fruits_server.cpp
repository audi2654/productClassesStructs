//FRUITS SERVER
#include <iostream>
#include "fruits_interface.hpp"
#include <type_traits>

template <class T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& v)
{
    if(std::is_same<T, std::string>::value){
        for(const auto& i : v)
            os << "[" << i << "]";
    }
    else{
        for(int i = 0; i < v.size(); ++i)
        {
            os << v.at(i);

            if(i == v.size() - 1)
                return os;
            else
                os << "-";
        }
    }
    return os;
}

::Fruits::Tropical::Tropical()
:   sName{"0"},
    sSeason{"0"},
    svecCountry{"0"},
    ivecDays{0}
{
    
}

::Fruits::Tropical::Tropical
(
    std::string _n,
    std::string _s,
    std::vector<std::string> _c,
    std::vector<int> _d
)
:   sName{_n},
    sSeason{_s},
    svecCountry{_c},
    ivecDays{_d}
{

}

::Fruits::Lychee::Lychee()
:   sLName{"0"},
    sLSeason{"0"},
    svecLCountry{"0"},
    ivecLDays{0}
{

}

::Fruits::Papaya::Papaya()
:   Tropical("P", "P", {"P"}, {9}),
    sPName{"0"},
    sPSeason{"0"},
    svecPCountry{"0"},
    ivecPDays{0}
    
{

}

::Fruits::Papaya::Papaya
(
    std::string _n,
    std::string _s,
    std::vector<std::string> _c,
    std::vector<int> _d
)
:   Tropical(_n, _s, _c, _d),
    sPName{_n},
    sPSeason{_s},
    svecPCountry{_c},
    ivecPDays{_d}
{

}

void ::Fruits::Tropical::showDetails() const
{
    std::cout << "Inside Tropical::showDetails()" << std::endl;

    std::cout << sName << std::endl;
    std::cout << sSeason << std::endl;
    std::cout << svecCountry << std::endl;
    std::cout << ivecDays << std::endl;

    std::cout << std::endl;
}

void ::Fruits::Tropical::setDetails
(
    std::string& _sName,
    std::string& _sSeason,
    std::vector<std::string>& _svecCountry,
    std::vector<int>& _ivecDays
)
{
    std::cout << "Inside Tropical::setDetails()" << std::endl;

    sName = _sName;
    sSeason = _sSeason;
    svecCountry = _svecCountry;
    ivecDays = _ivecDays;
}

void ::Fruits::Papaya::showDetails() const
{
    std::cout << "Inside Papaya::showDetails()" << std::endl;

    std::cout << sPName << std::endl;
    std::cout << sPSeason << std::endl;
    std::cout << svecPCountry << std::endl;
    std::cout << ivecPDays << std::endl;

    std::cout << std::endl;
}

void ::Fruits::Papaya::setDetails
(
    std::string& _sPName,
    std::string& _sPSeason,
    std::vector<std::string>& _svecPCountry,
    std::vector<int>& _ivecPDays
)
{
    std::cout << "Inside Papaya::setDetails()" << std::endl;

    sPName = _sPName;
    sPSeason = _sPSeason;
    svecPCountry = _svecPCountry;
    ivecPDays = _ivecPDays;
}
