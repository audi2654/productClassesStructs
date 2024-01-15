//CHEMICALS INTERFACE
#include <iostream>
#include <vector>
#include "chem_interface.hpp"
#include <typeinfo>

template <class T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& v)
{

    if(std::is_same<T, std::string>::value){
        for(const auto& i : v)
        {
            os << "[" << i << "]";
        }
    }
    else{
        for(int i = 0; i < v.size(); i++)
        {
            os << v.at(i);

            if(i == v.size() - 1)
                return os;
            else{
                os << "-";
            }
        }
    }
        
    return os;
}

::Chems::Drugs::Drugs()
:   sKnownAs{"0"},
    sActiveMolecule{"0"},
    svecSymptoms{"0"},
    ivecTripLength{0}

{

}

::Chems::LSD::LSD()
:   sLKnownAs{"0"},
    sLActiveMolecule{"0"},
    svecLSymptoms{"0"},
    ivecLTripLength{0}

{

}

::Chems::MagicMushroom::MagicMushroom()
:   sMKnownAs{"0"},
    sMActiveMolecule{"0"},
    svecMSymptoms{"0"},
    ivecMTripLength{0}

{

}

void ::Chems::Drugs::showDetails() const
{
    std::cout << "Inside Drugs::showDetails()" << std::endl;

    std::cout << sKnownAs << std::endl;
    std::cout << sActiveMolecule << std::endl;
    std::cout << svecSymptoms << std::endl;
    std::cout << ivecTripLength << std::endl;

    std::cout << std::endl;
}

void ::Chems::Drugs::setDetails
(
    std::string _sKnownAs,
    std::string _sActiveMolecule,
    std::vector<std::string> _svecSymptoms,
    std::vector<int> _ivecTripLength
)
{
    std::cout << "Inside Drugs::setDetails()" << std::endl;

    sKnownAs = _sKnownAs;
    sActiveMolecule = _sActiveMolecule;
    svecSymptoms= _svecSymptoms;
    ivecTripLength  = _ivecTripLength;

    std::cout << std::endl;
}

void ::Chems::MagicMushroom::showDetails() const
{
    std::cout << "Inside MagicMushroom::showDetails()" << std::endl;

    std::cout << sMKnownAs << std::endl;
    std::cout << sMActiveMolecule << std::endl;
    std::cout << svecMSymptoms << std::endl;
    std::cout << ivecMTripLength << std::endl;

    std::cout << std::endl;
}

void ::Chems::MagicMushroom::setDetails
(
    std::string _sMKnownAs,
    std::string _sMActiveMolecule,
    std::vector<std::string> _svecMSymptoms,
    std::vector<int> _ivecMTripLength
)
{
    std::cout << "Inside MagicMushroom::setDetails()" << std::endl;

    sMKnownAs = _sMKnownAs;
    sMActiveMolecule = _sMActiveMolecule;
    svecMSymptoms= _svecMSymptoms;
    ivecMTripLength  = _ivecMTripLength;

    std::cout << std::endl;
}
