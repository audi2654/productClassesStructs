//TISSUE BOX SERVER
#include <iostream>
#include "tissue_interface.hpp"

::ProductProps::TissueBox::TissueBox()
:   sName{"name"},
    uiPrice{0},
    sMaterial{"empty"},
    fRatings{0},
    uiWeight{0},
    dimensionsOfProduct{0,0,0},
    dateFirstAvailable{0, "month", 0}
{

}

::ProductProps::TissueBox::Date::Date()
:   usDay{0},
    sMonth{"empty_month"},
    usYear{0}
{

}

::ProductProps::TissueBox::Date::Date(unsigned short _d, std::string _m, unsigned short _y)
:   usDay{_d},
    sMonth{_m},
    usYear{_y}
{
    
}

::ProductProps::TissueBox::Dimensions::Dimensions()
:   fLength(0), fWidth(0), fHeight(0)
{

}

::ProductProps::TissueBox::Dimensions::Dimensions(float _l, float _w, float _h)
:   fLength(_l), fWidth(_w), fHeight(_h)
{

}

void ::ProductProps::TissueBox::showDetails(TissueBox* resource)
{
    std::cout << std::endl;
    std::cout << "Product Details for Tissue Box are " << std::endl;

    std::cout << &resource << std::endl;

    // std::cout << this->sName << std::endl;
    // std::cout << this->uiPrice << std::endl;
    // std::cout << this->sMaterial << std::endl;
    // std::cout << this->fRatings << std::endl;
    // std::cout << this->uiWeight << std::endl;
    // std::cout << this->dimensionsOfProduct << std::endl;
    // std::cout << this->dateFirstAvailable << std::endl;

    std::cout << "END OF Product Details" << std::endl;
    std::cout << std::endl;
}

void ::ProductProps::TissueBox::setDetails
(
    std::string _sName,
    unsigned int _uiPrice,
    std::string _sMaterial,
    float _fRatings,
    unsigned int _uiWeight,
    Dimensions _dimensionsOfProduct,
    Date _dateFirstAvailable
)
{
    sName = _sName;
    uiPrice = _uiPrice;
    sMaterial = _sMaterial;
    fRatings = _fRatings;
    uiWeight = _uiWeight;
    dimensionsOfProduct = _dimensionsOfProduct;
    dateFirstAvailable = _dateFirstAvailable;
}

unsigned short ::ProductProps::TissueBox::Date::getDay() const
{
    return usDay;
}

std::string ProductProps::TissueBox::Date::getMonth() const
{
    return sMonth;
}

unsigned short ::ProductProps::TissueBox::Date::getYear() const
{
    return usYear;
}

namespace ProductProps{
    std::ostream& operator<<(std::ostream& os, const TissueBox::Date& resource)
    {
        std::cout << resource.getDay() << "-" << resource.getMonth() << "-" << resource.getYear();

        return os;
    }

    std::ostream& operator<<(std::ostream& os, const TissueBox::Dimensions& resource)
    {
        std::cout << resource.fLength << "x" << resource.fWidth << "x" << resource.fHeight;

        return os;
    }

    std::ostream& operator<<(std::ostream& os, const ::ProductProps::TissueBox& resource)
    {
        std::cout << resource.sName << std::endl;
        std::cout << resource.uiPrice << std::endl;
        std::cout << resource.sMaterial << std::endl;
        std::cout << resource.fRatings << std::endl;
        std::cout << resource.uiWeight << std::endl;
        std::cout << resource.dimensionsOfProduct << std::endl;
        std::cout << resource.dateFirstAvailable << std::endl;

        return os;
    }

    std::ostream& operator<<(std::ostream& os, const ::ProductProps::TissueBox* resource)
    {
        std::cout << "Inside Friend Func" << std::endl;
        
        // std::cout << resource->sName << std::endl;
        // std::cout << resource->uiPrice << std::endl;
        // std::cout << resource->sMaterial << std::endl;
        // std::cout << resource->fRatings << std::endl;
        // std::cout << resource->uiWeight << std::endl;
        // std::cout << resource->dimensionsOfProduct << std::endl;
        // std::cout << resource->dateFirstAvailable << std::endl;

        return os;
    }
}
