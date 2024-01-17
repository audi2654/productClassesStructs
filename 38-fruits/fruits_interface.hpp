//FRUITS INTERFACE
#ifndef _FRUITS_INTERFACE
#define _FRUITS_INTERFACE
#include <vector>

namespace Fruits{
    class Tropical{
        private:
        std::string sName;
        std::string sSeason;
        std::vector<std::string> svecCountry;
        std::vector<int> ivecDays;

        public:
        Tropical();
        Tropical
        (
            std::string _n,
            std::string _s,
            std::vector<std::string> _c,
            std::vector<int> _d
        );

        virtual void showDetails() const;

        virtual void setDetails
        (
            std::string& _sName,
            std::string& _sSeason,
            std::vector<std::string>& _svecCountry,
            std::vector<int>& _ivecDays
        );
    };

    class Lychee : public Tropical{
        private:
        std::string sLName;
        std::string sLSeason;
        std::vector<std::string> svecLCountry;
        std::vector<int> ivecLDays;

        public:
        Lychee();
    };

    class Papaya : public Tropical{
        private:
        std::string sPName;
        std::string sPSeason;
        std::vector<std::string> svecPCountry;
        std::vector<int> ivecPDays;

        public:
        Papaya();

        Papaya
        (
            std::string _n,
            std::string _s,
            std::vector<std::string> _c,
            std::vector<int> _d
        );

        void showDetails() const override;

        void setDetails
        (
            std::string& _sPName,
            std::string& _sPSeason,
            std::vector<std::string>& _svecPCountry,
            std::vector<int>& _ivecPDays
        ) override;
    };
}

#endif /*_FRUITS_INTERFACE*/
