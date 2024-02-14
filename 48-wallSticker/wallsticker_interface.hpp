//WALL STICKER INTERFACE
#ifndef _WALLSTICKER_INTERFACE
#define _WALLSTICKER_INTERFACE

namespace Decor{
    class Date{
        friend class WallSticker;

        private:
        unsigned short usDay;
        std::string sMonth;
        unsigned short usYear;

        public:
        Date(unsigned short _d, std::string _m, unsigned short _y);

        friend std::ostream& operator<<(std::ostream& os, const Date& resource);
    };

    struct Dimensions{
        private:
        float fHeight;
        float fWidth;
        float fLength;

        public:
        Dimensions(float _h, float _w, float _l);

        friend std::ostream& operator<<(std::ostream& os, const Dimensions& resource);
    };

    class WallSticker{
        private:
        std::string sName;
        std::string sTheme;
        unsigned short usQuantity;
        unsigned short usWeight;
        Dimensions struc_DimsOfProduct;
        Date dateFirstAvailable;

        public:
        WallSticker();

        void showDetails();

        void setDetails
        (
            std::string _sName,
            std::string _sTheme,
            unsigned short _usQuantity,
            unsigned short _usWeight,
            Dimensions _struc_DimsOfProduct,
            Date _dateFirstAvailable
        );
    };
}

#endif /*_WALLSTICKER_INTERFACE*/
