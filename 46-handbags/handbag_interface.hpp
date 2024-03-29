//HANDBAG INTERFACE
#ifndef _HANDBAG_INTERFACE
#define _HANDBAG_INTERFACE

#include <vector>
template <typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& vec)
{
    if(std::is_same<T, std::string>::value)
    {
        for(const auto& i : vec)
            os << "[" << i << "]";
    }
    else
    {
        for(auto i = 0; i < vec.size(); i++)
        {
            os << vec.at(i);

            if(i == vec.size() - 1)
                return os;
            else
                os << " x ";
        }
    }
    return os;
}

template <typename T>
void showDetails(const T& obj)
{
    std::cout << "Inside Templatized showDetails()" << std::endl;

    std::cout << obj.sName << std::endl;
    std::cout << obj.uiPrice << std::endl;
    std::cout << obj.sMaterial << std::endl;
    std::cout << obj.svecColor << std::endl;
    std::cout << obj.dvecDimensions << std::endl;

    std::cout << std::endl;
}

namespace Handbag{
    class Purse{
        private:
        int iPrivate{0};

        protected:
        int iProtected{0};

        public:
        std::string sName;
        unsigned int uiPrice;
        std::string sMaterial;
        std::vector<std::string> svecColor;
        std::vector<double> dvecDimensions;

        Purse();

        virtual void setDetails
        (
            std::string _sName,
            unsigned int _uiPrice,
            std::string _sMaterial,
            std::vector<std::string> _svecColor,
            std::vector<double> _dvecDimensions
        );
    };

    class CoinPurse : public Purse{
        private:
        int iPrivate{0};

        protected:
        int iProtected{0};

        public:
        std::string sName;
        unsigned int uiPrice;
        std::string sMaterial;
        std::vector<std::string> svecColor;
        std::vector<double> dvecDimensions;

        CoinPurse();
    };

    class ClutchPurse : public Purse{
        private:
        int iPrivate{0};

        protected:
        int iProtected{0};

        public:
        std::string sName;
        unsigned int uiPrice;
        std::string sMaterial;
        std::vector<std::string> svecColor;
        std::vector<double> dvecDimensions;

        ClutchPurse();

        void setDetails
        (
            std::string _sName,
            unsigned int _uiPrice,
            std::string _sMaterial,
            std::vector<std::string> _svecColor,
            std::vector<double> _dvecDimensions
        ) override;
    };
}

#endif /*_HANDBAG_INTERFACE*/
