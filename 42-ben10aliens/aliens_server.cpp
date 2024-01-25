//BEN 10 ALIENS SERVER
#include <iostream>
#include "aliens_interface.hpp"
#include <vector>

::Ben10::Aliens::Aliens()
:   sName{"0"},
    sSeriesVersion{"0"},
    sPower{"0"},
    sPlanet{"0"}
{

}

::Ben10::HeatBlast::HeatBlast()
:   sName{"0"},
    sSeriesVersion{"0"},
    sPower{"0"},
    sPlanet{"0"}
{

}

void ::Ben10::Aliens::set_details
(
    std::string _sName,
    std::string _sSeriesVersion,
    std::string _sPower,
    std::string _sPlanet
)
{
    std::cout << "Inside Aliens::set_details()" << std::endl;

    sName = _sName;
    sSeriesVersion = _sSeriesVersion;
    sPower = _sPower;
    sPlanet = _sPlanet;

    std::cout << std::endl;
}
