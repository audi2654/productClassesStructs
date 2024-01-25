//BEN 10 ALIENS INTERFACE
#ifndef _ALIENS_INTERFACE
#define _ALIENS_INTERFACE

template <typename T>
void show_details(const T& obj){
    std::cout << "Inside Template Function show_details()" << std::endl;

    std::cout << obj.sName << std::endl;
    std::cout << obj.sSeriesVersion << std::endl;
    std::cout << obj.sPower << std::endl;
    std::cout << obj.sPlanet << std::endl;

    std::cout << std::endl;
}

namespace Ben10{
    class Aliens{
        public:
        std::string sName;
        std::string sSeriesVersion;
        std::string sPower;
        std::string sPlanet;

        Aliens();

        void set_details
        (
            std::string _sName,
            std::string _sSeriesVersion,
            std::string _sPower,
            std::string _sPlanet
        );
    };

    class HeatBlast : public Aliens{
        public:
        std::string sName;
        std::string sSeriesVersion;
        std::string sPower;
        std::string sPlanet;

        HeatBlast();
    };
}

#endif /*_ALIENS_INTERFACE*/