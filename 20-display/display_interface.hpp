// LG DISPLAY INTERFACE
//https://www.amazon.in/LG-UltraWide-Inches-WFHD-Display/dp/B09GW9LFMG/

#ifndef _DISPLAY_INTERFACE_H
#define _DISPLAY_INTERFACE_H

namespace ProductProps{
    class Display{
        private:
        //class member variables
        std::string sName;
        unsigned int uiPrice;
        std::string sColor;
        unsigned short usPortCount;
        unsigned short usVoltage;
        bool bBatteriesIncluded;
        unsigned short usWeight;
        double dRatings;

        class Date{
            private:
            //class member variables
            unsigned short usDay;
            std::string sMonth;
            unsigned short usYear;

            public:
            //class Date constr
            Date();
            Date(unsigned short _d, std::string _m, unsigned short _y);

            //public member function declarations
            unsigned short getDay() const;
            std::string getMonth() const;
            unsigned short getYear() const;

            //declaring friend here doesn't work in this private scenario
            //friend std::ostream& operator<<(std::ostream& os, const Date& resource);

        } dateFirstAvailable;

        public:
        //declare friend for private Date here
        friend std::ostream& operator<<(std::ostream& os, const Date& resource);

        //public variable members
        class Dimensions{
            private:
            //class member variables
            float fLength;
            float fWidth;
            float fHeight;

            public:
            //public class member functions
            //class constr
            Dimensions();
            Dimensions(float _f, float _w, float _h);

            class DisplayDimensions{
                private:
                unsigned short usHeight;
                unsigned short usWidth;

                public:
                DisplayDimensions();
                DisplayDimensions(unsigned short _h, unsigned short _w);

                friend std::ostream& operator<<(std::ostream& os, const DisplayDimensions& resource);
            };

            friend std::ostream& operator<<(std::ostream& os, const Dimensions& resource);
        };
        
        Dimensions dimensionsOfProduct;
        Dimensions::DisplayDimensions displayResolution;

        //default constr
        Display();

        void showDetails();

        void setDetails
        (
            std::string _sName,
            unsigned int _uiPrice,
            std::string _sColor,
            unsigned short _usPortCount,
            unsigned short _usVoltage,
            bool _bBatteriesIncluded,
            unsigned short _usWeight,
            double _dRatings,
            Date _dateFirstAvailable,
            Dimensions _dimensionsOfProduct,
            Dimensions::DisplayDimensions _displayResolution
        );

    };
}

#endif /*_DISPLAY_INTERFACE_H*/
