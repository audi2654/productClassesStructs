//NEWSPAPER SERVER
#include <iostream>
#include <vector>
#include "newspaper_interface.hpp"

template <class T>
std::ostream& operator<<(std::ostream& os, const std::vector<T> &vec)
{
    for(const auto& i : vec)
    {
        os << "[" << i << "]";
    }
    return os;
}

::Media::Newspaper::Newspaper()
:   sName{"0"},
    usPrice{0},
    sMaterial{"0"},
    sCity{"0"},
    svecLangs{"0"},
    dateofIssue{0, "0", 0}
{

}

::Media::Date::Date(unsigned short _d, std::string _m, unsigned short _y)
:   usDay(_d), sMonth(_m), usYear(_y)
{

}

void ::Media::Newspaper::showDetails() const
{
    std::cout << sName << std::endl;
    std::cout << usPrice << std::endl;
    std::cout << sMaterial << std::endl;
    std::cout << sCity << std::endl;
    std::cout << svecLangs << std::endl;
    std::cout << dateofIssue << std::endl;
}

void ::Media::Newspaper::setDetails
(
    std::string _sName,
    unsigned short _usPrice,
    std::string _sMaterial,
    std::string _sCity,
    std::vector<std::string> _svecLangs,
    Date _dateofIssue
)
{
    sName       = _sName;           
    usPrice    = _usPrice ;      
    sMaterial   = _sMaterial ;      
    sCity       = _sCity ;              
    svecLangs   = _svecLangs   ;        
    dateofIssue = _dateofIssue  ;        
}

namespace Media{
    std::ostream& operator<<(std::ostream& os, const Date& resource)
    {
        os << resource.usDay << "-" << resource.sMonth << "-" << resource.usYear;
        return os;
    }
}
