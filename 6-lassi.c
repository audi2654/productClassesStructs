//C Struct for Mother Dairy Lassi
//Observe multiple ways of initializing a struct & struct pointer variable here
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define YES      1
#define NO       0

typedef int iBool_t;

struct Dimensions
{
    float fLength;
    float fWidth;
    float fHeight;
} structDim_defDimensionsOfProduct = {0.0f, 0.0f, 0.0f};

struct Date
{
    unsigned short usDay;
    char* pcMonth;
    unsigned short usYear;
};

struct Date structDate_defDateFirstAvailable = { .usDay = 0, "empty_month", 0};

struct productProps
{
    char* pcName;
    unsigned int uiPrice;
    char* pcSpeciality;
    unsigned int uiWeight;
    unsigned int uiVolume;
    struct Dimensions structDim_DimensionsOfProduct;
    struct Date structDate_DateFirstAvailable;
    char* pcIngredientType;
    unsigned short usQuantity;
    char* pcManufacturer;
    char* pcForm;
    char* pcCountryOfOrigin;
    char* pcASIN;
    float fCustomerReviews;
    _Bool bIsDairyProduct;          //C99
    bool bIsVegan;                  //stdbool.h alias to _Bool
    iBool_t bIsPerishable;          //typedef int
};

//function declarations
void setProductDetails
(
    struct productProps* structVariableToSetValues,
    char* _pcName,
    unsigned int _uiPrice,
    char* _pcSpeciality,
    unsigned int _uiWeight,
    unsigned int _uiVolume,
    float _fLength,
    float _fWidth,
    float _fHeight,
    unsigned short _usDay,
    char* _pcMonth,
    unsigned short _usYear,
    /*struct Date _structDate_DateFirstAvailable,*/
    char* _pcIngredientType,
    unsigned short _usQuantity,
    char* _pcManufacturer,
    char* _pcForm,
    char* _pcCountryOfOrigin,
    char* _pcASIN,
    float _fCustomerReviews,
    _Bool _bIsDairyProduct,
    bool _bIsVegan,
    iBool_t _bIsPerishable
);

void showProductDetails(const struct productProps*);

static void* ampMalloc(size_t sizeOfStruct);

char* cc_cYesOrNo(const _Bool* member);

char* c_cYesOrNo(const bool* member);

char* cYesOrNo(const iBool_t* member);

int main()
{
    struct productProps* newLassi = NULL;
    newLassi = (struct productProps*)ampMalloc(sizeof(struct productProps));

    //initializing stack variable
    struct productProps newLassi2 = {.pcName = "empty_name",
                                     .uiPrice = 0,
                                     .pcSpeciality = "empty_speciality",
                                     .uiWeight = 0,
                                     .uiVolume = 0,
                                     .structDim_DimensionsOfProduct = structDim_defDimensionsOfProduct,
                                     .structDate_DateFirstAvailable = (0, "empty_month", 0), /*Output : 0-(null)-0 */
                                     /*.structDate_DateFirstAvailable = {0, "empty_month", 0}, Output : 0-empty_month-0 */ 
                                     .pcIngredientType = "Vegetarian",
                                     .usQuantity = 0,
                                     .pcForm = "empty_form",
                                     .pcCountryOfOrigin = "empty_COO",
                                     .pcASIN = "empty",
                                     .fCustomerReviews = 0.0f,
                                     .bIsVegan = 0,
                                     .bIsDairyProduct = false,
                                     .bIsPerishable = NO
                                    };

    puts("Lassi 2 starts\n");
    showProductDetails(&newLassi2);
    puts("Lassi 2 ends\n");

    //assigning stack var address to heap var pointer
    newLassi = &newLassi2;

    //initializing stack var & immediately assigning its address to heap var pointer 
    newLassi = &(struct productProps){.pcName = "empty_name",
                                     .uiPrice = 0,
                                     .pcSpeciality = "empty_speciality",
                                     .uiWeight = 0,
                                     .uiVolume = 0,
                                     .structDim_DimensionsOfProduct = structDim_defDimensionsOfProduct,
                                     .structDate_DateFirstAvailable = (0, "empty_month", 0),
                                     .pcIngredientType = "Vegetarian",
                                     .usQuantity = 0,
                                     .pcForm = "empty_form",
                                     .pcCountryOfOrigin = "empty_COO",
                                     .pcASIN = "empty",
                                     .fCustomerReviews = 0.0f,
                                     .bIsVegan = 0,
                                     .bIsDairyProduct = false,
                                     .bIsPerishable = NO
                                    };

    //directly initializing struct members on heap var pointer address with values
    *newLassi = (struct productProps){.pcName = "empty_name",
                                     .uiPrice = 0,
                                     .pcSpeciality = "empty_speciality",
                                     .uiWeight = 0,
                                     .uiVolume = 0,
                                     .structDim_DimensionsOfProduct = structDim_defDimensionsOfProduct,
                                     .structDate_DateFirstAvailable = (0, "empty_month", 0),
                                     .pcIngredientType = ("Vegetarian"),
                                     .usQuantity = 0,
                                     .pcForm = "empty_form",
                                     .pcCountryOfOrigin = "empty_COO",
                                     .pcASIN = "empty",
                                     .fCustomerReviews = 0.0f,
                                     .bIsVegan = 0,
                                     .bIsDairyProduct = false,
                                     .bIsPerishable = NO
                                    };
    
    showProductDetails(newLassi);

    setProductDetails
    (   
        *(&newLassi),
        "Mother Dairy Mango Lassi",
        20,
        "Vegetarian",
        18,
        200,
        1.2f, 1.5f, 1.8f,
        8, "April", 2022,
        /*(struct Date){1, "March", 1980},*/
        "Milk",
        1,
        "Mother Dairy",
        "Liquid Perishable",
        "India",
        "ASNCG0D",
        4.6,
        0,
        true,
        YES
    );

    showProductDetails(newLassi);

    return(0);
}

//function definitions
void setProductDetails
(
    struct productProps* structVariableToSetValues,
    char* _pcName,
    unsigned int _uiPrice,
    char* _pcSpeciality,
    unsigned int _uiWeight,
    unsigned int _uiVolume,
    float _fLength,
    float _fWidth,
    float _fHeight,
    unsigned short _usDay,
    char* _pcMonth,
    unsigned short _usYear,
    /*struct Date _structDate_DateFirstAvailable,*/
    char* _pcIngredientType,
    unsigned short _usQuantity,
    char* _pcManufacturer,
    char* _pcForm,
    char* _pcCountryOfOrigin,
    char* _pcASIN,
    float _fCustomerReviews,
    _Bool _bIsDairyProduct,
    bool _bIsVegan,
    iBool_t _bIsPerishable
)
{
    structVariableToSetValues->pcName = _pcName;
    structVariableToSetValues->uiPrice = _uiPrice;
    structVariableToSetValues->pcSpeciality = _pcSpeciality;
    structVariableToSetValues->uiWeight = _uiWeight;
    structVariableToSetValues->uiVolume = _uiVolume;
    structVariableToSetValues->structDim_DimensionsOfProduct = (struct Dimensions){_fLength, _fWidth, _fHeight};
    structVariableToSetValues->structDim_DimensionsOfProduct.fLength = _fLength;
    structVariableToSetValues->structDim_DimensionsOfProduct.fWidth = _fWidth;
    structVariableToSetValues->structDim_DimensionsOfProduct.fHeight = _fHeight;

    //structVariableToSetValues->structDate_DateFirstAvailable = (struct Date){_structDate_DateFirstAvailable.usDay, _structDate_DateFirstAvailable.pcMonth, _structDate_DateFirstAvailable.usYear};
    structVariableToSetValues->structDate_DateFirstAvailable.usDay = _usDay;
    structVariableToSetValues->structDate_DateFirstAvailable.pcMonth = _pcMonth;
    structVariableToSetValues->structDate_DateFirstAvailable.usYear = _usYear;
    structVariableToSetValues->pcIngredientType = _pcIngredientType;
    structVariableToSetValues->usQuantity = _usQuantity;
    structVariableToSetValues->pcManufacturer = _pcManufacturer;
    structVariableToSetValues->pcForm = _pcForm;
    structVariableToSetValues->pcCountryOfOrigin = _pcCountryOfOrigin;
    structVariableToSetValues->pcASIN = _pcASIN;
    structVariableToSetValues->fCustomerReviews = _fCustomerReviews;
    structVariableToSetValues->bIsDairyProduct = _bIsDairyProduct;
    structVariableToSetValues->bIsVegan = _bIsVegan;
    structVariableToSetValues->bIsPerishable = _bIsPerishable;
}

void showProductDetails(const struct productProps* productVariable)
{
    puts("Product Details of Lassi\n");

    printf("%s\n", productVariable->pcName);
    printf("%i\n", productVariable->uiPrice);
    printf("%s\n", productVariable->pcSpeciality);
    printf("%i\n", productVariable->uiWeight);
    printf("%i\n", productVariable->uiVolume);
    printf("%0.1f x %0.1f x %0.1f\n", productVariable->structDim_DimensionsOfProduct.fHeight, productVariable->structDim_DimensionsOfProduct.fLength, productVariable->structDim_DimensionsOfProduct.fWidth);
    printf("%hu-%s-%hu\n", productVariable->structDate_DateFirstAvailable.usDay, productVariable->structDate_DateFirstAvailable.pcMonth, productVariable->structDate_DateFirstAvailable.usYear);
    printf("%s\n", productVariable->pcIngredientType);
    printf("%hu\n", productVariable->usQuantity);
    printf("%s\n", productVariable->pcManufacturer);
    printf("%s\n", productVariable->pcForm);
    printf("%s\n", productVariable->pcCountryOfOrigin);
    printf("%s\n", productVariable->pcASIN);
    printf("%0.1f\n", productVariable->fCustomerReviews);
    printf("%s\n",cc_cYesOrNo(&productVariable->bIsDairyProduct));
    printf("%s\n",c_cYesOrNo(&productVariable->bIsVegan));
    printf("%s\n",cYesOrNo(&productVariable->bIsPerishable));
}

static void* ampMalloc(size_t sizeOfStruct)
{
    void* p = NULL;

    p = malloc(sizeOfStruct);
    if(p == NULL)
    {
        puts("ampMalloc failed\n");
        exit(EXIT_FAILURE);
    }

    printf("p is returned even without return statement for p\n\n");
}

char* cc_cYesOrNo(const _Bool* member)
{
    if(*member)
        return "1";
    return "0";
}

char* c_cYesOrNo(const bool* member)
{
    if(*member)
        return "true";
    return "false";
}

char* cYesOrNo(const iBool_t* member)
{
    if(*member)
        return "YES";
    return "NO";
}