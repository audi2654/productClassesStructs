//MIC INTERFACE
#ifndef _MIC_INTERFACE
#define _MIC_INTERFACE

#include <iostream>
#include <vector>

template <typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& vec)
{
    for(auto i : vec)
        os << "[" << i << "]";

    return os;
}

namespace Device{
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
        private:
        float fHeight;
        float fWidth;
        float fLength;

        public:
        Dimensions(float _h, float _w, float _l);

        friend std::ostream& operator<<(std::ostream& os, const Dimensions& obj);
    };

    class Mic{
        private:
        std::string sName;
        unsigned int uiPrice;
        std::vector<std::string> svecHardware;
        Date dateFirstAvailable;
        Dimensions dimsOfProduct;

        public:
        Mic();

        void showDetails();

        void setDetails
        (
            std::string _sName,
            unsigned int _uiPrice,
            std::vector<std::string> _svecHardware,
            Date _dateFirstAvailable,
            Dimensions _dimsOfProduct
        );
    };
}

#endif /*_MIC_INTERFACE*/
