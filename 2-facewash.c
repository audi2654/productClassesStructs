//Struct for Nivea Face Wash

#include <stdio.h>
#include <stdlib.h>

struct productProps{
    char* name;
    unsigned int price;
    struct Dimensions{
        float length;
        float width;
        float height;
    } dimensions_of_product;
    struct Date{
        unsigned short int day;
        char* month;
        unsigned short year;
    } date_first_available;
    char* manufacturer;
    char* ASIN;
    char* item_model_number;
    char* country_of_origin;
    char* packer;
    char* importer;
    unsigned int weight;
    unsigned int net_quantity;
    char* included_components;
    char* generic_name;
    unsigned int best_seller_rank;
    float customer_review_rating;
};

int main(){
    puts("Product Details of Nivea Face Wash");

    return(0);
}