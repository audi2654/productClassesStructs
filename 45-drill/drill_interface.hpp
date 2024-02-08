//DRILL INTERFACE
#ifndef _DRILL_INTERFACE
#define _DRILL_INTERFACE

#include <vector>
template <typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& vec)
{
    if(std::is_same<T, std::string>::value)
    {
        for(const auto& i : vec)
            os << "[" << i << "]";
    }
    else{
        for(size_t i = 0; i < vec.size(); ++i)
            os << "(" << vec.at(i) << ")";
    }
    return os;
};

template <typename T>
void showDetails(const T& obj)
{
    std::cout << "Inside Templatized showDetails()" << std::endl;

    std::cout << obj.sName << std::endl;
    std::cout << obj.uiPrice << std::endl;
    std::cout << obj.usRPM << std::endl;
    std::cout << obj.svecColor << std::endl;
    std::cout << obj.dvecDims << std::endl;

    std::cout << std::endl;
};

namespace Tools{
    class Drill{
        private:
        int iPrivate{0};

        public:
        std::string sName;
        unsigned int uiPrice;
        unsigned short usRPM;
        std::vector<std::string> svecColor;
        std::vector<double> dvecDims;

        protected:
        std::string protMem;

        public:
        Drill();

        //void showDetails();

        virtual void setDetails
        (
            std::string _sName,
            unsigned int _uiPrice,
            unsigned short _usRPM,
            std::vector<std::string> _svecColor,
            std::vector<double> _dvecDims
        );
    };

    class StanleyDrill : public Drill{
        int iPrivate{0};

        public:
        std::string sName;
        unsigned int uiPrice;
        unsigned short usRPM;
        std::vector<std::string> svecColor;
        std::vector<double> dvecDims;

        protected:
        std::string protMem;

        public:
        StanleyDrill();
    };

    class BoschDrill : public Drill{
        int iPrivate{0};
        
        public:
        std::string sName;
        unsigned int uiPrice;
        unsigned short usRPM;
        std::vector<std::string> svecColor;
        std::vector<double> dvecDims;

        protected:
        std::string protMem;

        public:
        BoschDrill();

        void setDetails
        (
            std::string _sName,
            unsigned int _uiPrice,
            unsigned short _usRPM,
            std::vector<std::string> _svecColor,
            std::vector<double> _dvecDims
        ) override;
    };
}

#endif /*_DRILL_INTERFACE*/
