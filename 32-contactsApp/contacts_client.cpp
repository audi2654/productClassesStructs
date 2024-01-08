//CONTACTS APP CLIENT
#include <iostream>
#include "contacts_interface.hpp"

int main(void){
    ::App::Contacts* newApp1 = new ::App::Contacts;

    std::cout << "Contacts App Details are" << std::endl;

    newApp1->showDetails();
    
    newApp1->setDetails
    (
        "Aditya's Contact App",
        500,
        {"Favourites", "Recents", "Keypad"},
        true
    );

    newApp1->showDetails();

    std::cout << std::endl;

    ::App::Music* newApp2 = new ::App::Music;

    std::cout << "Contacts App Details are" << std::endl;

    newApp2->showDetails();

    newApp2->setDetails
    (
        "Aditya's Music App",
        1376,
        {"Favourites", "Recently Added", "Mostly Played"},
        true
    );

    newApp2->showDetails();

    return 0;
}
