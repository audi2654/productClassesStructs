//CINEMA INTERFACE
#ifndef _CINEMA_INTERFACE
#define _CINEMA_INTERFACE

#include <vector>

namespace Art{
    class Date{
        private:
        unsigned short usDay;
        std::string sMonth;
        unsigned short usYear;

        public:
        //Date();
        
        Date(unsigned short _d, std::string _m, unsigned short _y);
    
        friend std::ostream& operator<<(std::ostream& os, const Date& resource);
    };

    class Cinema{
        private:
        std::string sName;
        std::vector<std::string> svecCast;
        unsigned short usRuntime;
        float fRatings;
        std::vector<Date> dvecReleases;

        public:
        Cinema();

        virtual void showDetails() const;

        virtual void setDetails
        (
            std::string _sName,
            std::vector<std::string> _svecCast,
            unsigned short _usRuntime,
            float _fRatings,
            std::vector<Date> _dvecReleases
        );
    };

    class Saltburn : public Cinema{
        private:
        std::string sSName;
        std::vector<std::string> svecSCast;
        unsigned short usSRuntime;
        float fSRatings;
        std::vector<Date> dvecSReleases;

        public:
        Saltburn();
    };

    class Menu : public Cinema{
        private:
        std::string sMName;
        std::vector<std::string> svecMCast;
        unsigned short usMRuntime;
        float fMRatings;
        std::vector<Date> dvecMReleases;

        public:
        Menu();

        void showDetails() const override;

        void setDetails
        (
            std::string _sMName,
            std::vector<std::string> _svecMCast,
            unsigned short _usMRuntime,
            float _fMRatings,
            std::vector<Date> _dvecMReleases
        ) override;
    };
}

#endif /*_CINEMA_INTERFACE*/
