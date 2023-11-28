//C Struct for Vaccum Cleaner
#include <stdio.h>
#include <stdlib.h>

#define YES      1
#define NO       0

typedef int iBool_t;

struct Dimensions
{
    float fHeight;
    float fLength;
    float fWidth;
} defDimensions = {.fHeight = 0, 0.0f, 0.0f};

struct Date
{
    unsigned short usDay;
    char* pcMonth;
    unsigned short usYear;
};

struct productProps
{
    unsigned char* pucName;
    unsigned int uiPrice;
    struct Dimensions structDim_DimensionsOfProduct;
    struct Date structDate_DateFirstAvailable;
    unsigned short usCapacity;
    unsigned int uiWeight;
    _Bool hasBattery;
    iBool_t bIsItCordless;
};

//function declarations
void setProductDetails
(
    struct productProps* structVariableToSetValues,
    unsigned char* _pucName,
    unsigned int _uiPrice,
    float _fHeight,
    float _fLength,
    float _fWidth,
    struct Date _structDate_DateFirstAvailable,
    unsigned short _usCapacity,
    unsigned int _uiWeight,
    _Bool _hasBattery,
    iBool_t _bIsItCordless
);

void showProductDetails(const struct productProps* productVariable);

static void* ampMalloc(size_t sizeOfStruct);

char* cYesOrNo(const iBool_t* member);
char* c_cYesOrNo(const _Bool* member);

int main(void)
{
    struct productProps* newVacuumCleaner = (struct productProps*)ampMalloc(sizeof(struct productProps));
    
    showProductDetails(newVacuumCleaner);

    *newVacuumCleaner = (struct productProps){
                                                .pucName = "empty_name",
                                                .uiPrice = 000,
                                                .structDim_DimensionsOfProduct = defDimensions,
                                                .structDate_DateFirstAvailable = {0, "empty_month", 0},
                                                .uiWeight = 0,
                                                .usCapacity = 0,
                                                .hasBattery = 0,
                                                .bIsItCordless = NO,
                                            };

    showProductDetails(newVacuumCleaner);
    
    setProductDetails
    (
        newVacuumCleaner,
        "Inalsa Vacuum Cleaner",
        9958,
        1.5, 6.8, 9.8,
        (struct Date){1, "March", 1980},
        777,
        10,
        YES,
        YES
    );

    showProductDetails(newVacuumCleaner);

    return(0);
}

//function definitions
void setProductDetails
(
    struct productProps* structVariableToSetValues,
    unsigned char* _pucName,
    unsigned int _uiPrice,
    float _fHeight,
    float _fLength,
    float _fWidth,
    struct Date _structDate_DateFirstAvailable,
    unsigned short _usCapacity,
    unsigned int _uiWeight,
    _Bool _hasBattery,
    iBool_t _bIsItCordless
)
{
    structVariableToSetValues->pucName = _pucName;
    structVariableToSetValues->uiPrice = _uiPrice;
    structVariableToSetValues->structDim_DimensionsOfProduct = (struct Dimensions){_fLength, _fWidth, _fHeight};
    //structVariableToSetValues->structDate_DateFirstAvailable = (struct Date){_structDate_DateFirstAvailable.usDay, _structDate_DateFirstAvailable.pcMonth, _structDate_DateFirstAvailable.usYear};
    structVariableToSetValues->structDate_DateFirstAvailable = _structDate_DateFirstAvailable;
    structVariableToSetValues->usCapacity = _usCapacity;
    structVariableToSetValues->uiWeight = _uiWeight;
    structVariableToSetValues->hasBattery = _hasBattery;
    structVariableToSetValues->bIsItCordless = _bIsItCordless;
}

void showProductDetails(const struct productProps* productVariable)
{
    puts("Product Details of Vacuum Cleaner\n");

    printf("%s\n",productVariable->pucName);
    printf("%i\n",productVariable->uiPrice);
    printf("%0.1fx%0.1fx%0.1f\n",productVariable->structDim_DimensionsOfProduct.fHeight,
                                 productVariable->structDim_DimensionsOfProduct.fLength,
                                 productVariable->structDim_DimensionsOfProduct.fWidth);
    printf("%hu-%s-%hu\n",  productVariable->structDate_DateFirstAvailable.usDay,
                            productVariable->structDate_DateFirstAvailable.pcMonth,
                            productVariable->structDate_DateFirstAvailable.usYear);
    printf("%i\n",productVariable->uiWeight);
    printf("%i\n",productVariable->usCapacity);
    printf("%s\n",c_cYesOrNo(&productVariable->hasBattery));
    printf("%s\n",cYesOrNo(&productVariable->bIsItCordless));

    printf("\n");
}

static void* ampMalloc(size_t sizeOfStruct)
{
    size_t* p = NULL;
    
    p = (void*)malloc(sizeOfStruct);
    if(p == NULL)
    {
        puts("ampMalloc failed\n");
        exit(EXIT_FAILURE);
    }

    return(p);
}

char* cYesOrNo(const iBool_t* member)
{
    if(*member)
        return "YES";
    return "NO";
}

char* c_cYesOrNo(const _Bool* member)
{
    if(*member)
        return "yes";
    return "no";
}