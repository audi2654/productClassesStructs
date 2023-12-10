//C Struct for Samsung S23
//https://www.amazon.in/Samsung-Galaxy-Green-128GB-Storage/dp/B0BY8PYVS6/

#include <stdio.h>
#include <stdlib.h>

struct Dimensions
{
    float fWidth;
    float fHeight;
    float fLength;
};

struct Date
{
    unsigned short usDay;
    char* pcMonth;
    unsigned short usYear;
};

struct Resolution
{
    unsigned short usScreenWidth;
    unsigned short usScreenHeight;
};

struct productProps
{
    char* pcName;
    unsigned int uiPrice;
    char* pcOS;
    char* pcColor;
    char* pcDisplay;
    char* pcCountryOfOrigin;
    unsigned short usWeight;
    float fCustomerRatings;
    struct Dimensions structDim_dimensionsOfProduct;
    struct Date structDate_dateFirstAvailable;
    struct Resolution structResolu_displayResolution;
};

void setProductDetails
(
    struct productProps* structVariableToSetValues,
    char* _pcName,
    unsigned int _uiPrice,
    char* _pcOS,
    char* _pcColor,
    char* _pcDisplay,
    char* _pcCountryOfOrigin,
    unsigned short _usWeight,
    float _fCustomerRatings,
    struct Dimensions _structDim_dimensionsOfProduct,
    struct Date _structDate_dateFirstAvailable,
    struct Resolution _structResolu_displayResolution
);

void showProductDetails(const struct productProps* productVariable);

static void* ampMalloc(size_t sizeOfStruct);

int main(void)
{
    struct productProps* newProduct = (struct productProps*)ampMalloc(sizeof(struct productProps));

    newProduct = &(struct productProps){
                                        .pcName = "empty_name",
                                        .uiPrice = 0,
                                        .pcOS = "empty_OS",
                                        .pcColor = "empty",
                                        .pcDisplay = "empty",
                                        .pcCountryOfOrigin = "empty",
                                        .usWeight = 0,
                                        .fCustomerRatings = 0.0,
                                        .structDim_dimensionsOfProduct = {0,0,0},
                                        .structDate_dateFirstAvailable = {0, "empty_month", 0},
                                        .structResolu_displayResolution = {0,0},
                                        };

    showProductDetails(newProduct);
    
    setProductDetails
    (
        newProduct,
        "Samsung S23",
        98222,
        "Android 13.0",
        "White",
        "AMOLED",
        "India",
        198,
        4.3f,
        (struct Dimensions){1.2, 1.3, 1.4},
        (struct Date){4, "April", 2020},
        (struct Resolution){1024, 720}
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
    char* _pcOS,
    char* _pcColor,
    char* _pcDisplay,
    char* _pcCountryOfOrigin,
    unsigned short _usWeight,
    float _fCustomerRatings,
    struct Dimensions _structDim_dimensionsOfProduct,
    struct Date _structDate_dateFirstAvailable,
    struct Resolution _structResolu_displayResolution
)
{
    structVariableToSetValues->pcName = _pcName;
    structVariableToSetValues->uiPrice = _uiPrice;
    structVariableToSetValues->pcOS = _pcOS;
    structVariableToSetValues->pcColor = _pcColor;
    structVariableToSetValues->pcDisplay = _pcDisplay;
    structVariableToSetValues->pcCountryOfOrigin = _pcCountryOfOrigin;
    structVariableToSetValues->usWeight = _usWeight;
    structVariableToSetValues->fCustomerRatings = _fCustomerRatings;
    structVariableToSetValues->structDim_dimensionsOfProduct = _structDim_dimensionsOfProduct;
    structVariableToSetValues->structDate_dateFirstAvailable = _structDate_dateFirstAvailable;
    structVariableToSetValues->structResolu_displayResolution = _structResolu_displayResolution;
}

void showProductDetails(const struct productProps* productVariable)
{
    puts("Product Details for Samsung S23\n");

    printf("%s\n", productVariable->pcName);

    printf("%i\n", productVariable->uiPrice);
    printf("%s\n", productVariable->pcOS);
    printf("%s\n", productVariable->pcColor);
    printf("%s\n", productVariable->pcDisplay);
    printf("%s\n", productVariable->pcCountryOfOrigin);
    printf("%hu\n", productVariable->usWeight);
    printf("%f\n", productVariable->fCustomerRatings);
    printf("%fx%fx%f\n", productVariable->structDim_dimensionsOfProduct.fHeight, productVariable->structDim_dimensionsOfProduct.fLength, productVariable->structDim_dimensionsOfProduct.fWidth);
    printf("%hu-%s-%hu\n", productVariable->structDate_dateFirstAvailable.usDay, productVariable->structDate_dateFirstAvailable.pcMonth, productVariable->structDate_dateFirstAvailable.usYear);
    printf("%hux%hu\n", productVariable->structResolu_displayResolution.usScreenWidth, productVariable->structResolu_displayResolution.usScreenHeight);
}

static void* ampMalloc(size_t sizeOfStruct)
{
    size_t* p = NULL;
    p = (void*)malloc(sizeOfStruct);
    if(p == NULL)
    {
        puts("Memory allocation failed in ampMalloc()\n");
        exit(EXIT_FAILURE);
    }
    return p;
}
