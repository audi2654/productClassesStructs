//C Struct for Camera Gimble
#include <stdio.h>
#include <stdlib.h>

#define YES     1
#define NO      0

typedef int iBool_t;

struct Dimensions
{
    float fLength;
    float fWidth;
    float fHeight;
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
    struct Dimensions structDim_dimensionsOfProduct;
    struct Date structDate_dateFirstAvailable;
    char* pcManufacturer;
    char* pcCompatibleDevices;
    unsigned short uiNumberOfItems;
    iBool_t bBatteriesIncluded;
    iBool_t bBatteriesRequired;
    iBool_t bTimer;
    unsigned int uiItemWeight;
    float fCustomerRatings;
};

//function decl.
void setProductDetails
(
    struct productProps* structVariableToSetValues,
    char* _pcName,
    unsigned int _uiPrice,
    float _fLength,
    float _fWidth,
    float _fHeight,
    unsigned short _usDay,
    char* _pcMonth,
    unsigned short _usYear,
    char* _pcManufacturer,
    char* _pcCompatibleDevices,
    unsigned short _uiNumberOfItems,
    iBool_t _bBatteriesIncluded,
    iBool_t _bBatteriesRequired,
    iBool_t _bTimer,
    unsigned int _uiItemWeight,
    float _fCustomerRatings
);

void showProductDetails(const struct productProps*);

char* cYesOrNo(iBool_t member);

static void* ampMalloc(size_t sizeOfStruct);

int main(void)
{
    struct productProps* newGimble = NULL;
    newGimble = (struct productProps*)ampMalloc(sizeof(struct productProps));

    newGimble = &(struct productProps){ .pcName = "empty_name",
                                        .uiPrice = 0,
                                        .structDim_dimensionsOfProduct = {0,0,0},
                                        .structDate_dateFirstAvailable = {0, "empty_month", 0},
                                        .pcManufacturer = "empty",
                                        .pcCompatibleDevices = "empty",
                                        .uiNumberOfItems = 0,
                                        .bBatteriesIncluded = NO,
                                        .bBatteriesRequired = NO,
                                        .bTimer = 0,
                                        .uiItemWeight = 0,
                                        .fCustomerRatings = 0
                                      };

    setProductDetails
    (
        newGimble,
        "DJI Camera Gimble",
        9998,
        0.2, 8.5, 9.98,
        02, "March", 2022,
        "DJI",
        "Cellphones",
        1,
        YES,
        NO,
        YES,
        500,
        4.3
    );

    showProductDetails(newGimble);

    return(0);
}

//function definitions
void setProductDetails
(
    struct productProps* structVariableToSetValues,
    char* _pcName,
    unsigned int _uiPrice,
    float _fLength,
    float _fWidth,
    float _fHeight,
    unsigned short _usDay,
    char* _pcMonth,
    unsigned short _usYear,
    char* _pcManufacturer,
    char* _pcCompatibleDevices,
    unsigned short _uiNumberOfItems,
    iBool_t _bBatteriesIncluded,
    iBool_t _bBatteriesRequired,
    iBool_t _bTimer,
    unsigned int _uiItemWeight,
    float _fCustomerRatings    
)
{
    structVariableToSetValues->pcName = _pcName;
    structVariableToSetValues->uiPrice = _uiPrice;
    structVariableToSetValues->structDim_dimensionsOfProduct.fHeight = _fHeight;
    structVariableToSetValues->structDim_dimensionsOfProduct.fLength = _fLength;
    structVariableToSetValues->structDim_dimensionsOfProduct.fWidth = _fWidth;
    structVariableToSetValues->structDate_dateFirstAvailable.usDay = _usDay;
    structVariableToSetValues->structDate_dateFirstAvailable.pcMonth = _pcMonth;
    structVariableToSetValues->structDate_dateFirstAvailable.usYear = _usYear;
    structVariableToSetValues->pcManufacturer = _pcManufacturer;
    structVariableToSetValues->pcCompatibleDevices = _pcCompatibleDevices;
    structVariableToSetValues->uiNumberOfItems = _uiNumberOfItems;
    structVariableToSetValues->bBatteriesIncluded = _bBatteriesIncluded;
    structVariableToSetValues->bBatteriesRequired = _bBatteriesRequired;
    structVariableToSetValues->bTimer = _bTimer;
    structVariableToSetValues->uiItemWeight = _uiItemWeight;
    structVariableToSetValues->fCustomerRatings = _fCustomerRatings;
}

void showProductDetails(const struct productProps* productVariable)
{
    puts("Product Details of Camera Gimble\n");

    printf("%s\n", productVariable->pcName);
    printf("%i\n", productVariable->uiPrice);
    printf("%0.1fx%0.2fx%0.3f\n", productVariable->structDim_dimensionsOfProduct.fHeight, productVariable->structDim_dimensionsOfProduct.fLength, productVariable->structDim_dimensionsOfProduct.fWidth);
    printf("%d-%s-%d\n", productVariable->structDate_dateFirstAvailable.usDay, productVariable->structDate_dateFirstAvailable.pcMonth, productVariable->structDate_dateFirstAvailable.usYear);
    printf("%s\n", productVariable->pcManufacturer);
    printf("%s\n", productVariable->pcCompatibleDevices);
    printf("%i\n", productVariable->uiNumberOfItems);
    printf("%s\n", cYesOrNo(productVariable->bBatteriesIncluded));
    printf("%s\n", cYesOrNo(productVariable->bBatteriesRequired));
    printf("%s\n", cYesOrNo(productVariable->bTimer));
    printf("%i\n", productVariable->uiItemWeight);
    printf("%f\n", productVariable->fCustomerRatings);
};

char* cYesOrNo(iBool_t member)
{
    if(member = YES)
        return "YES";
    return "NO";
}

static void* ampMalloc(size_t sizeOfStruct)
{
    int* p = NULL;
    p = (void*)malloc(sizeOfStruct);
    if(p == NULL)
    {
        printf("Memory Allocation failed inside ampMalloc()\n");
        exit(EXIT_FAILURE);
    }
}
