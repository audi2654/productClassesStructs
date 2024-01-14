//PENS CLIENT
#include <iostream>
#include "pens_interface.hpp"

int main(void){
    /*
    ::Pens::BallPen newPen1;
    ::Pens::BallPen& refPen = newPen1;

    refPen.showDetails();

    refPen.setDetails
    (
        "Ball Pen",
        {"Blue", "Red", "Green"},
        "Non-Recyclable",
        5
    );

    refPen.showDetails();

    std::cout << std::endl;

    ::Pens::InkPen* newPen2 = new ::Pens::InkPen;

    newPen2->showDetails();     //InkPen::showDetails()

    newPen2->setDetails
    (
        "Ink Pen",
        {"Blue", "Black"},
        "Recyclable",
        40
    ); //InkPen::setDetails()

    newPen2->showDetails();
    */

    /*-----------------------------------------*/
    //Derived Class Object on Base Class Pointer
    ::Pens::BallPen newPen1;
    ::Pens::Pen& refPen = newPen1;

    refPen.showDetails();   //Pen::showDetails()

    refPen.setDetails
    (
        "Ball Pen",
        {"Blue", "Red", "Green"},
        "Non-Recyclable",
        5
    );  //Pen::setDetails()

    refPen.showDetails();

    std::cout << std::endl;

    ::Pens::Pen* newPen2 = new ::Pens::InkPen;

    newPen2->showDetails();     //InkPen::showDetails()

    newPen2->setDetails
    (
        "Ink Pen",
        {"Blue", "Black"},
        "Recyclable",
        40
    ); //InkPen::setDetails()

    newPen2->showDetails();


    return 0;
}