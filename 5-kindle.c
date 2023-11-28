//C Struct for Kindle
#include <stdio.h>
#include <stdlib.h>

#define YES     1
#define NO      0

typedef int iBool_t;

char* bYesOrNo(const iBool_t* member)
{
    if(*member == YES)
        return "YES";
    else 
        return "NO";
}

struct Dimensions{
    float fLength;
    float fWidth;
    float fHeight;
};

struct Date{
    unsigned short usDay;
    char* pcMonth;
    unsigned short usYear;
};

struct productProps{
    char* pcName;
    unsigned int uiPrice;
    unsigned short usDisplaySize;
    struct Dimensions structDim_DimensionsOfProduct;
    unsigned short usStorage;
    unsigned short usResolution;
    unsigned short usFrontLights;
    char* pcCover;
    char* pcColor;
    iBool_t bParentalControl;
    iBool_t bFlushFrontDesign;
    iBool_t bWaterproof;
    iBool_t bWifi;
    iBool_t bWirelessCharging;
    unsigned short usWarranty;
    char* pcCloudStorage;
    float fWeight;
    struct Date structDate_GenerationDate;
};

//function declarations
void setProductDetails
(
    struct productProps* structVariableToSetValues,
    char* _pcName,
    unsigned int _uiPrice,
    unsigned short _usDisplaySize,
    float _fLength,
    float _fWidth,
    float _fHeight,
    unsigned short _usStorage,
    unsigned short _usResolution,
    unsigned short _usFrontLights,
    char* _pcCover,
    char* _pcColor,
    iBool_t _bParentalControl,
    iBool_t _bFlushFrontDesign,
    iBool_t _bWaterproof,
    iBool_t _bWifi,
    iBool_t _bWirelessCharging,
    unsigned short _usWarranty,
    char* _pcCloudStorage,
    float _fWeight,
    unsigned short _usDay,
    char* _pcMonth,
    unsigned short _usYear
);

void showProductDetails(const struct productProps*);

static void* ampMalloc(size_t sizeToAllocate);

int main(void){
    struct productProps* newKindle = NULL;
    newKindle = (struct productProps*)ampMalloc(sizeof (struct productProps));

    setProductDetails
    (
        *(&newKindle),
        "Amazon Kindle Paperwhite",
        15999,
        7,
        6.2f, 4.3f, 0.32f,
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
        16.9,
        01,
        "Nov",
        2023
    );

    showProductDetails(&(*newKindle));
    
    printf("\n%p\n", newKindle);
    printf("%p\n", &(*newKindle));
    printf("%p\n", *(&newKindle));

    //showProductDetails(newKindle);

    free(newKindle);
    newKindle = NULL;

    return(0);
}

//function definitions
void setProductDetails
(
    struct productProps* structVariableToSetValues,
    char* _pcName,
    unsigned int _uiPrice,
    unsigned short _usDisplaySize,
    float _fLength,
    float _fWidth,
    float _fHeight,
    unsigned short _usStorage,
    unsigned short _usResolution,
    unsigned short _usFrontLights,
    char* _pcCover,
    char* _pcColor,
    iBool_t _bParentalControl,
    iBool_t _bFlushFrontDesign,
    iBool_t _bWaterproof,
    iBool_t _bWifi,
    iBool_t _bWirelessCharging,
    unsigned short _usWarranty,
    char* _pcCloudStorage,
    float _fWeight,
    unsigned short _usDay,
    char* _pcMonth,
    unsigned short _usYear
)
{
    structVariableToSetValues->pcName = _pcName;
    structVariableToSetValues->uiPrice = _uiPrice;
    structVariableToSetValues->usDisplaySize = _usDisplaySize;
    structVariableToSetValues->structDim_DimensionsOfProduct.fLength = _fLength;
    structVariableToSetValues->structDim_DimensionsOfProduct.fWidth = _fWidth;
    structVariableToSetValues->structDim_DimensionsOfProduct.fHeight = _fHeight;
    structVariableToSetValues->usStorage = _usStorage;
    structVariableToSetValues->usResolution = _usResolution;
    structVariableToSetValues->usFrontLights = _usFrontLights;
    structVariableToSetValues->pcCover = _pcCover;
    structVariableToSetValues->pcColor = _pcColor;
    structVariableToSetValues->bParentalControl = _bParentalControl;
    structVariableToSetValues->bFlushFrontDesign = _bFlushFrontDesign;
    structVariableToSetValues->bWaterproof = _bWaterproof;
    structVariableToSetValues->bWifi = _bWifi;
    structVariableToSetValues->bWirelessCharging = _bWirelessCharging;
    structVariableToSetValues->usWarranty = _usWarranty;
    structVariableToSetValues->pcCloudStorage = _pcCloudStorage;
    structVariableToSetValues->fWeight = _fWeight;
    structVariableToSetValues->structDate_GenerationDate.usDay = _usDay;
    structVariableToSetValues->structDate_GenerationDate.pcMonth = _pcMonth;
    structVariableToSetValues->structDate_GenerationDate.usYear = _usYear;
};

void showProductDetails(const struct productProps* productVariable)
{
    puts("Product Details of Kindle\n");

    printf("%s\n", productVariable->pcName);
    printf("%i\n", productVariable->uiPrice);
    printf("%hu\n", productVariable->usDisplaySize);
    printf("%0.1f x %0.1f x %0.1f\n", productVariable->structDim_DimensionsOfProduct.fLength, productVariable->structDim_DimensionsOfProduct.fWidth, productVariable->structDim_DimensionsOfProduct.fHeight);
    printf("%hu\n", productVariable->usStorage);
    printf("%hu\n", productVariable->usResolution);
    printf("%hu\n", productVariable->usFrontLights);
    printf("%s\n", productVariable->pcCover);
    printf("%s\n", productVariable->pcColor);
    printf("%s\n", bYesOrNo(&productVariable->bParentalControl));
    printf("%s\n", bYesOrNo(&productVariable->bFlushFrontDesign));
    printf("%s\n", bYesOrNo(&productVariable->bWaterproof));
    printf("%s\n", bYesOrNo(&productVariable->bWifi));
    printf("%s\n", bYesOrNo(&productVariable->bWirelessCharging));
    printf("%hu\n", productVariable->usWarranty);
    printf("%s\n", productVariable->pcCloudStorage);
    printf("%0.2f\n", productVariable->fWeight);
    printf("%hu-%s-%hu\n", productVariable->structDate_GenerationDate.usDay
                         , productVariable->structDate_GenerationDate.pcMonth
                         , productVariable->structDate_GenerationDate.usYear);
}

static void* ampMalloc(size_t sizeToAllocate)
{
    void* p = NULL;

    p = malloc(sizeToAllocate);
    if(p == NULL)
    {
        puts("ampMalloc() failed\n");
        exit(EXIT_FAILURE);
    }

    return(p);
}