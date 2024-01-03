//NEWSPAPER INTERFACE
#ifndef _NEWSPAPER_INTERFACE_HPP
#define _NEWSPAPER_INTERFACE_HPP
#include <vector>

namespace Media{
    class Date{
        friend class Newspaper;
  
        private:
        unsigned short usDay;
        std::string sMonth;
        unsigned short usYear;
  
        public:
        Date(unsigned short _d, std::string _m, unsigned short _y);
  
        friend std::ostream& operator<<(std::ostream& os, const Date& resource);
    };
  
    class Newspaper{
        private:
        std::string sName;
        unsigned short usPrice;
        std::string sMaterial;
        std::string sCity;
        std::vector<std::string> svecLangs;
        ::Media::Date dateofIssue;

        public:
        Newspaper();

        void showDetails() const;
        void setDetails
        (
            std::string _sName,
            unsigned short _usPrice,
            std::string _sMaterial,
            std::string _sCity,
            std::vector<std::string> _svecLangs,
            Date _dateofIssue
        );
    };
}

#endif /*_NEWSPAPER_INTERFACE_HPP*/