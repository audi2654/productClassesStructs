//HANDBAG SERVER
#include <iostream>
#include "handbag_interface.hpp"

::Handbag::Purse::Purse()
:   sName{"0"},
    uiPrice{0},
    sMaterial{"0"},
    svecColor{"0"},
    dvecDimensions{0.0}
{

}

::Handbag::CoinPurse::CoinPurse()
:   sName{"0"},
    uiPrice{0},
    sMaterial{"0"},
    svecColor{"0"},
    dvecDimensions{0.0}
{

}

::Handbag::ClutchPurse::ClutchPurse()
:   sName{"0"},
    uiPrice{0},
    sMaterial{"0"},
    svecColor{"0"},
    dvecDimensions{0.0}
{

}

void ::Handbag::Purse::setDetails
(
    std::string _sName,
    unsigned int _uiPrice,
    std::string _sMaterial,
    std::vector<std::string> _svecColor,
    std::vector<double> _dvecDimensions
)
{
    std::cout << "Inside Purse::setDetails()" << std::endl;

    sName = _sName;
    uiPrice = _uiPrice;
    sMaterial = _sMaterial;
    svecColor = _svecColor;
    dvecDimensions = _dvecDimensions;

    std::cout << std::endl;
}

void ::Handbag::ClutchPurse::setDetails
(
    std::string _sName,
    unsigned int _uiPrice,
    std::string _sMaterial,
    std::vector<std::string> _svecColor,
    std::vector<double> _dvecDimensions
)
{
    std::cout << "Inside ClutchPurse::setDetails()" << std::endl;

    sName = _sName;
    uiPrice = _uiPrice;
    sMaterial = _sMaterial;
    svecColor = _svecColor;
    dvecDimensions = _dvecDimensions;

    std::cout << std::endl;
}
