//C Struct for TP Link Router
#include <stdio.h>
#include <stdlib.h>

typedef int iBool_t;

#define YES		1
#define NO		0

struct Dimensions
{
	float fHeight;
	float fLength;
	float fWidth;
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
	char* pcSeries;
	char* pcColour;
	char* pcHardwarePlatform;
	double dWireLessType;
	unsigned short usVoltage;
	unsigned int uiWeight;
	float fCustomerReviews;
	iBool_t bBatteriesIncluded;
};

void setProductDetails
(
	struct productProps* structVariableToSetValues,
	char* _pcName,
	unsigned int _uiPrice,
	struct Dimensions _structDim_dimensionsOfProduct,
	struct Date _structDate_dateFirstAvailable,
	char* _pcSeries,
	char* _pcColour,
	char* _pcHardwarePlatform,
	double _dWireLessType,
	unsigned short _usVoltage,
	unsigned int _uiWeight,
	float _fCustomerReviews,
	iBool_t _bBatteriesIncluded
);

void showProductDetails();

char* cYesOrNo(const iBool_t* member);

static void* ampMalloc(size_t structSizeToAllocate);


int main(void)
{
	struct productProps* newProduct = (struct productProps*)ampMalloc(sizeof(struct productProps));
	
	*newProduct = (struct productProps){
										.pcName = "empty_name",
										.uiPrice = 0,
										.structDim_dimensionsOfProduct = {0,0,0},
										.structDate_dateFirstAvailable = {0, "empty_month", 0},
										.pcSeries = "empty",
										.pcColour = "empty",
										.pcHardwarePlatform = "empty",
										.dWireLessType = 0.000,
										.usVoltage = 0,
										.uiWeight = 0,
										.fCustomerReviews = 0.0,
										.bBatteriesIncluded = YES,
									   };
	
	showProductDetails(newProduct);

	setProductDetails
	(
		newProduct,
		"TP Link",
		9999,
		(struct Dimensions){1.2, 1.3, 1.4},
		(struct Date){12, "Dec", 2012},
		"ASNI504",
		"White",
		"Windows",
		1.2453,
		200,
		193,
		3.2,
		NO
	);

	showProductDetails(newProduct);

	return(0);
}

void setProductDetails
(
	struct productProps* structVariableToSetValues,
	char* _pcName,
	unsigned int _uiPrice,
	struct Dimensions _structDim_dimensionsOfProduct,
	struct Date _structDate_dateFirstAvailable,
	char* _pcSeries,
	char* _pcColour,
	char* _pcHardwarePlatform,
	double _dWireLessType,
	unsigned short _usVoltage,
	unsigned int _uiWeight,
	float _fCustomerReviews,
	iBool_t _bBatteriesIncluded
)
{	
	structVariableToSetValues->pcName = _pcName;
	structVariableToSetValues->uiPrice = _uiPrice;
	structVariableToSetValues->structDim_dimensionsOfProduct = _structDim_dimensionsOfProduct;
	structVariableToSetValues->structDate_dateFirstAvailable = _structDate_dateFirstAvailable;
	structVariableToSetValues->pcSeries = _pcSeries;
	structVariableToSetValues->pcColour = _pcColour;
	structVariableToSetValues->pcHardwarePlatform = _pcHardwarePlatform;
	structVariableToSetValues->dWireLessType = _dWireLessType;
	structVariableToSetValues->usVoltage = _usVoltage;
	structVariableToSetValues->uiWeight = _uiWeight;
	structVariableToSetValues->fCustomerReviews = _fCustomerReviews;
	structVariableToSetValues->bBatteriesIncluded = _bBatteriesIncluded;
};

void showProductDetails(const struct productProps* productVariable)
{
	puts("Product Details for TP Link Router\n");
	printf("%s\n",productVariable->pcName);
	printf("%i\n",productVariable->uiPrice);
	printf("%0.1fx%0.1fx%0.1f\n",productVariable->structDim_dimensionsOfProduct.fWidth, productVariable->structDim_dimensionsOfProduct.fHeight, productVariable->structDim_dimensionsOfProduct.fLength);
	printf("%hu-%s-%hu\n",productVariable->structDate_dateFirstAvailable.usDay, productVariable->structDate_dateFirstAvailable.pcMonth, productVariable->structDate_dateFirstAvailable.usYear);
	printf("%s\n",productVariable->pcSeries);
	printf("%s\n",productVariable->pcColour);
	printf("%s\n",productVariable->pcHardwarePlatform);
	printf("%f\n",productVariable->dWireLessType);
	printf("%hu\n",productVariable->usVoltage);
	printf("%i\n",productVariable->uiWeight);
	printf("%0.1f\n",productVariable->fCustomerReviews);
	printf("%s\n",cYesOrNo(&(productVariable->bBatteriesIncluded)));
}

char* cYesOrNo(const iBool_t* member)
{
	if(*member == YES)
		return "YES";
	return "NO";
}

static void* ampMalloc(size_t structSizeToAllocate)
{
	size_t* p = NULL;

	p = (void*)malloc(structSizeToAllocate);
	if(p == NULL)
	{
		puts("Memory allocation failed in ampMalloc()\n");
		exit(EXIT_FAILURE);
	}
}
