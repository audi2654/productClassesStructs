//DRILL CLIENT
#include <iostream>
#include "drill_interface.hpp"

int main(void){
    ::Tools::StanleyDrill* nD1 = new ::Tools::StanleyDrill;

    ::Tools::StanleyDrill& nD1Ref = *nD1;

    showDetails<::Tools::Drill>(*nD1);

    nD1->setDetails
    (
        "Stanley Drill",
        3599,
        750,
        {"Yellow", "Black"},
        {17, 8.5, 22}
    );

    showDetails<::Tools::Drill>(*nD1);

    ::Tools::BoschDrill* nD2 = new ::Tools::BoschDrill;
    //::Tool::Drill* nD2 = new ::Tool::BoschDrill;

    ::Tools::BoschDrill& nD2Ref = *nD2;

    showDetails<::Tools::BoschDrill>(*nD2);

    nD2->setDetails
    (
        "Bosch Drill",
        5999,
        950,
        {"Gray", "Orange"},
        {13, 8.5, 24}
    );

    showDetails<::Tools::BoschDrill>(*nD2);

    return 0;
}
