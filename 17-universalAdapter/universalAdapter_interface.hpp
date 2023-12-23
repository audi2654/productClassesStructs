//UNIVERSAL ADAPTER INTERFACE
#ifndef _UNIVERSAL_ADAPTER_INTERFACE_H
#define _UNIVERSAL_ADAPTER_INTERFACE_H

#include <iostream>

namespace productProps{

    class UniversalAdapter{
        private:
        std::string sName;
        unsigned int usPrice;
        unsigned short usRatedVoltage;
        unsigned short usWeight;
        std::string sColor;
        std::string sCompatibility;
        
        struct Dimensions{
            private:
            float fLength;
            float fWidth;
            float fHeight;

            public:
            Dimensions();
            Dimensions(float _l, float _w, float _h);

            float getLength() const { return fLength; };
            float getWidth() const{ return fWidth; };
            float getHeight() const{ return fHeight; };

            //friend std::ostream& operator<<(std::ostream& os, Dimensions& resource);
        } dimensionsOfProduct;

        public:
        friend std::ostream& operator<<(std::ostream& os, const Dimensions& resource);

        class Date{
            private:
            unsigned short usDay;
            std::string sMonth;
            unsigned short usYear;

            public:
            Date();
            Date(unsigned short _d, std::string _m, unsigned short _y);

            friend std::ostream& operator<<(std::ostream& os, const productProps::UniversalAdapter::Date& resource);
        };

        Date dateFirstAvailable;

        //default constr for UniversalAdapter
        UniversalAdapter();

        //class UniversalAdapter member func prototypes
        void setAdapterDetails
        (
            std::string _sName,
            unsigned int _usPrice,
            unsigned short _usRatedVoltage,
            unsigned short _usWeight,
            std::string _sColor,
            std::string _sCompatibility,
            Dimensions _dimensionsOfProduct,
            Date _dateFirstAvailable
        );

        void showAdapterDetails();
    };
}

#endif /*_UNIVERSAL_ADAPTER_INTERFACE_H*/