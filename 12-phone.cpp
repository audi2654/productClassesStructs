//C++ Class for Samsung S23
#include <iostream>

class Dimensions{
    friend class productProps;

    float fHeight;
    float fWidth;
    float fLength;

    public:
    Dimensions(float _h, float _w, float _l)
    :   fHeight(_h), fWidth(_w), fLength(_l)
    {

    }

    friend std::ostream& operator<<(const std::ostream& os, const Dimensions& resource){
        std::cout << resource.fLength << "x" << resource.fWidth << "x" << resource.fLength;
    }
};

class productProps{
    private:
    const char* pcName;
    unsigned int uiPrice;
    const char* pcOS;
    const char* pcColor;
    const char* pcDisplay;
    const char* pcCountryOfOrigin;
    unsigned short usWeight;
    float fCustomerRatings;

    class Resolution{
        private:
            unsigned short usScreenWidth;
            unsigned short usScreenHeight;

        public:
            Resolution(unsigned short _w, unsigned short _h)
            :   usScreenWidth(_w), usScreenHeight(_h)
            {

            }

            friend std::ostream& operator<<(const std::ostream& os, const Resolution& resource){
                std::cout << resource.usScreenWidth << "x" << resource.usScreenHeight;
            }
    } displayResolution;

    public:
    Dimensions dimensionsOfProduct;
    class Date{
        private:
        unsigned short usDay;
        const char* pcMonth;
        unsigned short usYear;

        public:
        Date(unsigned short _d, const char* _m, unsigned short _y)
        :   usDay(_d), pcMonth(_m), usYear(_y)
        {
            
        }

        friend std::ostream& operator<<(const std::ostream& os, const Date& resource);
    } dateFirstAvailable;

    productProps()
    :   pcName{"empty_name"},
        uiPrice{0},
        pcOS{"empty_OS"},
        pcColor{"empty"},
        pcDisplay{"empty"},
        pcCountryOfOrigin{"empty"},
        usWeight{0},
        fCustomerRatings{0.0},
        dimensionsOfProduct{0,0,0},
        dateFirstAvailable{0, "empty_month", 0},
        displayResolution{0,0}
    {

    }

    void setProductDetails
    (
        const char* _pcName,
        unsigned int _uiPrice,
        const char* _pcOS,
        const char* _pcColor,
        const char* _pcDisplay,
        const char* _pcCountryOfOrigin,
        unsigned short _usWeight,
        float _fCustomerRatings,
        Dimensions _dimensionsOfProduct,
        Date _dateFirstAvailable,
        Resolution _displayResolution
    );

    void showProductDetails();
};

int main(void){
    productProps* newProduct = new productProps;

    newProduct->showProductDetails();

    newProduct->setProductDetails
    (
        "Samsung S23",
        98222,
        "Android 13.0",
        "White",
        "AMOLED",
        "India",
        198,
        4.3f,
        {1.2, 1.3, 1.4},
        {4, "April", 2020},
        {1024, 720}
    );

    newProduct->showProductDetails();

    return 0;
}

//function definitions
void productProps::setProductDetails
(
    const char* _pcName,
    unsigned int _uiPrice,
    const char* _pcOS,
    const char* _pcColor,
    const char* _pcDisplay,
    const char* _pcCountryOfOrigin,
    unsigned short _usWeight,
    float _fCustomerRatings,
    Dimensions _dimensionsOfProduct,
    Date _dateFirstAvailable,
    Resolution _displayResolution
)
{
    this->pcName = _pcName;
    uiPrice = _uiPrice;
    pcOS = _pcOS;
    pcColor = _pcColor;
    pcDisplay = _pcDisplay;
    pcCountryOfOrigin = _pcCountryOfOrigin;
    usWeight = _usWeight;
    fCustomerRatings = _fCustomerRatings;
    dimensionsOfProduct = _dimensionsOfProduct;
    dateFirstAvailable = _dateFirstAvailable;
    displayResolution = _displayResolution;
}

void productProps::showProductDetails()
{
    std::cout << "Product Details for Samsung S23" << std::endl;

    std::cout << pcName << std::endl;
    std::cout << uiPrice << std::endl;
    std::cout << pcOS << std::endl;
    std::cout << pcColor << std::endl;
    std::cout << pcDisplay << std::endl;
    std::cout << pcCountryOfOrigin << std::endl;
    std::cout << usWeight << std::endl;
    std::cout << fCustomerRatings << std::endl;
    std::cout << dimensionsOfProduct << std::endl;
    std::cout << dateFirstAvailable << std::endl;
    std::cout << displayResolution << std::endl << std::endl;
}

std::ostream& operator<<(const std::ostream& os, const productProps::Date& resource)
{
    std::cout << resource.usDay << "-" << resource.pcMonth << "-" << resource.usYear;
}
