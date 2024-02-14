//WALL STICKER CLIENT
#include <iostream>
#include "wallsticker_interface.hpp"

int main(void){
    ::Decor::WallSticker* ws1 = new ::Decor::WallSticker;

    ws1->showDetails();

    ws1->setDetails
    (
        "CVANU Wall Sticker",
        "Animal",
        1,
        170,
        {88.9, 0.3, 33},
        {23, "Dec", 2023}
    );

    ws1->showDetails();

    return 0;
}
