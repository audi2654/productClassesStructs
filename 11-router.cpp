//C++ Class for TP Link Router
#include <iostream>

const bool YES = true;
const bool NO = false;

class productProps{
    private:
    const char* pcName;
	unsigned int uiPrice;
	const char* pcSeries;
	const char* pcColour;
	const char* pcHardwarePlatform;
	double dWireLessType;
	unsigned short usVoltage;
	unsigned int uiWeight;
	float fCustomerReviews;
	bool bBatteriesIncluded;

    class Date{
        private:
        unsigned short usDay;
        const char* pcMonth;
        unsigned short usYear;

        public:
        Date(unsigned short _d = 0, const char* _m = "empty_month", unsigned int _y = 0)
        :   usDay(_d), pcMonth(_m), usYear(_y)
        {

        }

        friend std::ostream& operator<<(std::ostream& os, Date& resource);
        
    } dateFirstAvailable;

    public:
    friend std::ostream& operator<<(std::ostream& os, productProps::Date& resource);

    class Dimensions{
        private:
        float fHeight;
        float fLength;
        float fWidth;

        public:
        Dimensions(float _h, float _l, float _w)
        :   fHeight(_h), fLength(_l), fWidth(_w)
        {

        }

        friend std::ostream& operator<<(std::ostream& os, const Dimensions& resource);
    };

    Dimensions dimensionsOfProduct;

    productProps()
    :   pcName{"empty_name"},
        uiPrice{0},
        dimensionsOfProduct{0,0,0},
        dateFirstAvailable{0, "empty_month", 0},
        pcSeries{"empty"},
        pcColour{"empty"},
        pcHardwarePlatform{"empty"},
        dWireLessType{0.000},
        usVoltage{0},
        uiWeight{0},
        fCustomerReviews{0.0},
        bBatteriesIncluded{YES}
        {

        }

    void setProductDetails
    (
        const char* _pcName,
        unsigned int _uiPrice,
        Dimensions _dimensionsOfProduct,
        Date _dateFirstAvailable,
        const char* _pcSeries,
        const char* _pcColour,
        const char* _pcHardwarePlatform,
        double _dWireLessType,
        unsigned short _usVoltage,
        unsigned int _uiWeight,
        float _fCustomerReviews,
        bool _bBatteriesIncluded
    );

    void showProductDetails();

    const char* cYesOrNo(const bool& member);
};

int main(void){
    productProps* newProduct = new productProps();

    newProduct->showProductDetails();

    newProduct->setProductDetails
    (
		"TP Link",
		9999,
		{1.2, 1.3, 1.4},
		{12, "Dec", 2012},
		"ASNI504",
		"White",
		"Windows",
		1.2453,
		200,
		193,
		3.2,
		NO
    );

    newProduct->showProductDetails();

    return 0;
}

//function definitions
void productProps::setProductDetails
(
    const char* _pcName,
    unsigned int _uiPrice,
    Dimensions _dimensionsOfProduct,
    Date _dateFirstAvailable,
    const char* _pcSeries,
    const char* _pcColour,
    const char* _pcHardwarePlatform,
    double _dWireLessType,
    unsigned short _usVoltage,
    unsigned int _uiWeight,
    float _fCustomerReviews,
    bool _bBatteriesIncluded
)
{
    this->pcName = _pcName;
	uiPrice = _uiPrice;
	dimensionsOfProduct = _dimensionsOfProduct;
	dateFirstAvailable = _dateFirstAvailable;
	pcSeries = _pcSeries;
	pcColour = _pcColour;
	pcHardwarePlatform = _pcHardwarePlatform;
	dWireLessType = _dWireLessType;
	usVoltage = _usVoltage;
	uiWeight = _uiWeight;
	fCustomerReviews = _fCustomerReviews;
	bBatteriesIncluded = _bBatteriesIncluded;
}
void productProps::showProductDetails()
{
    std::cout << std::endl << "Product Details for TP Linker" << std::endl;

    std::cout << this->pcName << std::endl;
	std::cout << uiPrice << std::endl;
	std::cout << dimensionsOfProduct << std::endl;
	std::cout << dateFirstAvailable << std::endl;
	std::cout << pcSeries << std::endl;
	std::cout << pcColour << std::endl;
	std::cout << pcHardwarePlatform << std::endl;
	std::cout << dWireLessType << std::endl;
	std::cout << usVoltage << std::endl;
	std::cout << uiWeight << std::endl;
	std::cout << fCustomerReviews << std::endl;
	std::cout << cYesOrNo(bBatteriesIncluded) << std::endl;
}

const char* productProps::cYesOrNo(const bool& member)
{
    if(member == YES)
        return "YES";
    return "NO";
}

std::ostream& operator<<(std::ostream& os, const productProps::Dimensions& resource)
{
    std::cout << resource.fLength << "x" << resource.fWidth << "x" << resource.fHeight;

    return os;
}

std::ostream& operator<<(std::ostream& os, productProps::Date& resource)
{
    std::cout << resource.usDay << "-" << resource.pcMonth << "-" << resource.usYear;

    return os;
}