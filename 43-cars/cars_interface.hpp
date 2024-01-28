//CARS INTERFACE
#ifndef _CARS_INTERFACE
#define _CARS_INTERFACE
#include <vector>

template <typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& v)
{
    for(const auto& i : v)
    {
        os << "[" << i << "]";
    }

    return os;
}

template <typename T>
showDetails(const T& obj)
{
    std::cout << "Inside Templatized showDetails" << std::endl;

    std::cout << obj.sName << std::endl;
    std::cout << obj.sType << std::endl;
    std::cout << obj.ivecYears << std::endl;
    std::cout << obj.dPrice << std::endl;

    std::cout << std::endl;
}

namespace Cars{
    class Car{
        public:
        std::string sName;
        std::string sType;
        std::vector<int> ivecYears;
        double dPrice;

        Car();

        void setDetails
        (
            std::string _sName,
            std::string _sType,
            std::vector<int> _ivecYears,
            double _dPrice
        );

    };

    class Maruti : public Car{
        public:
        std::string sName;
        std::string sType;
        std::vector<int> ivecYears;
        double dPrice;
        
        Maruti();
    };

    class Swift : public Car{
        public:
        std::string sName;
        std::string sType;
        std::vector<int> ivecYears;
        double dPrice;

        Swift();
    };
}

#endif /*_CARS_INTERFACE*/
