//SINGING COMPETITION SERVER
#include <iostream>
#include "sing_interface.hpp"
#include <type_traits>

::Compete::Sing::Sing()
:   sName{"empty_sing"},
    sGenre{"0"},
    sLangs{"0"},
    usAge{0},
    dvecScores{0}
{

}

::Compete::Rap::Rap()
:   sName{"empty_rap"},
    sGenre{"0"},
    sLangs{"0"},
    usAge{0},
    dvecScores{0}
{
    
}

::Compete::Rock::Rock()
:   sName{"empty_rock"},
    sGenre{"0"},
    sLangs{"0"},
    usAge{0},
    dvecScores{0}
{
    
}

void ::Compete::Sing::setDetails
(
    std::string _sName,
    std::string _sGenre,
    std::vector<std::string> _sLangs,
    unsigned short _usAge,
    std::vector<double> _dvecScores
)
{
    std::cout << "Inside Sing::setDetails()" << std::endl;

    sName = _sName;
    sGenre = _sGenre;
    sLangs = _sLangs;
    usAge = _usAge;
    dvecScores = _dvecScores;

    std::cout << std::endl;
}

void ::Compete::Rock::setDetails
(
    std::string _sName,
    std::string _sGenre,
    std::vector<std::string> _sLangs,
    unsigned short _usAge,
    std::vector<double> _dvecScores
)
{
    std::cout << "Inside Rock::setDetails()" << std::endl;

    sName = _sName;
    sGenre = _sGenre;
    sLangs = _sLangs;
    usAge = _usAge;
    dvecScores = _dvecScores;

    std::cout << std::endl;
}
