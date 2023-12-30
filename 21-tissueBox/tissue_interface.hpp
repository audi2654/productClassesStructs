//TISSUE BOX INTERFACE
#ifndef _TISSUE_BOX_INTERFACE_HPP
#define _TISSUE_BOX_INTERFACE_HPP

namespace ProductProps{
    class TissueBox{
        private:
        std::string sName;
        unsigned int uiPrice;
        std::string sMaterial;
        float fRatings;
        unsigned int uiWeight;
        
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
        };

        Date dateFirstAvailable;

        public:
        friend std::ostream& operator<<(std::ostream& os, const TissueBox::Date& resource);
        friend std::ostream& operator<<(std::ostream& os, const TissueBox::Date* resource);

        friend std::ostream& operator<<(std::ostream& os, const TissueBox& resource);

        class Dimensions{
            float fLength;
            float fWidth;
            float fHeight;

            public:
            Dimensions();
            Dimensions(float _l, float _w, float _h);

            friend std::ostream& operator<<(std::ostream& os, const TissueBox::Dimensions& resource);
        };

        Dimensions dimensionsOfProduct;

        TissueBox();

        void showDetails(TissueBox* resource);
        void setDetails
        (
            std::string _sName,
            unsigned int _uiPrice,
            std::string _sMaterial,
            float _fRatings,
            unsigned int _uiWeight,
            Dimensions _dimensionsOfProduct,
            Date _dateFirstAvailable
        );
    };
}

#endif /*_TISSUE_BOX_INTERFACE_HPP*/