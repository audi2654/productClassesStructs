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
    } dimensionsOfProduct;


    public:
    class Date;

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
class productProps::Date{
    private:
    unsigned short usDay;
    const char* pcMonth;
    unsigned short usYear;

    public:
    Date(unsigned short _d = 0, const char* _m = "empty", unsigned short _y = 0000)
    :   usDay(_d), pcMonth(_m), usYear(_y)
    {

    }
} dateFirstAvailable;

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
