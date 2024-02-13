//MANAGER CLIENT
#include <iostream>
#include <typeinfo>
#include "manager_interface.hpp"

int main(void){
    ::Employee::Manager* managerHR = new ::Employee::ManagerHR;
    showDetails<::Employee::Manager>(*managerHR);
    managerHR->setDetails
    (
        "Q",
        10000,
        {1,1,2020}
    );
    (*managerHR).set_bonus(10000);
    showDetails<::Employee::Manager>(*managerHR);

    std::cout << std::endl;

    ::Employee::Manager* managerOPs = new ::Employee::ManagerOPs;
    showDetails<::Employee::Manager>(*managerOPs);
    managerOPs->setDetails
    (
        "W",
        20000,
        {2,2,2021}
    );
    (*managerOPs).set_bonus(20000);
    showDetails<::Employee::Manager>(*managerOPs);

    std::cout << std::endl;

    ::Employee::Manager* managerIM = new ::Employee::ManagerIM;
    showDetails<::Employee::Manager>(*managerIM);
    managerIM->setDetails
    (
        "E",
        30000,
        {1,1,2022}
    );
    (*managerIM).set_bonus(30000);
    showDetails<::Employee::Manager>(*managerIM);

    std::cout << std::endl;

    std::cout << typeid(::Employee::Manager).name() << std::endl;

    return 0;
}
