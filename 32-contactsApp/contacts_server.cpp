//CONTACTS APP SERVER
#include <iostream>
#include <vector>
#include "contacts_interface.hpp"

template <class T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& v)
{
    for(const auto& i : v)
    {
        os << "[" << i << "]";
    }
    return os;
}

::App::Application::Application()
:   sName{"0"},
    uiQuantity{0},
    svecCategories{"0"},
    bBackupAllowed{false}
{

}

::App::Contacts::Contacts()
:   sCName{"0"},
    uiCQuantity{0},
    svecCCategories{"0"},
    bCBackupAllowed{false}
{

}

::App::Music::Music()
:   sMName{"0"},
    uiMQuantity{0},
    svecMCategories{"0"},
    bMBackupAllowed{false}
{

}

void ::App::Application::showDetails() const
{
    std::cout << "Inside Application::showDetails()" << std::endl;

    std::cout << sName << std::endl;
    std::cout << uiQuantity << std::endl;
    std::cout << svecCategories << std::endl;
    std::cout << bBackupAllowed << std::endl;

    std::cout << std::endl;
}

void ::App::Application::setDetails
(
    std::string _sName,
    unsigned int _uiQuantity,
    std::vector<std::string> _svecCategories,
    bool _bBackupAllowed
)
{
    std::cout << "Inside Application::setDetails()" << std::endl;

    sName = _sName;
    uiQuantity = _uiQuantity;
    svecCategories = _svecCategories;
    bBackupAllowed = _bBackupAllowed;
}

void ::App::Music::showDetails() const
{
    std::cout << "Inside Music::showDetails()" << std::endl;

    ::App::Application::showDetails();

    std::cout << std::endl;
}
