//Struct for Sandisk 2 TB SSD

//https://www.amazon.in/SanDisk-Protection-Resistance-Encryption-Smartphone/dp/B0C59G53GS/ref=sr_1_4?crid=SKK4SK25BZ3G&keywords=ssd%2B2tb&qid=1695714476&sprefix=SSD%2B%2Caps%2C213&sr=8-4&th=1

#include <stdio.h>
#include <stdlib.h>

struct productProps{
    char* name;
    unsigned int price;
    char* manufacturer;
    char* model;
    char* model_name;
    struct Dimensions{
        float length;
        float width;
        float height;
    } dimensions_of_product;
    char* item_model_number;
    unsigned int flash_memory_installed_size;
    unsigned int digital_storage_capacity;
    unsigned int hard_drive_size;
    char* hard_drive_interface;
    char* hard_drive_description;
    char* processor_brand;
    char* processor_platform;
    char* hardware_interface;
    char* compatible_devices;
    char* special_features;
    char* mounting_hardware;
    unsigned short int number_of_items;
    char* batteries_included;
    char* batteries_required;
    unsigned int data_transfer_rate;
    char* connector_type;
    char* form_factor;
    char* device_type;
    float item_weight;
};

struct productProps new_product = {
    "Sandisk Portable SSD",
    9999,
    "Western Digital Technologies",
    "SDSSDE61-2T00-G25M",
    "Extreme Portable SSD",
    {0.97, 5.26, 10.08},
    "SDSSDE61-2T00-G25M",
    2,
    2,
    2,
    "NVMe",
    "Solid State Drive",
    "Samsung",
    "Mac",
    "USB Type C",
    "Laptop, Gaming Console, TV, Tablet, Phone",
    "Dust Resistant, Portable, Hardware Encryption, Water Resistant",
    "Portable SSD",
    1,
    "No",
    "No",
    1050,
    "USB",
    "Portable",
    "Solid State Drive",
    49.9
};

struct productProps* new_portable_ssd = &new_product;

int main()
{
    puts("Product Details of Portable SSD\n");

    printf("name                            :          %s\n", new_product.name);
    printf("price                           :          %d\n", new_portable_ssd->price);
    printf("manufacturer                    :          %s\n", new_product.manufacturer);
    printf("model                           :          %s\n", new_portable_ssd->model);
    printf("model_name                      :          %s\n", new_product.model_name);
    printf("dimensions_of_product           :          %.1f x %0.1f x %.1f\n", new_product.dimensions_of_product.height, new_portable_ssd->dimensions_of_product.length, new_product.dimensions_of_product.width);
    printf("item_model_number               :          %s\n", new_portable_ssd->item_model_number); 
    printf("flash_memory_installed_size     :          %d TB\n", new_product.flash_memory_installed_size);
    printf("digital_storage_capacity        :          %d TB\n", new_portable_ssd->digital_storage_capacity);
    printf("hard_drive_size                 :          %d TB\n", new_product.hard_drive_size);
    printf("hard_drive_interface            :          %s\n", new_portable_ssd->hardware_interface);
    printf("hard_drive_description          :          %s\n", new_product.hard_drive_description);
    printf("processor_brand                 :          %s\n", new_portable_ssd->processor_brand);
    printf("processor_platform              :          %s\n", new_portable_ssd->processor_platform);
    printf("hardware_interface              :          %s\n", new_portable_ssd->hardware_interface);
    printf("compatible_devices              :          %s\n", new_portable_ssd->compatible_devices);
    printf("special_features                :          %s\n", new_portable_ssd->special_features);
    printf("mounting_hardware               :          %s\n", new_portable_ssd->mounting_hardware);
    printf("number_of_items                 :          %d\n", new_portable_ssd->number_of_items);
    printf("batteries_included              :          %s\n", new_portable_ssd->batteries_included);
    printf("batteries_required              :          %s\n", new_portable_ssd->batteries_required);
    printf("data_transfer_rate              :          %d\n", new_portable_ssd->data_transfer_rate);
    printf("connector_type                  :          %s\n", new_portable_ssd->connector_type);
    printf("form_factor                     :          %s\n", new_portable_ssd->form_factor);
    printf("device_type                     :          %s\n", new_portable_ssd->device_type);
    printf("item_weight                     :          %.1f\n", new_portable_ssd->item_weight);

    return(0);
}