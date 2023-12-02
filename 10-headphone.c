//C Struct for Beyerdynamic Headphone
#include <stdio.h>

typedef int iBool_t;

#define YES    1
#define NO     0

struct Dimensions
{
    float fHeight;
    float fWidth;
    float fLength;
};

struct Date
{
    unsigned short usDay;
    char* pcMonth;
    unsigned short usYear;
};

struct productProps
{
    char* pcName;
    unsigned int uiPrice;
    struct Dimensions structDim_DimensionsOfProduct;
    struct Date structDate_DateFirstAvailable;
    _Bool bBatteriesIncluded;
    _Bool bBatteriesRequired;
    _Bool bContainsLiquid;
    iBool_t bAcAdaptor;
    iBool_t bIncludesRemote;
    unsigned short usGsmFrequency;
    char* pcModelName;
    unsigned int uiWeight;
    char* pcCountryOfOrigin;
    float fCustomerRatings;
};

void setProductDetails
(
    struct productProps* structVariableToSetValues,
    char* _pcName,
    unsigned int _uiPrice,
    float _fHeight,
    float _fWidth,
    float _fLength,
    struct Date _structDate_DateFirstAvailable,
    _Bool _bBatteriesIncluded,
    _Bool _bBatteriesRequired,
    _Bool _bContainsLiquid,
    iBool_t _bAcAdaptor,
    iBool_t _bIncludesRemote,
    unsigned short _usGsmFrequency,
    char* _pcModelName,
    unsigned int _uiWeight,
    char* _pcCountryOfOrigin,
    float _fCustomerRatings
);

void showProductDetails(const struct productProps* productVariable);

static void* ampMalloc(size_t sizeOfStruct);

int main(void)
{
    struct productProps* newProduct = (struct productProps*)ampMalloc(sizeof(struct productProps));

    newProduct = &(struct productProps){
                                        .pcName = "empty_name",
                                        .uiPrice = 0,
                                        .structDim_DimensionsOfProduct = {0.0,0.0,0.0},
                                        .structDate_DateFirstAvailable = {0, "empty_month", 0},
                                        .bBatteriesIncluded = YES,
                                        .bBatteriesRequired = YES,
                                        .bContainsLiquid = YES,
                                        .bAcAdaptor = YES,
                                        .bIncludesRemote = YES,
                                        .usGsmFrequency = 0,
                                        .uiWeight = 0,
                                        .bContainsLiquid = "empty_country",
                                        .fCustomerRatings = 0
                                       };

    setProductDetails
    (
        newProduct,
        "Beyerdynamic Headphone",
        12989,
        2.5, 3.5, 10.0,
        (struct Date){25, "July", 2015},
        NO,
        NO,
        NO,
        YES,
        NO,
        35000,
        "DT 770 Pro 80",
        96,
        "Germany",
        4.7
    );

    showProductDetails(newProduct);

    return(0);
}