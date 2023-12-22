//WEIGHING MACHINE INTERFACE
#ifndef _WEIGHING_MACHINE_INTERFACE_HPP
#define _WEIGHING_MACHINE_INTERFACE_HPP

#include <iostream>

namespace ProductProps{
    class WeighingMachine{
        private:
        std::string sName;
        unsigned int uiPrice;
        std::string sColor;
        std::string sDisplayType;
        float fCustomerRatings;
        unsigned short usWeight;
        class Dimensions{
            float fLength;
            float fWidth;
            float fHeight;

            public:
            Dimensions();
            Dimensions(float _l, float _w, float _h);

            float getLength() const;
            float getWidth() const;
            float getHeight() const;

            //declaring friend here doesn't work in this private scenario
            //friend std::ostream& operator<<(std::ostream& os, WeighingMachine::Dimensions& resource);
        } dimensionOfProduct;
        

        public:
        //declare friend for private Dimensions here
        friend std::ostream& operator<<(std::ostream& os, WeighingMachine::Dimensions& resource);

        class Date {
            private:
            unsigned short usDay;
            std::string sMonth;
            unsigned short usYear;

            public:
            Date();

            Date(unsigned short _d, std::string _m, unsigned short _y);

            friend std::ostream& operator<<(std::ostream& os, const ::ProductProps::WeighingMachine::Date& resource);

            unsigned short getDay() const;
            std::string getMonth() const;
            unsigned short getYear() const;

        } dateFirstAvailable;

        WeighingMachine();

        void showMachineDetails();

        void setMachineDetails
        (
            std::string _sName,
            unsigned int _uiPrice,
            std::string _sColor,
            std::string _sDisplayType,
            float _fCustomerRatings,
            unsigned short _usWeight,
            Dimensions _dimensionOfProduct,
            Date _dateFirstAvailable
        );

    };
}

#endif /*_WEIGHING_MACHINE_INTERFACE_HPP*/
