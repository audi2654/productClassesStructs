//C Struct for Beyerdynamic Headphone
#include <stdio.h>
#include <stdlib.h>

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

char* cYesOrNo(const _Bool* member); 

char* c_cYesOrNo(const iBool_t* member);

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

    showProductDetails(newProduct);

    return(0);
}

//function definitions
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
)
{
    structVariableToSetValues->pcName = _pcName;
    structVariableToSetValues->uiPrice = _uiPrice;
    structVariableToSetValues->structDim_DimensionsOfProduct = (struct Dimensions){_fLength, _fWidth, _fHeight};
    structVariableToSetValues->structDate_DateFirstAvailable = _structDate_DateFirstAvailable;
    structVariableToSetValues->bBatteriesIncluded = _bBatteriesIncluded;
    structVariableToSetValues->bBatteriesRequired = _bBatteriesRequired;
    structVariableToSetValues->bContainsLiquid = _bContainsLiquid;
    structVariableToSetValues->bAcAdaptor = _bAcAdaptor;
    structVariableToSetValues->bIncludesRemote = _bIncludesRemote;
    structVariableToSetValues->usGsmFrequency = _usGsmFrequency;
    structVariableToSetValues->pcModelName = _pcModelName;
    structVariableToSetValues->uiWeight = _uiWeight;
    structVariableToSetValues->pcCountryOfOrigin = _pcCountryOfOrigin;
    structVariableToSetValues->fCustomerRatings = _fCustomerRatings;
}

void showProductDetails(const struct productProps* productVariable)
{
    printf("%s\n", productVariable->pcName);
    printf("%i\n", productVariable->uiPrice);
    printf("%0.1fx%0.1fx%0.1f\n", productVariable->structDim_DimensionsOfProduct.fHeight, productVariable->structDim_DimensionsOfProduct.fLength, productVariable->structDim_DimensionsOfProduct.fWidth);
    printf("%hu-%s-%hu\n", productVariable->structDate_DateFirstAvailable.usDay, productVariable->structDate_DateFirstAvailable.pcMonth, productVariable->structDate_DateFirstAvailable.usYear);
    printf("%s\n", cYesOrNo(&productVariable->bBatteriesIncluded));
    printf("%s\n", cYesOrNo(&productVariable->bBatteriesRequired));
    printf("%s\n", cYesOrNo(&productVariable->bContainsLiquid));
    printf("%s\n", c_cYesOrNo(&productVariable->bAcAdaptor));
    printf("%s\n", c_cYesOrNo(&productVariable->bIncludesRemote));
    printf("%hu\n", productVariable->usGsmFrequency);
    printf("%s\n", productVariable->pcModelName);
    printf("%hu\n", productVariable->uiWeight);
    printf("%s\n", productVariable->pcCountryOfOrigin);
    printf("%0.3f\n", productVariable->fCustomerRatings);

}

static void* ampMalloc(size_t sizeOfStruct)
{
    size_t* p = NULL;
    p = (void*)malloc(sizeOfStruct);
    if(p == NULL)
    {
        puts("Allocating memory failed in ampMalloc()\n");
        exit(EXIT_FAILURE);
    }

    return(p);
}

char* cYesOrNo(const _Bool* member)
{
    if(*member == YES)
        return("YES");
    return("NO");
}

char* c_cYesOrNo(const iBool_t* member)
{
    if(*member == YES)
        return("YES");
    return("NO");
}
