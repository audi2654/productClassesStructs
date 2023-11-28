//C Struct for Bookshelf
#include <stdio.h>

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
    char* pcMaterial;
    unsigned short usNumberOfShelves;
    char* pcSpecialFeatures;
    struct Dimensions structDim_DimensionsOfProduct;
    char* pcStyle;
    unsigned short usNumberOfItems;
    float usItemWeight;
    char* pcColor;
    char* pcCountryOfOrigin;
    char* pcASIN;
    float fCustomerReviews;
    struct Date structDate_DateFirstAvailable;
};

//function declarations
void setProductDetails
(
    struct productProps*,
    char* pcName,
    unsigned int uiPrice,
    char* pcMaterial,
    unsigned short usNumberOfShelves,
    char* pcSpecialFeatures,
    float dimLength,
    float dimWidth,
    float dimHeight,
    char* pcStyle,
    unsigned short usNumberOfItems,
    float usItemWeight,
    char* pcColor,
    char* pcCountryOfOrigin,
    char* pcASIN,
    float fCustomerReviews,
    unsigned short _dateDay,
    char* _dateMonth,
    unsigned short _dateYear
);

void showProductDetails(const struct productProps*);

int main(){
    struct productProps newBookshelf;

    setProductDetails
    (
        &newBookshelf, 
        "Stylish Wooden Book Shelf",
        5999,
        "Wooden",
        6,
        "Tree shaped",
        5.0f,
        6.5f,
        2.0f,
        "Modern",
        1,
        15.96,
        "White",
        "India",
        "B0BPS536WC",
        3.9,
        12,
        "Dec",
        2002
    );

    showProductDetails(&newBookshelf);

    return(0);
}

//function definitions
void setProductDetails
(
    struct productProps* structVariableToSetValues,
    char* _pcName,
    unsigned int _uiPrice,
    char* _pcMaterial,
    unsigned short _usNumberOfShelves,
    char* _pcSpecialFeatures,
    float _dimLength,
    float _dimWidth,
    float _dimHeight,
    char* _pcStyle,
    unsigned short _usNumberOfItems,
    float _usItemWeight,
    char* _pcColor,
    char* _pcCountryOfOrigin,
    char* _pcASIN,
    float _fCustomerReviews,
    unsigned short _dateDay,
    char* _dateMonth,
    unsigned short _dateYear
)
{
    structVariableToSetValues->pcName = _pcName;
    structVariableToSetValues->uiPrice = _uiPrice;
    structVariableToSetValues->pcMaterial = _pcMaterial;
    structVariableToSetValues->usNumberOfShelves = _usNumberOfShelves;
    structVariableToSetValues->pcSpecialFeatures = _pcSpecialFeatures;
    structVariableToSetValues->structDim_DimensionsOfProduct.fLength = _dimLength;
    structVariableToSetValues->structDim_DimensionsOfProduct.fWidth = _dimWidth;
    structVariableToSetValues->structDim_DimensionsOfProduct.fHeight = _dimHeight;
    structVariableToSetValues->pcStyle = _pcStyle;
    structVariableToSetValues->usNumberOfItems = _usNumberOfItems;
    structVariableToSetValues->usItemWeight = _usItemWeight;
    structVariableToSetValues->pcColor = _pcColor;
    structVariableToSetValues->pcCountryOfOrigin = _pcCountryOfOrigin;
    structVariableToSetValues->pcASIN = _pcASIN;
    structVariableToSetValues->fCustomerReviews = _fCustomerReviews;
    structVariableToSetValues->structDate_DateFirstAvailable.usDay = _dateDay;
    structVariableToSetValues->structDate_DateFirstAvailable.pcMonth = _dateMonth;
    structVariableToSetValues->structDate_DateFirstAvailable.usYear = _dateYear;
}

void showProductDetails(const struct productProps* productVariable)
{
    puts("Product Details of Bookshelf\n");

    printf("%s\n", productVariable->pcName);
    printf("%i\n", productVariable->uiPrice);
    printf("%s\n", productVariable->pcMaterial);
    printf("%hu\n", productVariable->usNumberOfShelves);
    printf("%s\n", productVariable->pcSpecialFeatures);
    printf("%0.1fx%0.1fx%0.1f\n", productVariable->structDim_DimensionsOfProduct.fHeight, productVariable->structDim_DimensionsOfProduct.fLength, productVariable->structDim_DimensionsOfProduct.fWidth);
    printf("%s\n", productVariable->pcStyle);
    printf("%hu\n", productVariable->usNumberOfItems);
    printf("%0.3f\n", productVariable->usItemWeight);
    printf("%s\n", productVariable->pcColor);
    printf("%s\n", productVariable->pcCountryOfOrigin);
    printf("%s\n", productVariable->pcASIN);
    printf("%0.2f\n", productVariable->fCustomerReviews);
    printf("%hu-%s-%hu\n", productVariable->structDate_DateFirstAvailable.usDay, productVariable->structDate_DateFirstAvailable.pcMonth, productVariable->structDate_DateFirstAvailable.usYear);
}
