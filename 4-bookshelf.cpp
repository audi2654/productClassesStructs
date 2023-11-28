//C++ Class for Bookshelf
#include <iostream>

class Dimensions{
    friend class productProps;

    private:
    float fLength;
    float fWidth;
    float fHeight;

    public:
    //paramterised constructor
    Dimensions(float l = 0.5f, float w = 0.5, float h = 0.5f)
    :   fLength(l), fWidth(w), fHeight(h)
    {

    }
};

class Date{
    friend class productProps;

    private:
    unsigned short usDay{56};
    const char* pcMonth;
    unsigned short usYear;

    public:
    //parameterised constr.
    Date(unsigned short d = 1, const char* m = {"April"}, unsigned short y = (970))
    :   usDay{d}, pcMonth{m}, usYear{y}
    {

    }
};

class productProps{
    private:
    const char* pcName;
    unsigned int uiPrice;
    const char* pcMaterial;
    unsigned short usNumberOfShelves;
    const char* pcSpecialFeatures;
    Dimensions dimensionsOfProduct;
    const char* pcStyle;
    unsigned short usNumberOfItems;
    float usItemWeight;
    const char* pcColor;
    const char* pcCountryOfOrigin;
    const char* pcASIN;
    float fCustomerReviews;
    Date dateFirstAvailable;
    
    public:
    //default constructor
    productProps()
    :   pcName{"empty_name"},
        uiPrice{5},
        pcMaterial{"empty_material"},
        usNumberOfShelves{0},
        pcSpecialFeatures{"empty_special_features"},
        dimensionsOfProduct{0.0, 0.0, 0},
        pcStyle{"empty_style"},
        usNumberOfItems{0},
        usItemWeight{0},
        pcColor("empty_color"),
        pcCountryOfOrigin("empty_country"),
        pcASIN("empty_ASIN"),
        fCustomerReviews(0),
        dateFirstAvailable(0, "empty_month", 0)
    {

    }

    //member function decl.
    void setProductDetails
    (
        const char* _pcName,
        unsigned int _uiPrice,
        const char* _pcMaterial,
        unsigned short _usNumberOfShelves,
        const char* _pcSpecialFeatures,
        Dimensions _dimensionsOfProduct,
        const char* _pcStyle,
        unsigned short _usNumberOfItems,
        float _usItemWeight,
        const char* _pcColor,
        const char* _pcCountryOfOrigin,
        const char* _pcASIN,
        float _fCustomerReviews,
        Date _dateFirstAvailable
    );
    void showProductDetails();
};

int main(void){
    productProps *newBookshelf = new productProps();

    newBookshelf->setProductDetails
    (
        "Stylish Wooden Book Shelf",
        5999,
        "Wooden",
        6,
        "Tree shaped",
        {5.0f, 6.5f, 2.0f},
        "Modern",
        1,
        15.96,
        "White",
        "India",
        "B0BPS536WC",
        3.9,
        {12,"Dec", 2002}
    );

    newBookshelf->showProductDetails();

    return 0;
}

//function definitions
void productProps::setProductDetails
(
    const char* _pcName,
    unsigned int _uiPrice,
    const char* _pcMaterial,
    unsigned short _usNumberOfShelves,
    const char* _pcSpecialFeatures,
    Dimensions _dimensionsOfProduct,
    const char* _pcStyle,
    unsigned short _usNumberOfItems,
    float _usItemWeight,
    const char* _pcColor,
    const char* _pcCountryOfOrigin,
    const char* _pcASIN,
    float _fCustomerReviews,
    Date _dateFirstAvailable
)
{
    this->pcName = _pcName;
    this->uiPrice = _uiPrice;
    this->pcMaterial = _pcMaterial;
    this->usNumberOfShelves = _usNumberOfShelves;
    pcSpecialFeatures = _pcSpecialFeatures;
    dimensionsOfProduct = _dimensionsOfProduct;
    pcStyle = _pcStyle;
    usNumberOfItems = _usNumberOfItems;
    usItemWeight = _usItemWeight;
    pcColor = _pcColor;
    pcCountryOfOrigin = _pcCountryOfOrigin;
    pcASIN = _pcASIN;
    fCustomerReviews = _fCustomerReviews;
    dateFirstAvailable = _dateFirstAvailable;
}

void productProps::showProductDetails()
{
    std::cout << ("Product Details of Bookshelf\n") << std::endl;

    std::cout << pcName << std::endl;
    std::cout << uiPrice << std::endl;
    std::cout << pcMaterial << std::endl;
    std::cout << usNumberOfShelves << std::endl;
    std::cout << pcSpecialFeatures << std::endl;
    std::cout << dimensionsOfProduct.fLength << "x" << dimensionsOfProduct.fWidth << "x" << dimensionsOfProduct.fHeight << std::endl;
    std::cout << pcStyle << std::endl;
    std::cout << usNumberOfItems << std::endl;
    std::cout << usItemWeight << std::endl;
    std::cout << pcColor << std::endl;
    std::cout << pcCountryOfOrigin << std::endl;
    std::cout << pcASIN << std::endl;
    std::cout << fCustomerReviews << std::endl;
    std::cout << dateFirstAvailable.usDay << "-" << dateFirstAvailable.pcMonth << "-" << dateFirstAvailable.usYear << std::endl;
}
