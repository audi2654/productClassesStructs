//SINGING COMPETITION INTERFACE
#ifndef _SING_INTERFACE
#define _SING_INTERFACE

#include <vector>
template <class T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& v)
{
    if(std::is_same<T, std::string>::value)
    {
        for(const auto& i : v)
        {
            os << "[" << i << "]";
        }
    }
    else
    {
        for(auto i = 0; i < v.size(); i++)
        {
            os << "(" << v.at(i) << ")";
        }
    }
    return os;
}

template <typename T>
void showDetails(const T& obj)
{
    std::cout << "Inside Templatized showDetails()" << std::endl;

    std::cout << obj.sName << std::endl;
    std::cout << obj.sGenre << std::endl;
    std::cout << obj.sLangs << std::endl;
    std::cout << obj.usAge << std::endl;
    std::cout << obj.dvecScores << std::endl;

    std::cout << std::endl;
}

namespace Compete{
    class Sing{
        public:
        std::string sName;
        std::string sGenre;
        std::vector<std::string> sLangs;
        unsigned short usAge;
        std::vector<double> dvecScores;

        Sing();

        virtual void setDetails
        (
            std::string _sName,
            std::string _sGenre,
            std::vector<std::string> _sLangs,
            unsigned short _usAge,
            std::vector<double> _dvecScores
        );
    };

    class Rap : public Sing{
        public:
        std::string sName;
        std::string sGenre;
        std::vector<std::string> sLangs;
        unsigned short usAge;
        std::vector<double> dvecScores;

        Rap();
    };

    class Rock : public Sing{
        public:
        std::string sName;
        std::string sGenre;
        std::vector<std::string> sLangs;
        unsigned short usAge;
        std::vector<double> dvecScores;

        Rock();

        void setDetails
        (
            std::string _sName,
            std::string _sGenre,
            std::vector<std::string> _sLangs,
            unsigned short _usAge,
            std::vector<double> _dvecScores
        ) override;
    };
}

#endif /*_SING_INTERFACE*/
