//C++ Class for Kindle
#include <iostream>

#define YES     true
#define NO      false

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
    unsigned short usDay{0};
    const char* pcMonth;
    unsigned short usYear;

    public:
    //parameterised constr
    Date(unsigned short d = 1, const char* m = {"Feb"}, unsigned short y = (1198))
    :   usDay{d}, pcMonth(m), usYear{y}
    {

    }
};

class productProps{
    private:
    const char* pcName;
    unsigned int uiPrice;
    unsigned short usDisplaySize;
    Dimensions dimensionsOfProduct;
    unsigned short usStorage;
    unsigned short usResolution;
    unsigned short usFrontLights;
    const char* pcCover;
    const char* pcColor;
    bool bParentalControl;
    bool bFlushFrontDesign;
    bool bWaterproof;
    bool bWifi;
    bool bWirelessCharging;
    unsigned short usWarranty;
    const char* pcCloudStorage;
    float fWeight;
    Date generationDate;

    public:
    //default constr
    productProps()
    :   pcName{"empty_name"},
        uiPrice{0},
        usDisplaySize{},
        dimensionsOfProduct{0.0f, 0.0f, 0.0f},
        usStorage{0},
        usResolution{0},
        usFrontLights{0},
        pcCover{"empty"},
        pcColor{"empty"},
        bParentalControl{NO},
        bFlushFrontDesign{NO},
        bWaterproof{false},
        bWifi{false},
        bWirelessCharging{false},
        usWarranty{0},
        pcCloudStorage{"empty"},
        fWeight{0.0f},
        generationDate{0, "empty", 0}
    {

    }

    void setProductDetails
    (
        const char* _pcName,
        unsigned int _uiPrice,
        unsigned short _usDisplaySize,
        Dimensions _dimensionsOfProduct,
        unsigned short _usStorage,
        unsigned short _usResolution,
        unsigned short _usFrontLights,
        const char* _pcCover,
        const char* _pcColor,
        bool _bParentalControl,
        bool _bFlushFrontDesign,
        bool _bWaterproof,
        bool _bWifi,
        bool _bWirelessCharging,
        unsigned short _usWarranty,
        const char* _pcCloudStorage,
        float _fWeight,
        Date _generationDate
    );

    void showProductDetails();

    const char* bYesOrNo(const bool& member) const
    {
        if(member)
            return "YES";
        else 
            return "NO";
    }
};

int main(void){
    productProps *newKindle = new productProps;
    
    newKindle->setProductDetails
    (
        "Amazon Kindle Paperwhite",
        15999,
        7,
        {6.2f, 4.3f, 0.32f},
        16,
        330,
        4,
        "Sold Separately",
        "Paperwhite",
        YES,
        NO,
        YES,
        YES,
        NO,
        1,
        "Free for all Amazon content",
        16.999f,
        {01, "Nov", 2023}
    );

    newKindle->showProductDetails();

    delete newKindle;

    newKindle = nullptr;

    return 0;
}

//function definitions
void productProps::setProductDetails
(
    const char* _pcName,
    unsigned int _uiPrice,
    unsigned short _usDisplaySize,
    Dimensions _dimensionsOfProduct,
    unsigned short _usStorage,
    unsigned short _usResolution,
    unsigned short _usFrontLights,
    const char* _pcCover,
    const char* _pcColor,
    bool _bParentalControl,
    bool _bFlushFrontDesign,
    bool _bWaterproof,
    bool _bWifi,
    bool _bWirelessCharging,
    unsigned short _usWarranty,
    const char* _pcCloudStorage,
    float _fWeight,
    Date _generationDate
)
{
    this->pcName = _pcName;
    uiPrice = _uiPrice;
    usDisplaySize = _usDisplaySize;
    dimensionsOfProduct = _dimensionsOfProduct;
    usStorage = _usStorage;
    usResolution = _usResolution;
    usFrontLights = _usFrontLights;
    pcCover = _pcCover;
    pcColor = _pcColor;
    bParentalControl = _bParentalControl;
    bFlushFrontDesign = _bFlushFrontDesign;
    bWaterproof = _bWaterproof;
    bWifi = _bWifi;
    bWirelessCharging = _bWirelessCharging;
    usWarranty = _usWarranty;
    pcCloudStorage = _pcCloudStorage;
    fWeight = _fWeight;
    generationDate = _generationDate;
}

void productProps::showProductDetails()
{
    std::cout <<  ("Product Details of Kindle\n") << std::endl;
    std::cout << pcName << std::endl;
    std::cout << uiPrice << std::endl;
    std::cout << usDisplaySize << std::endl;
    std::cout << dimensionsOfProduct.fLength << "x" << dimensionsOfProduct.fHeight << "x" << dimensionsOfProduct.fWidth << std::endl;
    std::cout << usStorage << std::endl;
    std::cout << usResolution << std::endl;
    std::cout << usFrontLights << std::endl;
    std::cout << pcCover << std::endl;
    std::cout << pcColor << std::endl;
    std::cout << bYesOrNo(bParentalControl) << std::endl;
    std::cout << bYesOrNo(bFlushFrontDesign) << std::endl;
    std::cout << bYesOrNo(bWaterproof) << std::endl;
    std::cout << bYesOrNo(bWifi) << std::endl;
    std::cout << bYesOrNo(bWirelessCharging) << std::endl;
    std::cout << usWarranty << std::endl;
    std::cout << pcCloudStorage << std::endl;
    std::cout << fWeight << std::endl;
    std::cout << generationDate.usDay << "-" << generationDate.pcMonth << "-" << generationDate.usYear << std::endl;
}