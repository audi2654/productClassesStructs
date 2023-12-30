//TROPHY INTERFACE
#ifndef _TROPHY_INTERFACE_HPP
#define _TROPHY_INTERFACE_HPP

namespace Dims{
    class Dimensions{
        private:
        float fLength;
        float fHeight;
        float fWidth;

        public:
        Dimensions();
        Dimensions(float _l, float _w, float _h);

        friend std::ostream& operator<<(std::ostream& os, const Dims::Dimensions& resource);
    };
}

namespace ProductProps{
    class Trophy{
        private:
        std::string sName;
        unsigned int uiPrice;
        std::string sShape;
        std::string sColor;
        std::string sMaterial;

        class Date{
            private:
            unsigned short usDay;
            std::string sMonth;
            unsigned short usYear;

            public:
            Date();
            Date(unsigned short _d, std::string _m, unsigned short _y);

            friend std::ostream& operator<<(std::ostream& os, const Date& resource);
        };

        Date dateFirstAvailable;

        public:
        friend std::ostream& operator<<(std::ostream& os, const Date& resource);

        ::Dims::Dimensions dimensionsOfProduct;
        
        Trophy();

        void showDetails();
        void setDetails
        (
            std::string _sName,
            unsigned int _uiPrice,
            std::string _sShape,
            std::string _sColor,
            std::string _sMaterial,
            Date _dateFirstAvailable,
            ::Dims::Dimensions _dimensionsOfProduct
        );
    };
}

#endif /*_TROPHY_INTERFACE_HPP*/
