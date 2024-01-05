//SUBATOMIC PARTICLES INTERFACE
#ifndef _PARTICLES_INTERFACE_HPP
#define _PARTICLES_INTERFACE_HPP

#include <vector>

const bool YES = true;
const bool NO = false;

namespace Subatomic{
    enum Category{
        LEPTON = 1,
        BARYON,
        MESON
    };

    typedef enum Category Composition_e;
    
    class Particle{
        private:
        std::string sName;
        std::string sDiscoveryBy;
        ::Subatomic::Composition_e composition;
        std::vector<unsigned short> sVecDate;
        bool bIsElementary;
        signed short ssCharge;

        public:
        Particle();

        void showDetails();

        void setDetails
        (
            std::string _sName,
            std::string _sDiscoveryBy,
            ::Subatomic::Composition_e _composition,
            std::vector<unsigned short> _sVecDate,
            bool _bIsElementary,
            signed short _ssCharge
        );
    };
}

#endif /*_PARTICLES_INTERFACE_HPP*/