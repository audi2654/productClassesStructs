//BROWSERS SERVER
#include <iostream>
#include "browsers_interface.hpp"
#include <type_traits>

template <class T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& v)
{
    if(std::is_same<T, std::string>::value){
        for(const auto& i : v){
            os << "[" << i << "]";
        }
    }
    else{
        for(int i = 0; i < v.size(); i++)
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

::Web::Browser::Browser()
:   sName{"0"},
    sEngine{"0"},
    ivecDate{0},
    svecFeatures{"0"}
{

}

::Web::Chrome::Chrome()
:   sCName{"0"},
    sCEngine{"0"},
    ivecCDate{0},
    svecCFeatures{"0"}
{

}

::Web::Firefox::Firefox()
:   sFName{"0"},
    sFEngine{"0"},
    ivecFDate{0},
    svecFFeatures{"0"}
{

}

void ::Web::Browser::showDetails() const
{
    std::cout << "Inside Browser::showDetails()" << std::endl;

    std::cout << sName << std::endl;
    std::cout << sEngine << std::endl;
    std::cout << ivecDate << std::endl;
    std::cout << svecFeatures << std::endl;

    std::cout << std::endl;
}

void ::Web::Browser::setDetails
(
    std::string _sName,
    std::string _sEngine,
    std::vector<int> _ivecDate,
    std::vector<std::string> _svecFeatures
)
{
    std::cout << "Inside Browser::setDetails()" << std::endl;

    sName = _sName;
    sEngine = _sEngine;
    ivecDate = _ivecDate;
    svecFeatures = _svecFeatures;

    std::cout << std::endl;
}

void ::Web::Firefox::showDetails() const
{
    std::cout << "Inside Firefox::showDetails()" << std::endl;

    std::cout << sFName << std::endl;
    std::cout << sFEngine << std::endl;
    std::cout << ivecFDate << std::endl;
    std::cout << svecFFeatures << std::endl;

    std::cout << std::endl;
}

void ::Web::Firefox::setDetails
(
    std::string _sFName,
    std::string _sFEngine,
    std::vector<int> _ivecFDate,
    std::vector<std::string> _svecFFeatures
)
{
    std::cout << "Inside Firefox::setDetails()" << std::endl;

    sFName = _sFName;
    sFEngine = _sFEngine;
    ivecFDate = _ivecFDate;
    svecFFeatures = _svecFFeatures;

    std::cout << std::endl;
}
