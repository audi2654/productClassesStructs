#include <iostream>
#include "drill_interface.hpp"

::Tools::Drill::Drill()
:   sName{"empty_drill"},
    uiPrice{0},
    usRPM{0},
    svecColor{"0"},
    dvecDims{0.0}
{

}

::Tools::StanleyDrill::StanleyDrill()
:   sName{"empty_StanleyDrill"},
    uiPrice{0},
    usRPM{0},
    svecColor{"0"},
    dvecDims{0.0}
{

}

::Tools::BoschDrill::BoschDrill()
:   sName{"empty_BoschDrill"},
    uiPrice{0},
    usRPM{0},
    svecColor{"0"},
    dvecDims{0.0}
{

}

void ::Tools::Drill::setDetails
(
    std::string _sName,
    unsigned int _uiPrice,
    unsigned short _usRPM,
    std::vector<std::string> _svecColor,
    std::vector<double> _dvecDims
)
{
    std::cout << "Inside Drill::setDetails()" << std::endl;

    sName = _sName;
    uiPrice = _uiPrice;
    usRPM = _usRPM;
    svecColor = _svecColor;
    dvecDims = _dvecDims;
}

void ::Tools::BoschDrill::setDetails
(
    std::string _sName,
    unsigned int _uiPrice,
    unsigned short _usRPM,
    std::vector<std::string> _svecColor,
    std::vector<double> _dvecDims
)
{
    std::cout << "Inside BoschDrill::setDetails()" << std::endl;

    sName = _sName;
    uiPrice = _uiPrice;
    usRPM = _usRPM;
    svecColor = _svecColor;
    dvecDims = _dvecDims;
}
