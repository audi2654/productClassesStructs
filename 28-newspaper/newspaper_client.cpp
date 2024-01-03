//NEWSPAPER CLIENT
#include <iostream>
#include "newspaper_interface.hpp"

int main(void){
    ::Media::Newspaper* newPaper = new ::Media::Newspaper;

    newPaper->showDetails();

    newPaper->setDetails
    (
        "Aditya News Express",
        5,
        "Recycled Paper",
        "Pune",
        {"EN","HI","MR"},
        {1, "Jan", 2024}
    );

    newPaper->showDetails();
}
