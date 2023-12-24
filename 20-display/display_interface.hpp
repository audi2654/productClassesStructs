// LG DISPLAY INTERFACE
//https://www.amazon.in/LG-UltraWide-Inches-WFHD-Display/dp/B09GW9LFMG/

#ifndef _DISPLAY_INTERFACE_H
#define _DISPLAY_INTERFACE_H

namespace ProductProps{
    class Display{
        private:
        class Date{
            private:

            public:
            Date();
            Date(unsigned int _d, std::string _m, unsigned int _y);

        };

        public:
        Display();

        class Dimensions{
            private:


            public:
            Dimensions()

            Dimensions(float _f, );

            class DisplayDimensions{
                private:


                public:
            };
        };
    };
}

#endif /*_DISPLAY_INTERFACE_H*/
