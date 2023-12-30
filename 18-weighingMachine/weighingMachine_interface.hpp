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

            //accessor or getter function to retrieve the data of the protected members
            float getLength() const;
            float getWidth() const;
            float getHeight() const;

            //different scenarios while writing friend function for extraction operator overloading for a private nested class
            
            //Scenario 1 - if you overload operator<<() in public space under outer class, you no need to declare any friend function in nested class as declared below
            //but in that case you'll have to define accessor or getter functions to get private data

            //Scenario 2 - you don't want to use accessor or getter functions
            //Declare friend for overloading operator<<() under nested class's public space as well as outer class's public space
            friend std::ostream& operator<<(std::ostream& os, WeighingMachine::Dimensions& resource);
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

        friend std::ostream& operator<<(std::ostream& os, const ::ProductProps::WeighingMachine::Date& resource);

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
