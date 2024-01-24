//TELESCOPES INTERFACE
#ifndef _TELESCOPE_INTERFACE
#define _TELESCOPE_INTERFACE

template <typename T>
void show_details(const T& obj){
    std::cout << "Inside Template Function show_details()" << std::endl;

    std::cout << obj.sName << std::endl;
    std::cout << obj.sLevel << std::endl;
    std::cout << obj.sImages << std::endl;
    std::cout << obj.sCost << std::endl;

    std::cout << std::endl;
}

namespace OptiInstru{
    class Telescope{
        public:
        std::string sName;
        std::string sLevel;
        std::string sImages;
        std::string sCost;

        Telescope();

        virtual void setDetails
        (
            std::string _sName,
            std::string _sLevel,
            std::string _sImages,
            std::string _sCost
        );
    };

    class Refractor : public Telescope{
        public:
        std::string sName;
        std::string sLevel;
        std::string sImages;
        std::string sCost;

        
        Refractor();
    };

    class Reflector : public Telescope{
        public:
        std::string sName;
        std::string sLevel;
        std::string sImages;
        std::string sCost;

        Reflector();
    };
}

#endif /*_TELESCOPE_INTERFACE*/
