//SPECS HOLDER INTERFACE
#ifndef _SPECS_HOLDER
#define _SPECS_HOLDER

#include <iostream>
#include <vector>

template <typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& vec)
{
    for(auto i : vec)
        os << "[" << i << "]";

    return os;
}

namespace Holder{
    class Date{
        private:
        unsigned short usDay;
        std::string sMonth;
        unsigned short usYear;

        public:
        Date(unsigned short _d, std::string _m, unsigned short _y);

        friend std::ostream& operator<<(std::ostream& os, const Date& obj);
    };

    class Dimensions{
        float fHeight;
        float fWidth;
        float fLength;

        public:
        Dimensions(float _h, float _w, float _l);

        friend std::ostream& operator<<(std::ostream& os, const Dimensions& obj);
    };

    class Specs{
        private:
        std::string sName;
        unsigned int uiPrice;
        std::vector<std::string> svecAudience;
        std::string sMaterial;
        std::string sTheme;
        Date dateFirstAvailable;
        Dimensions dimsOfProduct;

        public:
        Specs();

        void showDetails();

        void setDetails
        (
            std::string _sName,
            unsigned int _uiPrice,
            std::vector<std::string> _svecAudience,
            std::string _sMaterial,
            std::string _sTheme,
            Date _dateFirstAvailable,
            Dimensions _dimsOfProduct
        );
    };
}

#endif /*_SPECS_HOLDER*/
