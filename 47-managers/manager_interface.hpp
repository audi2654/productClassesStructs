//MANAGER INTERFACE
#ifndef _MANAGER_INTERFACE
#define _MANAGER_INTERFACE
#include <iostream>
#include <vector>

template <typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& vec)
{
    if(std::is_same<T, std::string>::value)
    {
        for(auto const& i : vec)
            os << "[" << i << "]";
    }
    else
    {
        for(auto const& i : vec)
            os << "(" << i << ")";
    }
    
    return os;
}

template <typename T>
void showDetails(const T& obj)
{
    std::cout << "Inside Templatized showDetails()" << std::endl;

    std::cout << obj.sName << std::endl;
    std::cout << obj.iSalary << std::endl;
    std::cout << obj.iBonus << std::endl;
    std::cout << obj.joinDate << std::endl;

    std::cout << std::endl;
}

namespace Employee{
    class Manager{
        public:
        std::string sName;
        int iSalary;
        int iBonus;
        double bBonusPer;
        std::vector<int> joinDate;

        Manager();

        void setDetails
        (
            std::string _sName,
            int _iSalary,
            std::vector<int> _joinDate
        );

        void set_bonus(int bonusAmt);
    };

    class ManagerHR : public Manager{
        public:
        std::string sName;
        int iSalary;
        int iBonus;
        double bBonusPer;
        std::vector<int> joinDate;

        ManagerHR();
    };

    class ManagerOPs : public Manager{
        public:
        std::string sName;
        int iSalary;
        int iBonus;
        double bBonusPer;
        std::vector<int> joinDate;

        ManagerOPs();
    };

    class ManagerIM : public Manager{
        public:
        std::string sName;
        int iSalary;
        int iBonus;
        double bBonusPer;
        std::vector<int> joinDate;

        ManagerIM();
    };
}

#endif /*_MANAGER_INTERFACE*/
