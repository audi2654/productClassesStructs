//WEIGHING MACHINE INTERFACE
#ifndef _WEIGHING_MACHINE_INTERFACE_HPP
#define _WEIGHING_MACHINE_INTERFACE_HPP

#include <iostream>

using ProductProps{
    class WeighingMachine{
        private:
        std::string sName;
        unsigned int uiPrice;
        std::string sColor;
        std::string sDisplayTime;
        float fCustomerRatings;
        unsigned short usWeight;
        class Dimensions{
            float fLength;
            float fWidth;
            float fHeight;

            public:
            Dimensions();
            Dimensions(float _l, float _w, float _h);

            //friend std::ostream& operator<<(std::ostream& os, Dimensions& resource);
        } dimensionOfProduct;
        

        public:
        //friend std::ostream& operator<<(std::ostream& os, WeighingMachine::Dimensions& resource);

        class Date {
            private:
            unsigned short usDay;
            std::string sMonth;
            unsigned short usYear;

            public:
            Date();

            Date(unsigned short _d, std::string _m, unsigned short _y);

            //friend
        } dateFirstAvailable;


        WeighingMachine();
        :   
        {

        }
    }
}

#endif /*_WEIGHING_MACHINE_INTERFACE_HPP*/
