//SERIES INTERFACE
#ifndef _SERIES_INTERFACE
#define _SERIES_INTERFACE

#include <vector>

namespace TV{
    struct Date{
        private:
        unsigned short usDay;
        std::string sMonth;
        unsigned short usYear;

        public:
        Date(unsigned short _y);
        Date(unsigned short _d, std::string _m, unsigned short _y);

        friend std::ostream& operator<<(std::ostream& os, const Date& resource);
    };

    typedef struct Date Date;

    class Series{
        private:
        std::string sName;
        std::vector<std::string> svecCast;
        std::vector<Date> ivecDate;
        float fRatings;

        public:
        Series();

        virtual void showDetails() const;

        virtual void setDetails
        (
            std::string _sName,
            std::vector<std::string> _svecCast,
            std::vector<Date> _ivecDate,
            float _fRatings
        );
    };

    class Wire : public Series{
        private:
        std::string sWName;
        std::vector<std::string> svecWCast;
        std::vector<Date> ivecWDate;
        float fWRatings;

        public:
        Wire();
    };

    class Cosmos : public Series{
        private:
        std::string sCName;
        std::vector<std::string> svecCCast;
        std::vector<Date> ivecCDate;
        float fCRatings;

        public:
        Cosmos();

        void showDetails() const override;

        void setDetails
        (
            std::string _sCName,
            std::vector<std::string> _svecCCast,
            std::vector<Date> _ivecCDate,
            float _fCRatings
        ) override;
    };
}

#endif /*_SERIES_INTERFACE*/
