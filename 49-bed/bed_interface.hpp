//BED INTERFACE
#ifndef _BED_INTERFACE
#define _BED_INTERFACE

#include <iostream>
#include <vector>

template <typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& vec)
{
    for(auto i : vec)
        os << "[" << i << "]";

    return os;
}

namespace Home{
    class Date{
        private:
        unsigned short usDay;
        std::string sMonth;
        unsigned short usYear;

        public:
        Date(unsigned short _d, std::string _m, unsigned short _y);

        friend std::ostream& operator<<(std::ostream& os, const Date& obj);
    };

    struct Dimensions{
        private:
        float fHeight;
        float fWidth;
        float fLength;

        public:
        Dimensions(float _h, float _w, float _l);

        friend std::ostream& operator<<(std::ostream& os, const Dimensions& obj);
    };

    class Bed{
        private:
        std::string sName;
        unsigned int uiPrice;
        std::string sMaterial;
        std::vector<std::string> svecFeatures;
        Dimensions dimsOfProd;
        Date dateFirstAvailable;

        public:
        Bed();

        void showDetails();

        void setDetails
        (
            std::string _sName,
            unsigned int _uiPrice,
            std::string _sMaterial,
            std::vector<std::string> _svecFeatures,
            Dimensions _dimsOfProd,
            Date _dateFirstAvailable
        );
    };
}

#endif /*_BED_INTERFACE*/