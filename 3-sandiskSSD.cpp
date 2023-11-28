//CPP Class for Portable SSD

#include <iostream>

class Dimensions{
    friend class productProps;

    private:
    float length;
    float width;
    float height;

    public:
    //parameterised constructor
    Dimensions(float l = 0.5f, float w = 0.5f, float h = 0.5f)
    : length(l), width(w), height(h)
    {

    }
};

class productProps{
    private:
    const char* name;
    unsigned int price;
    const char* manufacturer;
    const char* model;
    const char* model_name;
    Dimensions dimensions_of_product;
    const char* item_model_number;
    unsigned int flash_memory_installed_size;
    unsigned int digital_storage_capacity;
    unsigned int hard_drive_size;
    const char* hard_drive_interface;
    const char* hard_drive_description;
    const char* processor_brand;
    const char* processor_platform;
    const char* hardware_interface;
    const char* compatible_devices;
    const char* special_features;
    const char* mounting_hardware;
    unsigned short int number_of_items;
    const char* batteries_included;
    const char* batteries_required;
    unsigned int data_transfer_rate;
    const char* connector_type;
    const char* form_factor;
    const char* device_type;
    float item_weight;

    public:
    //default constructor
    productProps()
    :   name{"empty_name"},
        price{5},
        manufacturer{"empty_manufacturer"},
        model{"empty_model"},
        model_name{"empty_model_name"},
        dimensions_of_product{0,0,0},
        item_model_number{"empty_model_number"},
        flash_memory_installed_size{0},
        digital_storage_capacity{0},
        hard_drive_size{0},
        hard_drive_interface{"empty"},
        hard_drive_description{"empty_hard_drive_description"},
        processor_brand{"empty"},
        processor_platform{"empty"},
        hardware_interface{"empty"},
        compatible_devices{"empty"},
        special_features{"empty"},
        mounting_hardware{"empty"},
        number_of_items{1},
        batteries_included{"empty"},
        batteries_required{"empty"},
        data_transfer_rate{0},
        connector_type{"empty"},
        form_factor{"empty"},
        device_type{"empty"},
        item_weight{0}
    {

    }

    //member function declaration
    void set_product_details
    (
        const char* _name,
        unsigned int _price,
        const char* _manufacturer,
        const char* _model,
        const char* _model_name,
        Dimensions _dimensions_of_product,
        const char* _item_model_number,
        unsigned int _flash_memory_installed_size,
        unsigned int _digital_storage_capacity,
        unsigned int _hard_drive_size,
        const char* _hard_drive_interface,
        const char* _hard_drive_description,
        const char* _processor_brand,
        const char* _processor_platform,
        const char* _hardware_interface,
        const char* _compatible_devices,
        const char* _special_features,
        const char* _mounting_hardware,
        unsigned short int _number_of_items,
        const char* _batteries_included,
        const char* _batteries_required,
        unsigned int _data_transfer_rate,
        const char* _connector_type,
        const char* _form_factor,
        const char* _device_type,
        float _item_weight
    );

    void show_product_details();
};

int main(){
    productProps* new_ssd = new productProps;

    std::cout << ("Product Details of Portable SSD") << std::endl;

    new_ssd->set_product_details
    (
        "Sandisk SSD",
        8000,
        "Western Digital",
        "ABC213",
        "Portable SSD",
        {
            7.7f,
            5.2f,
            17.5f
        },
        "SDD123",
        2,
        2,
        2,
        "USB",
        "Portable Fast SSD",
        "Western Digital Processor",
        "Windows, Mac",
        "USB, Type C",
        "Laptop, Tablet, Phone",
        "Lightweight, fast",
        "USB, Type C",
        1,
        "No",
        "No",
        3550,
        "USB",
        "NVMe",
        "Portable",
        96
    );

    new_ssd->show_product_details();

    return(0);
};

void productProps::set_product_details
(
    const char* _name,
    unsigned int _price,
    const char* _manufacturer,
    const char* _model,
    const char* _model_name,
    Dimensions _dimensions_of_product,
    const char* _item_model_number,
    unsigned int _flash_memory_installed_size,
    unsigned int _digital_storage_capacity,
    unsigned int _hard_drive_size,
    const char* _hard_drive_interface,
    const char* _hard_drive_description,
    const char* _processor_brand,
    const char* _processor_platform,
    const char* _hardware_interface,
    const char* _compatible_devices,
    const char* _special_features,
    const char* _mounting_hardware,
    unsigned short int _number_of_items,
    const char* _batteries_included,
    const char* _batteries_required,
    unsigned int _data_transfer_rate,
    const char* _connector_type,
    const char* _form_factor,
    const char* _device_type,
    float _item_weight
)
{
    this->name =_name;
    price = _price,
    manufacturer = _manufacturer,
    model = _model,
    model_name = _model_name,
    dimensions_of_product = _dimensions_of_product,
    item_model_number = _item_model_number,
    flash_memory_installed_size = _flash_memory_installed_size,
    digital_storage_capacity = _digital_storage_capacity,
    hard_drive_size = _hard_drive_size,
    hard_drive_interface = _hard_drive_interface,
    hard_drive_description = _hard_drive_description,
    processor_brand = _processor_brand,
    processor_platform = _processor_platform,
    hardware_interface = _hardware_interface,
    compatible_devices = _compatible_devices,
    special_features = _special_features,
    mounting_hardware = _mounting_hardware,
    number_of_items = _number_of_items,
    batteries_included = _batteries_included,
    batteries_required = _batteries_required,
    data_transfer_rate = _data_transfer_rate,
    connector_type = _connector_type,
    form_factor = _form_factor,
    device_type = _device_type,
    item_weight = _item_weight;
}

void productProps::show_product_details(){
    std::cout << name << std::endl;
    std::cout << price << std::endl;
    std::cout << manufacturer << std::endl;
    std::cout << model << std::endl;
    std::cout << model_name << std::endl;
    std::cout << dimensions_of_product.length << "x" << dimensions_of_product.width << "x" << dimensions_of_product.height << std::endl;
    std::cout << item_model_number << std::endl;
    std::cout << flash_memory_installed_size << std::endl;
    std::cout << digital_storage_capacity << std::endl;
    std::cout << hard_drive_size << std::endl;
    std::cout << hard_drive_interface << std::endl;
    std::cout << hard_drive_description << std::endl;
    std::cout << processor_brand << std::endl;
    std::cout << processor_platform << std::endl;
    std::cout << hardware_interface << std::endl;
    std::cout << compatible_devices << std::endl;
    std::cout << special_features << std::endl;
    std::cout << mounting_hardware << std::endl;
    std::cout << number_of_items << std::endl;
    std::cout << batteries_included << std::endl;
    std::cout << batteries_required << std::endl;
    std::cout << data_transfer_rate << std::endl;
    std::cout << connector_type << std::endl;
    std::cout << form_factor << std::endl;
    std::cout << device_type << std::endl;
    std::cout << item_weight << std::endl;
}
