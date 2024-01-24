//TELESCOPES SERVER
#include <iostream>
#include "telescope_interface.hpp"

::OptiInstru::Telescope::Telescope()
:   sName{"0"},
    sLevel{"0"},
    sImages{"0"},
    sCost{"0"}
{
    
}

::OptiInstru::Refractor::Refractor()
:   sName{"0"},
    sLevel{"0"},
    sImages{"0"},
    sCost{"0"}
{
    
}

::OptiInstru::Reflector::Reflector()
:   sName{"0"},
    sLevel{"0"},
    sImages{"0"},
    sCost{"0"}
{
    
}

void ::OptiInstru::Telescope::setDetails
(
    std::string _sName,
    std::string _sLevel,
    std::string _sImages,
    std::string _sCost
)
{
    std::cout << "Inside Telescope::setDetails()" << std::endl;
    
    sName = _sName;
    sLevel = _sLevel;
    sImages = _sImages;
    sCost = _sCost;

    std::cout << std::endl;
}
