//MANAGER SERVER
#include "manager_interface.hpp"

::Employee::Manager::Manager()
:   sName{"Empty_Manager"},
    iSalary{0},
    iBonus{0},
    bBonusPer{1.0},
    joinDate{1, 2, 3}
{
    
}

::Employee::ManagerHR::ManagerHR()
:   sName{"0"},
    iSalary{0},
    iBonus{0},
    bBonusPer{1.1},
    joinDate{0}
{
    
}

::Employee::ManagerOPs::ManagerOPs()
:   sName{"0"},
    iSalary{0},
    iBonus{0},
    bBonusPer{1.2},
    joinDate{0}
{
    
}

::Employee::ManagerIM::ManagerIM()
:   sName{"0"},
    iSalary{0},
    iBonus{0},
    bBonusPer{1.3},
    joinDate{0}
{
    
}

void ::Employee::Manager::setDetails
(
    std::string _sName,
    int _iSalary,
    std::vector<int> _joinDate
)
{
    std::cout << "Inside Manager::setDetails()" << std::endl;

    sName = _sName;
    iSalary = _iSalary;
    joinDate = _joinDate;

    std::cout << std::endl;
}

void ::Employee::Manager::set_bonus(int bonusAmt)
{
    if(joinDate.at(2) == 2020)
        iBonus = 1.1 * bonusAmt;

    if(joinDate.at(2) == 2021)
        iBonus = 1.2 * bonusAmt;

    if(joinDate.at(2) == 2022)
        iBonus = 1.3 * bonusAmt;
}
