//C++ Class for Beyerdynamic Headphone
#include <iostream>

const bool YES = 1;
const bool NO = 0;

class productProps{
    private:
    const char* pcName;
    unsigned int uiPrice;
    unsigned short usGsmFrequency;
    const char* pcModelName;
    unsigned int uiWeight;
    const char* pcCountryOfOrigin;
    float fCustomerRatings;

    struct allYesOrNoProps;
    
    class Dimensions{
        private:
        float fHeight;
        float fWidth;
        float fLength;

        public:
        Dimensions(float _h, float _w, float _l)
        :   fHeight(_h), fWidth(_w), fLength(_l)
        {

        }

        friend std::ostream& operator<<(std::ostream& os, const Dimensions& resource)
        {
            std::cout << resource.fHeight << "x" << resource.fLength << "x" << resource.fWidth;

            return os;
        }
        
    } dimensionsOfProduct;


    public:
    class Date{
        private:
        unsigned short usDay;
        const char* pcMonth;
        unsigned short usYear;

        public:
        Date(unsigned short _d = 0, const char* _m = "empty", unsigned short _y = 0000)
        :   usDay(_d), pcMonth(_m), usYear(_y)
        {

        }

        friend std::ostream& operator<<(std::ostream& os, const Date& resource);

    } dateFirstAvailable{0, "empty", 0};

    friend std::ostream& operator<<(std::ostream& os, const Date& resource);

    //default constr
    productProps()
    :   pcName{"empty_name"},
        uiPrice{0},
        usGsmFrequency{0},
        pcModelName{"empty_name"},
        uiWeight{0},
        pcCountryOfOrigin{"empty_country"},
        fCustomerRatings{0},
        dimensionsOfProduct{0.0,0.0,0.0}
    {

    }
    
    //function declarations
    void setProductDetails
    (
        const char* _pcName,
        unsigned int _uiPrice,
        Dimensions _dimensionsOfProduct,
        Date _dateFirstAvailable,
        bool _bBatteriesIncluded,
        bool _bBatteriesRequired,
        bool _bContainsLiquid,
        bool _bAcAdaptor,
        bool _bIncludesRemote,
        unsigned short _usGsmFrequency,
        const char* _pcModelName,
        unsigned int _uiWeight,
        const char* _pcCountryOfOrigin,
        float _fCustomerRatings
    );
    void showProductDetails();

    const char* cYesOrNo(const bool& member) const;
};

int main(void){
    productProps* newProduct = new productProps;

    newProduct->setProductDetails
    (
        "Beyerdynamic Headphone",
        12989,
        {2.5, 3.5, 10.0},
        {25, "July", 2015},
        NO,
        YES,
        NO,
        YES,
        NO,
        35000,
        "DT 770 Pro 80",
        96,
        "Germany",
        4.7
    );

    newProduct->showProductDetails();

    return 0;
}

//definitions
struct productProps::allYesOrNoProps{
    bool bBatteriesIncluded;
    bool bBatteriesRequired;
    bool bContainsLiquid;
    bool bAcAdaptor;
    bool bIncludesRemote;
} bAllYesOrNoProps = {NO, NO, NO, NO, NO};

void productProps::setProductDetails
(
    const char* _pcName,
    unsigned int _uiPrice,
    Dimensions _dimensionsOfProduct,
    Date _dateFirstAvailable,
    bool _bBatteriesIncluded,
    bool _bBatteriesRequired,
    bool _bContainsLiquid,
    bool _bAcAdaptor,
    bool _bIncludesRemote,
    unsigned short _usGsmFrequency,
    const char* _pcModelName,
    unsigned int _uiWeight,
    const char* _pcCountryOfOrigin,
    float _fCustomerRatings
)
{
    this->pcName = _pcName;
    uiPrice = _uiPrice;
    dimensionsOfProduct = _dimensionsOfProduct;
    dateFirstAvailable = _dateFirstAvailable;
    bAllYesOrNoProps.bBatteriesIncluded = _bBatteriesIncluded;
    bAllYesOrNoProps.bBatteriesRequired = _bBatteriesRequired;
    bAllYesOrNoProps.bContainsLiquid = _bContainsLiquid;
    bAllYesOrNoProps.bAcAdaptor = _bAcAdaptor;
    bAllYesOrNoProps.bIncludesRemote = _bIncludesRemote;
    usGsmFrequency = _usGsmFrequency;
    pcModelName = _pcModelName;
    uiWeight = _uiWeight;
    pcCountryOfOrigin = _pcCountryOfOrigin;
    fCustomerRatings = _fCustomerRatings;
}

void productProps::showProductDetails()
{
    std::cout << "Product Details for Headphones are:" << std::endl;

    std::cout << pcName << std::endl;
    std::cout << uiPrice << std::endl;
    std::cout << usGsmFrequency << std::endl;
    std::cout << pcModelName << std::endl;
    std::cout << uiWeight << std::endl;
    std::cout << pcCountryOfOrigin << std::endl;
    std::cout << fCustomerRatings << std::endl;
    std::cout << cYesOrNo(bAllYesOrNoProps.bBatteriesIncluded) << std::endl;
    std::cout << cYesOrNo(bAllYesOrNoProps.bBatteriesRequired) << std::endl;
    std::cout << cYesOrNo(bAllYesOrNoProps.bContainsLiquid) << std::endl;
    std::cout << cYesOrNo(bAllYesOrNoProps.bAcAdaptor) << std::endl;
    std::cout << cYesOrNo(bAllYesOrNoProps.bIncludesRemote) << std::endl;
    std::cout << dimensionsOfProduct << std::endl;
    std::cout << dateFirstAvailable << std::endl;
}

const char* productProps::cYesOrNo(const bool& member) const
{
    if(member == YES)
        return "YES";
    return "NO";
}

std::ostream& operator<<(std::ostream& os, const productProps::Date& resource)
{
    std::cout << resource.usDay << "-" << resource.pcMonth << "-" << resource.usYear;

    return os;
}
