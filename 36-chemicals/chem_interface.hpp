//CHEMICALS INTERFACE
#ifndef _CHEM_INTERFACE
#define _CHEM_INTERFACE

#include <vector>

namespace Chems{
    class Drugs{
        private:
        std::string sKnownAs;
        std::string sActiveMolecule;
        std::vector<std::string> svecSymptoms;
        std::vector<int> ivecTripLength;

        public:
        Drugs();

        virtual void showDetails() const;

        virtual void setDetails
        (
            std::string _sKnownAs,
            std::string _sActiveMolecule,
            std::vector<std::string> _svecSymptoms,
            std::vector<int> _ivecTripLength
        );
    };

    class LSD : public Drugs{
        private:
        std::string sLKnownAs;
        std::string sLActiveMolecule;
        std::vector<std::string> svecLSymptoms;
        std::vector<int> ivecLTripLength;

        public:
        LSD();
    };

    class MagicMushroom : public Drugs{
        private:
        std::string sMKnownAs;
        std::string sMActiveMolecule;
        std::vector<std::string> svecMSymptoms;
        std::vector<int> ivecMTripLength;

        public:
        MagicMushroom();

        void showDetails() const override;

        void setDetails
        (
            std::string _sMKnownAs,
            std::string _sMActiveMolecule,
            std::vector<std::string> _svecMSymptoms,
            std::vector<int> _ivecMTripLength
        ) override;
    };
}

#endif