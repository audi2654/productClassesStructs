//FOSSIL WATCH INTERFACE
#ifndef _FOSSIL_WATCH_INTERFACE_HPP
#define _FOSSIL_WATCH_INTERFACE_HPP

namespace ProductProps{
    class Watch{
        private:
        std::string sName;
        unsigned int uiPrice;
        unsigned short usCaseSize;
        std::string sColor;
        float fRatings;
        bool bBatteriesIncluded;
        
        class Dimensions{
            private:
            float fLength;
            float fHeight;
            float fWidth;
            
            public:
            class Date{
                private:
                unsigned short usDay;
                std::string sMonth;
                unsigned short usYear;

                public:
                //Date();
                Date(unsigned short _d, std::string _m, unsigned short _y);

                unsigned short getDay() const;
                std::string getMonth() const;
                unsigned short getYear() const;

                friend std::ostream& operator<<(std::ostream& os, const Date& resource);
            };

            
            //Dimensions();
            Dimensions(float _l, float _w, float _h);

            friend std::ostream& operator<<(std::ostream& os, const Dimensions& resource);
        };

        Dimensions dimensionsOfProduct;
        Dimensions::Date dateFirstAvailable;

        public:
        friend std::ostream& operator<<(std::ostream& os, const Dimensions& resource);
        friend std::ostream& operator<<(std::ostream& os, const Dimensions::Date& resource);

        Watch();

        void showDetails();
        void setDetails
        (
            std::string _sName,
            unsigned int _uiPrice,
            unsigned short _usCaseSize,
            std::string _sColor,
            float _fRatings,
            bool _bBatteriesIncluded,
            Dimensions _dimensionsOfProduct,
            Dimensions::Date _dateFirstAvailable
        );
    };
}

#endif /*_FOSSIL_WATCH_INTERFACE_HPP*/