//C++ Class for Mother Dairy Lassi
//Notice all constructurs here especially of class Date
#include <iostream>

class Dimensions{
    friend class productProps;

    private:
    float fLength{0.3f};
    float fWidth;
    float fHeight;

    public:
    //parameterised constr
    Dimensions(float l, float w = 02.5f, float h = 02.5f)
    : fLength(l), fWidth(w), fHeight(h)
    {

    }
};

class Date{
    friend class productProps;

    private:
    unsigned short usDay{9};
    const char* pcMonth;
    unsigned short usYear{1111};

    public:
    //parameterised constr
    Date(unsigned short d, const char* m = {"Feb"}, unsigned short y = 0000)
    :   usDay{d}, pcMonth(m), usYear{y}
    //:   usDay{0}, pcMonth("empty_month"), usYear{00000}

    {

    }
};

class productProps{
    private:
    const char* pcName;
    unsigned int uiPrice;
    const char* pcSpeciality;
    unsigned int uiWeight;
    unsigned int uiVolume;
    Dimensions dimensionsOfProduct;
    Date dateFirstAvailable;
    const char* pcIngredientType;
    unsigned short usQuantity;
    const char* pcManufacturer;
    const char* pcForm;
    const char* pcCountryOfOrigin;
    const char* pcASIN;
    float fCustomerReviews;

    public:
    //default constr
    productProps()
    :   pcName{"empty_name"},
        uiPrice{0},
        pcSpeciality{"empty"},
        uiWeight{0},
        uiVolume{0},
        dimensionsOfProduct{0.4f, 0, 0},
        dateFirstAvailable{1, "empty", 0},
        pcIngredientType{"empty"},
        usQuantity{0},
        pcManufacturer{"empty"},
        pcForm{"empty"},
        pcCountryOfOrigin{"empty"},
        pcASIN{"empty"},
        fCustomerReviews{0.0f}
    {

    }

    //class function declarations
    void setProductDetails
    (
        const char* _pcName,
        unsigned int _uiPrice,
        const char* _pcSpeciality,
        unsigned int _uiWeight,
        unsigned int _uiVolume,
        Dimensions _dimensionsOfProduct,
        Date _dateFirstAvailable,
        const char* _pcIngredientType,
        unsigned short _usQuantity,
        const char* _pcManufacturer,
        const char* _pcForm,
        const char* _pcCountryOfOrigin,
        const char* _pcASIN,
        float _fCustomerReviews
    );

    void showProductDetails();
};

int main(void){
    productProps *newLassi = new productProps;

    newLassi->setProductDetails
    (
        "Mother Dairy Mango Lassi",
        20,
        "Vegetarian",
        18,
        200,
        {1.2f, 1.5f, 1.8f},
        {8, "April", 2022},
        "Milk",
        1,
        "Mother Dairy",
        "Liquid Perishable",
        "India",
        "ASNCG0D",
        4.6
    );

    newLassi->showProductDetails();

    delete newLassi;

    newLassi = nullptr;
    
    return 0;
}

//function definitions
void productProps::setProductDetails
(
    const char* _pcName,
    unsigned int _uiPrice,
    const char* _pcSpeciality,
    unsigned int _uiWeight,
    unsigned int _uiVolume,
    Dimensions _dimensionsOfProduct,
    Date _dateFirstAvailable,
    const char* _pcIngredientType,
    unsigned short _usQuantity,
    const char* _pcManufacturer,
    const char* _pcForm,
    const char* _pcCountryOfOrigin,
    const char* _pcASIN,
    float _fCustomerReviews
)
{
    this->pcName = _pcName;
    uiPrice = _uiPrice;
    pcSpeciality = _pcSpeciality;
    uiWeight = _uiWeight;
    uiVolume = _uiVolume;
    dimensionsOfProduct = _dimensionsOfProduct;
    dateFirstAvailable = _dateFirstAvailable;
    pcIngredientType = _pcIngredientType;
    usQuantity = _usQuantity;
    pcManufacturer = _pcManufacturer;
    pcForm = _pcForm;
    pcCountryOfOrigin = _pcCountryOfOrigin;
    pcASIN = _pcASIN;
    fCustomerReviews = _fCustomerReviews;
}

void productProps::showProductDetails()
{
    std::cout << "Product Details for Lassi" << std::endl;

    std::cout << pcName << std::endl;
    std::cout << uiPrice << std::endl;
    std::cout << pcSpeciality << std::endl;
    std::cout << uiWeight << std::endl;
    std::cout << uiVolume << std::endl;
    std::cout << dimensionsOfProduct.fLength << "x" << dimensionsOfProduct.fHeight << "x" << dimensionsOfProduct.fWidth << std::endl;
    std::cout << dateFirstAvailable.usDay << "-" << dateFirstAvailable.pcMonth << "-" << dateFirstAvailable.usYear << std::endl;
    std::cout << pcIngredientType << std::endl;
    std::cout << usQuantity << std::endl;
    std::cout << pcManufacturer << std::endl;
    std::cout << pcForm << std::endl;
    std::cout << pcCountryOfOrigin << std::endl;
    std::cout << pcASIN << std::endl;
    std::cout << fCustomerReviews << std::endl;
}
