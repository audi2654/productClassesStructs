//C Struct for Canon Camera
#include <stdio.h>
#include <stdlib.h>

#define YES    1
#define NO     0

typedef int iBool_t;

//struct decl
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

struct DisplayResolution
{
    unsigned short screenWidth;
    unsigned short screenHeight;
};

struct productProps
{
    char* pcName;
    unsigned int uiPrice;
    struct Dimensions structDim_dimensionsOfProduct;
    struct Date structDate_dateFirstAvailable;
    struct DisplayResolution structDisp_resolution;
    char* pcBrand;
    char* pcManufacturer;
    char* pcModelName;
    char* pcFlashMemoryType;
    unsigned short usDigitalStorage;
    unsigned short usMemorySlotsAvailable;
    unsigned int usMaxShutterSpeed;
    float fCustomerRatings;
    iBool_t bHasImageStabilisation;
    iBool_t bBatteriesIncluded;
    iBool_t bBatteriesRequired;
    iBool_t bRechargeableBatteriesIncluded;
    iBool_t bExternalMemoryIncluded;
};

//function declarations
void setProductDetails
(
    struct productProps* structVariableToSetValues,
    char* _pcName,
    unsigned int _uiPrice,
    float _fHeight,
    float _fWidth,
    float _fLength,
    unsigned short _usDay,
    char* _pcMonth,
    unsigned short _usYear,
    unsigned short _usScreenWidth,
    unsigned short _usScreenHeight,
    char* _pcBrand,
    char* _pcManufacturer,
    char* _pcModelName,
    char* _pcFlashMemoryType,
    unsigned short _usDigitalStorage,
    unsigned short _usMemorySlotsAvailable,
    unsigned int _usMaxShutterSpeed,
    float _fCustomerRatings,
    iBool_t _bHasImageStabilisation,
    iBool_t _bBatteriesIncluded,
    iBool_t _bBatteriesRequired,
    iBool_t _bRechargeableBatteriesIncluded,
    iBool_t _bExternalMemoryIncluded
);

void showProductDetails(const struct productProps*);

static void* ampMalloc(size_t sizeToAllocate);

char* cYesOrNo(const iBool_t* member);

int main()
{
    struct productProps *newCamera = NULL;
    newCamera = (struct productProps*)ampMalloc(sizeof(struct productProps));

    //directly initializing struct members on heap var pointer address with values
    *newCamera = (struct productProps){ .pcName = "empty_name",
                                        .uiPrice = 0,
                                        .structDim_dimensionsOfProduct = {0, 0, 0},
                                        .structDate_dateFirstAvailable = {0, "empty_month", 0},
                                        .structDisp_resolution = {0,0},
                                        .pcBrand = "empty_brand",
                                        .pcManufacturer = "empty_manu",
                                        .pcModelName = "empty_model",
                                        .pcFlashMemoryType = "empty",
                                        .usDigitalStorage = 0,
                                        .usMemorySlotsAvailable = 0,
                                        .usMaxShutterSpeed = 0,
                                        .fCustomerRatings = 0.0f,
                                        .bHasImageStabilisation = NO,
                                        .bBatteriesIncluded = NO,
                                        .bBatteriesRequired = NO,
                                        .bRechargeableBatteriesIncluded = NO,
                                        .bExternalMemoryIncluded = NO
                                    };

    showProductDetails(newCamera);

    setProductDetails
    (
        newCamera,
        "Canon D1500 Camera",
        39999,
        12.5, 16.5, 19.88,
        6, "March", 2012,
        1920,
        1080,
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

    showProductDetails(newCamera);

    free(newCamera);

    newCamera = NULL;

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
    unsigned short _usDay,
    char* _pcMonth,
    unsigned short _usYear,
    unsigned short _usScreenWidth,
    unsigned short _usScreenHeight,
    char* _pcBrand,
    char* _pcManufacturer,
    char* _pcModelName,
    char* _pcFlashMemoryType,
    unsigned short _usDigitalStorage,
    unsigned short _usMemorySlotsAvailable,
    unsigned int _usMaxShutterSpeed,
    float _fCustomerRatings,
    iBool_t _bHasImageStabilisation,
    iBool_t _bBatteriesIncluded,
    iBool_t _bBatteriesRequired,
    iBool_t _bRechargeableBatteriesIncluded,
    iBool_t _bExternalMemoryIncluded
)
{
    structVariableToSetValues->pcName = _pcName;
    structVariableToSetValues->uiPrice = _uiPrice;
    structVariableToSetValues->structDim_dimensionsOfProduct.fHeight = _fHeight;
    structVariableToSetValues->structDim_dimensionsOfProduct.fWidth = _fWidth;
    structVariableToSetValues->structDim_dimensionsOfProduct.fLength = _fLength;
    structVariableToSetValues->structDate_dateFirstAvailable.usDay = _usDay;
    structVariableToSetValues->structDate_dateFirstAvailable.pcMonth = _pcMonth;
    structVariableToSetValues->structDate_dateFirstAvailable.usYear = _usYear;
    structVariableToSetValues->structDisp_resolution.screenWidth = _usScreenWidth;
    structVariableToSetValues->structDisp_resolution.screenWidth = _usScreenHeight;
    structVariableToSetValues->pcBrand = _pcBrand;
    structVariableToSetValues->pcManufacturer = _pcManufacturer;
    structVariableToSetValues->pcModelName = _pcModelName;
    structVariableToSetValues->pcFlashMemoryType = _pcFlashMemoryType;
    structVariableToSetValues->usDigitalStorage =_usDigitalStorage;
    structVariableToSetValues->usMemorySlotsAvailable = _usMemorySlotsAvailable;
    structVariableToSetValues->usMaxShutterSpeed = _usMaxShutterSpeed;
    structVariableToSetValues->fCustomerRatings = _fCustomerRatings;
    structVariableToSetValues->bHasImageStabilisation = _bHasImageStabilisation;
    structVariableToSetValues->bBatteriesIncluded = _bBatteriesIncluded;
    structVariableToSetValues->bBatteriesRequired = _bBatteriesRequired;
    structVariableToSetValues->bExternalMemoryIncluded = _bExternalMemoryIncluded;
}

void showProductDetails(const struct productProps* productVariable)
{
    puts("Product details for Canon Camera\n");

    printf("%s\n", productVariable->pcName);
    printf("%i\n", productVariable->uiPrice);
    printf("%0.1f x %0.1f x %0.1f\n", productVariable->structDim_dimensionsOfProduct.fHeight, productVariable->structDim_dimensionsOfProduct.fWidth, productVariable->structDim_dimensionsOfProduct.fLength);
    printf("%hu-%s-%hu\n", productVariable->structDate_dateFirstAvailable.usDay, productVariable->structDate_dateFirstAvailable.pcMonth, productVariable->structDate_dateFirstAvailable.usYear);
    printf("%s\n", productVariable->pcBrand);
    printf("%s\n", productVariable->pcManufacturer);
    printf("%s\n", productVariable->pcModelName);
    printf("%s\n", productVariable->pcFlashMemoryType);
    printf("%hu\n", productVariable->usDigitalStorage);
    printf("%hu\n", productVariable->usMemorySlotsAvailable);
    printf("%u\n", productVariable->usMaxShutterSpeed);
    printf("%0.1f\n", productVariable->fCustomerRatings);
    printf("%s\n", cYesOrNo(&productVariable->bHasImageStabilisation));
    printf("%s\n", cYesOrNo(&productVariable->bBatteriesIncluded));
    printf("%s\n", cYesOrNo(&productVariable->bBatteriesRequired));
    printf("%s\n", cYesOrNo(&productVariable->bRechargeableBatteriesIncluded));
    printf("%s\n", cYesOrNo(&productVariable->bExternalMemoryIncluded));

    puts("\n");
}

static void* ampMalloc(size_t sizeToAllocate)
{
    size_t *p = NULL;

    p = (void*)malloc(sizeToAllocate);
    if(p == NULL)
    {
        printf("ampMalloc() failed to allocate memory\n");
        exit(EXIT_FAILURE);
    }

    return(p);
}

char* cYesOrNo(const iBool_t* member)
{
    if(*member == YES)
        return "YES";
    else
        return "NO";
}
