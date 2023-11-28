//C++ Class for Vaccum Cleaner
#include <iostream>

const bool YES = 1;
const bool NO = 0;

class Dimensions
{
    friend class productProps;

    private:
    float fHeight;
    float fLength;
    float fWidth;

    public:
    //default constr
    Dimensions(float h, float l, float w)
    :   fHeight(h), fLength(l), fWidth(w)
    {

    }

    friend std::ostream& operator<<(const std::ostream& os, const Dimensions& resource);
};

class Date
{
    friend class productProps;

    private:
    unsigned short usDay;
    const char* pcMonth;
    unsigned short usYear;

    public:
    //default constr
    Date(unsigned short d, const char* m, unsigned short y)
    :   usDay(d), pcMonth(m), usYear(y)
    {

    }

    friend std::ostream& operator<<(const std::ostream& os, const Date& resource);
};

class productProps
{
    private:
    const char* pucName;
    unsigned int uiPrice;
    Dimensions dimensionsOfProduct;
    Date dateFirstAvailable;
    unsigned short usCapacity;
    unsigned int uiWeight;
    bool hasBattery;
    bool bIsItCordless;

    public:
    productProps()
    :   pucName("empty_name"),
        uiPrice{000},
        dimensionsOfProduct{0, 0, 0},
        dateFirstAvailable{0, "empty_month", 0},
        uiWeight{0},
        usCapacity{0},
        hasBattery{0},
        bIsItCordless{NO}
    {

    }

    void setProductDetails
    (
        const char* _pucName,
        unsigned int _uiPrice,
        Dimensions _dimensionsOfProduct,
        Date _dateFirstAvailable,
        unsigned short _usCapacity,
        unsigned int _uiWeight,
        bool _hasBattery,
        bool _bIsItCordless
    );

    void showProductDeatils();
    const char* cYesOrNo(const bool* member) const;
};

int main()
{
    productProps* newProduct = new productProps();

    newProduct->setProductDetails
    (
        "Inalsa Vacuum Cleaner",
        9958,
        {1.5, 6.8, 9.8},
        {1, "March", 1980},
        777,
        10,
        YES,
        YES
    );

    newProduct->showProductDeatils();

    return 0;
}

//function definitions
void productProps::setProductDetails
(
    const char* _pucName,
    unsigned int _uiPrice,
    Dimensions _dimensionsOfProduct,
    Date _dateFirstAvailable,
    unsigned short _usCapacity,
    unsigned int _uiWeight,
    bool _hasBattery,
    bool _bIsItCordless
)
{
    this->pucName = _pucName;
    uiPrice = _uiPrice;
    dimensionsOfProduct = _dimensionsOfProduct;
    dateFirstAvailable = _dateFirstAvailable;
    usCapacity = _usCapacity;
    uiWeight = _uiWeight;
    hasBattery = _hasBattery;
    bIsItCordless = _bIsItCordless;
}
void productProps::showProductDeatils()
{
    std::cout << this->pucName << std::endl;
    std::cout << uiPrice << std::endl;
    std::cout << dimensionsOfProduct << std::endl;
    std::cout << dateFirstAvailable << std::endl;
    std::cout << usCapacity << std::endl;
    std::cout << uiWeight << std::endl;
    std::cout << cYesOrNo(&hasBattery) << std::endl;
    std::cout << cYesOrNo(&bIsItCordless) << std::endl;

}
const char* productProps::cYesOrNo(const bool* member) const
{
    if(*member)
        return "YES";
    return "NO";
}

std::ostream& operator<<(const std::ostream& os, const Dimensions& resource)
{
    std::cout << resource.fHeight << "x" << resource.fLength << "x" << resource.fWidth;
}

std::ostream& operator<<(const std::ostream& os, const Date& resource)
{
    std::cout << resource.usDay << "-" << resource.pcMonth << "-" << resource.usYear;
}