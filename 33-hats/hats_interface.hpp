//HATS INTERFACE
#ifndef _HATS_INTERFACE_HPP
#define _HATS_INTERFACE_HPP

#include <vector>

namespace Accessory{
    class Hats{
        private:
        std::string sName;
        std::string sSeason;
        std::vector<std::string> svecMaterial;
        unsigned short usAge;

        public:
        Hats();

        virtual void showDetails(std::string msg) const;

        void setDetails
        (
            std::string _sName,
            std::string _sSeason,
            std::vector<std::string> _svecMaterial,
            unsigned short _usAge
        );
    };

    class CowBoyHat : public Hats{
        private:
        std::string sName;
        std::string sSeason;
        std::vector<std::string> svecMaterial;
        unsigned short usAge;

        public:
        CowBoyHat();
    };

    class BabyHat : public Hats{
        private:
        std::string sName;
        std::string sSeason;
        std::vector<std::string> svecMaterial;
        unsigned short usAge;

        public:
        BabyHat();

        void showDetails(std::string msg) const override;
    };
}

#endif /*_HATS_INTERFACE_HPP*/
