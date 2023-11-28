//C++ Class for Camera Gimble
#include <iostream>

const bool YES = 1;
const bool NO = 0;

class Dimensions{
    friend class productProps;

    private:
    float fWidth;
    float fHeight;
    float fLength;

    public:
    //parametrized constr
    Dimensions(float l, float w, float h)
    :   fWidth{w}, fHeight(h), fLength(l)
    {

    }
};

class Date{
    friend class productProps;

    private:
    unsigned short usDay;
    const char* pcMonth;
    unsigned short usYear;

    public:
    //parametrized constr
    Date(unsigned short d = 0, const char* m = "empty_month", unsigned short y = 1998)
    :   usDay(d), pcMonth(m), usYear(y)
    {

    }
};

class productProps{
    private:
    const char* pcName;
    unsigned int uiPrice;
    Dimensions dimensionsOfProduct;
    Date dateFirstAvailable;
    const char* pcManufacturer;
    const char* pcCompatibleDevices;
    unsigned short uiNumberOfItems;
    bool bBatteriesIncluded;
    bool bBatteriesRequired;
    bool bTimer;
    unsigned int uiItemWeight;
    float fCustomerRatings;

    public:
    //default constr
    productProps()
    :   pcName{"empty_name"},
        uiPrice{0},
        dimensionsOfProduct{0,0,0},
        dateFirstAvailable{0, "empty_month", 0},
        pcManufacturer{"empty"},
        pcCompatibleDevices{"empty"},
        uiNumberOfItems{0},
        bBatteriesIncluded{NO},
        bBatteriesRequired{NO},
        bTimer{NO},
        uiItemWeight{0},
        fCustomerRatings{0.0f}
    {

    }

    void setProductDetails
    (
        const char* _pcName,
        unsigned int _uiPrice,
        Dimensions _dimensionsOfProduct,
        Date _dateFirstAvailable,
        const char* _pcManufacturer,
        const char* _pcCompatibleDevices,
        unsigned short _uiNumberOfItems,
        bool _bBatteriesIncluded,
        bool _bBatteriesRequired,
        bool _bTimer,
        unsigned int _uiItemWeight,
        float _fCustomerRatings
    );

    void showProductDetails();
    const char* cYesOrNo(const bool& member) const;
};

int main(void){
    productProps* newCameraGimble = new productProps;

    newCameraGimble->showProductDetails();

    newCameraGimble->setProductDetails
    (
        "DJI Camera Gimble",
        9998,
        {0.2, 8.5, 9.98},
        {02, "March", 2022},
        "DJI",
        "Cellphones",
        1,
        YES,
        NO,
        YES,
        500,
        4.3f
    );

    newCameraGimble->showProductDetails();

    return 0;
}

void productProps::setProductDetails
(
    const char* _pcName,
    unsigned int _uiPrice,
    Dimensions _dimensionsOfProduct,
    Date _dateFirstAvailable,
    const char* _pcManufacturer,
    const char* _pcCompatibleDevices,
    unsigned short _uiNumberOfItems,
    bool _bBatteriesIncluded,
    bool _bBatteriesRequired,
    bool _bTimer,
    unsigned int _uiItemWeight,
    float _fCustomerRatings
)
{
    this->pcName = _pcName;
    uiPrice = _uiPrice;
    dimensionsOfProduct = _dimensionsOfProduct;
    dateFirstAvailable = _dateFirstAvailable;
    pcManufacturer = _pcManufacturer;
    pcCompatibleDevices = _pcCompatibleDevices;
    uiNumberOfItems = _uiNumberOfItems;
    bBatteriesIncluded = _bBatteriesIncluded;
    bBatteriesRequired = _bBatteriesRequired;
    bTimer = _bTimer;
    uiItemWeight = _uiItemWeight;
    fCustomerRatings = _fCustomerRatings;
}

void productProps::showProductDetails()
{
    std::cout << "\nProduct Details for Camera Gimble" << std::endl;

    std::cout << this->pcName << std::endl;
    std::cout << uiPrice << std::endl;
    std::cout << dimensionsOfProduct.fHeight << "x" << dimensionsOfProduct.fLength << "x" << dimensionsOfProduct.fWidth << std::endl;
    std::cout << dateFirstAvailable.usDay << "-" << dateFirstAvailable.pcMonth << "-" << dateFirstAvailable.usYear << std::endl;
    std::cout << pcManufacturer << std::endl;
    std::cout << pcCompatibleDevices << std::endl;
    std::cout << uiNumberOfItems << std::endl;
    std::cout << cYesOrNo(bBatteriesIncluded) << std::endl;
    std::cout << cYesOrNo(bBatteriesRequired) << std::endl;
    std::cout << cYesOrNo(bTimer) << std::endl;
    std::cout << uiItemWeight << std::endl;
    std::cout << fCustomerRatings << std::endl;
}

const char* productProps::cYesOrNo(const bool& member) const
{
    if(member)
        return "YES";
    return "NO";
}