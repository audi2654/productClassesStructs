//COFFEE MUG INTERFACE
#ifndef _COFFEE_MUG_INTERFACE_H
#define _COFFEE_MUG_INTERFACE_H

#include <iostream>

namespace Mug{
    class CoffeeMug{
        private:
        class Dimensions{
            private:
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
            //friend std::ostream& operator<<(std::ostream& os, const Dimensions& resource);
            
        };

        unsigned int uiPrice;
        std::string sMsgOnMug;
        Dimensions dimensionsOfProduct;

        public:
        //declare friend for private Dimensions here
        friend std::ostream& operator<<(std::ostream& os, const Dimensions& resource);

        typedef enum Shape
        {
            CIRCULAR = 0,
            SQUARE,
            RECTANGLE,
            TRIANGLE
        } shape_t;

        typedef enum Color
        {
            WHITE = 0,
            BLACK,
            RED,
            GREEN
        } color_t;

        shape_t e_Shape;
        color_t e_Color;

        class Date{
            private:
            unsigned short usDay;
            std::string sMonth;
            unsigned short usYear;

            public:
            Date();

            Date(unsigned short _d, std::string _m, unsigned short _y);

            unsigned short getDay() const;
            std::string getMonth() const;
            unsigned short getYear() const;

            friend std::ostream& operator<<(std::ostream& os, const Date& resource);
        };

        Date dateFirstAvailable;

        CoffeeMug();

        void showCoffeeMugDetails();

        void setCoffeeMugDetails
        (
            shape_t _e_Shape,
            unsigned int _uiPrice,
            color_t _e_Color,
            std::string _sMsgOnMug,
            Dimensions _dimensionsOfProduct,
            Date _dateFirstAvailable
        );
    };
}

#endif /*_COFFEE_MUG_INTERFACE_H*/
