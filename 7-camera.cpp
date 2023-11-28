//C++ Class for Canon Camera
#include <iostream>

const bool YES = 1;
const bool NO = 0;

class Dimensions{
    friend class productProps;

    private:
    float fLength;
    float fWidth;
    float fHeight;

    public:
    //parameterised constr
    Dimensions(float l = 0.5f, float w = 0.5f, float h = 0.5f)
    :   fLength(l), fWidth(w), fHeight(h)
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
    //parameterised constr
    Date(unsigned short d, const char* m, unsigned short y)
    :   usDay(d), pcMonth(m), usYear(y)
    {

    }
};

class DisplayResolution{
    friend class productProps;

    private:
    unsigned short usScreenWidth;
    unsigned short usScreenHeight;

    public:
    DisplayResolution(unsigned short w, unsigned short h)
    :   usScreenHeight(h), usScreenWidth(w)
    {

    }
};

class productProps{
    private:
    const char* pcName;
    unsigned int uiPrice;
    Dimensions dimensionsOfProduct;
    Date dateFirstAvailable;
    DisplayResolution displayResolution;
    const char* pcBrand;
    const char* pcManufacturer;
    const char* pcModelName;
    const char* pcFlashMemoryType;
    unsigned short usDigitalStorage;
    unsigned short usMemorySlotsAvailable;
    unsigned int usMaxShutterSpeed;
    float fCustomerRatings;
    bool bHasImageStabilisation;
    bool bBatteriesIncluded;
    bool bBatteriesRequired;
    bool bRechargeableBatteriesIncluded;
    bool bExternalMemoryIncluded;

    public:
    //default constr
    productProps()
    :   pcName{"empty_name"},
        uiPrice{0},
        dimensionsOfProduct{0, 0, 0},
        dateFirstAvailable{0, "empty_month", 0},
        displayResolution{0,0},
        pcBrand{"empty_brand"},
        pcManufacturer{"empty_manu"},
        pcModelName{"empty_model"},
        pcFlashMemoryType{"empty"},
        usDigitalStorage{0},
        usMemorySlotsAvailable{0},
        usMaxShutterSpeed{0},
        fCustomerRatings{0.0f},
        bHasImageStabilisation{NO},
        bBatteriesIncluded{NO},
        bBatteriesRequired{NO},
        bRechargeableBatteriesIncluded{NO},
        bExternalMemoryIncluded{NO}
    {

    }

    //member functions decl
    void setProductDetails
    (
        const char* _pcName,
        unsigned int _uiPrice,
        Dimensions _dimensionsOfProduct,
        Date _dateFirstAvailable,
        DisplayResolution _displayResolution,
        const char* _pcBrand,
        const char* _pcManufacturer,
        const char* _pcModelName,
        const char* _pcFlashMemoryType,
        unsigned short _usDigitalStorage,
        unsigned short _usMemorySlotsAvailable,
        unsigned int _usMaxShutterSpeed,
        float _fCustomerRatings,
        bool _bHasImageStabilisation,
        bool _bBatteriesIncluded,
        bool _bBatteriesRequired,
        bool _bRechargeableBatteriesIncluded,
        bool _bExternalMemoryIncluded
    );

    void showProductDetails();
    const char* bYesOrNo(const bool& member) const;

};

int main(){
    productProps *newCamera = new productProps;

    newCamera->setProductDetails
    (
        "Canon D1500 Camera",
        39999,
        {12.5, 16.5, 19.88},
        {6, "March", 2012},
        {1920,
        1080},
        "Canon",
        "Canon Inc., value:No.18, Chen Kuo Road, Tan Tzu Dist, Taichung City, Taiwan",
        "D1500",
        "SDHC",
        64,
        1,
        767011,
        4.2,
        YES,
        NO,
        YES,
        NO,
        YES
    );

    newCamera->showProductDetails();

    delete newCamera;

    newCamera = nullptr;
    return 0;
}

//function definitions
void productProps::setProductDetails
(
    const char* _pcName,
    unsigned int _uiPrice,
    Dimensions _dimensionsOfProduct,
    Date _dateFirstAvailable,
    DisplayResolution _displayResolution,
    const char* _pcBrand,
    const char* _pcManufacturer,
    const char* _pcModelName,
    const char* _pcFlashMemoryType,
    unsigned short _usDigitalStorage,
    unsigned short _usMemorySlotsAvailable,
    unsigned int _usMaxShutterSpeed,
    float _fCustomerRatings,
    bool _bHasImageStabilisation,
    bool _bBatteriesIncluded,
    bool _bBatteriesRequired,
    bool _bRechargeableBatteriesIncluded,
    bool _bExternalMemoryIncluded
)
{
    this->pcName = _pcName;
    pcName = _pcName;
    uiPrice = _uiPrice;
    dimensionsOfProduct = _dimensionsOfProduct;
    dateFirstAvailable = _dateFirstAvailable;
    displayResolution = _displayResolution;
    pcBrand = _pcBrand;
    pcManufacturer = _pcManufacturer;
    pcModelName = _pcModelName;
    pcFlashMemoryType = _pcFlashMemoryType;
    usDigitalStorage =_usDigitalStorage;
    usMemorySlotsAvailable = _usMemorySlotsAvailable;
    usMaxShutterSpeed = _usMaxShutterSpeed;
    fCustomerRatings = _fCustomerRatings;
    bHasImageStabilisation = _bHasImageStabilisation;
    bBatteriesIncluded = _bBatteriesIncluded;
    bBatteriesRequired = _bBatteriesRequired;
    bExternalMemoryIncluded = _bExternalMemoryIncluded;
}

void productProps::showProductDetails()
{
    std::cout << "Product Details for Canon Camera" << std::endl;

    std::cout << pcName << std::endl;
    std::cout << uiPrice << std::endl;
    std::cout << dimensionsOfProduct.fHeight << "x" << dimensionsOfProduct.fLength << "x" << dimensionsOfProduct.fWidth << std::endl;
    std::cout << dateFirstAvailable.usDay << "-" << dateFirstAvailable.pcMonth << "-" << dateFirstAvailable.usYear << std::endl;
    std::cout << displayResolution.usScreenWidth << "x" << displayResolution.usScreenHeight << std::endl;
    std::cout << pcBrand << std::endl;
    std::cout << pcManufacturer << std::endl;
    std::cout << pcModelName << std::endl;
    std::cout << pcFlashMemoryType << std::endl;
    std::cout << usDigitalStorage << std::endl;
    std::cout << usMemorySlotsAvailable << std::endl;
    std::cout << usMaxShutterSpeed << std::endl;
    std::cout << fCustomerRatings << std::endl;
    std::cout << bYesOrNo(bHasImageStabilisation) << std::endl;
    std::cout << bYesOrNo(bBatteriesIncluded) << std::endl;
    std::cout << bYesOrNo(bBatteriesRequired) << std::endl;
    std::cout << bYesOrNo(bRechargeableBatteriesIncluded) << std::endl;
    std::cout << bYesOrNo(bExternalMemoryIncluded) << std::endl;
}

const char* productProps::bYesOrNo(const bool& member) const
{
    if(member)
        return "YES";
    else
        return "NO";
}
