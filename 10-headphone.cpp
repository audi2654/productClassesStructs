//C++ Class for Beyerdynamic Headphone
#include <iostream>

class Dimensions{

};

class Date{

};

class productProps{
    private:
    const char* pcName;

    public:

    void setProductDetails();
    void showProductDetails();
};

int main(void){
    productProps* newProduct = new productProps;

    newProduct->setProductDetails();

    newProduct->showProductDetails();

    return 0;
}
