//TRAIN PNR SERVER
#include <iostream>
#include "trainPnr_interface.hpp"

Date::Date(unsigned int _d, std::string _m, unsigned short _y)
:   usDay(_d), sMonth(_m), usYear(_y)
{

}

TrainPnr::TrainPnr()
:   lliPnrNumber{9999},
    iTrainNumber{999},
    sTrainName{"empty_train"},
    dateOfBoarding{0, "empty_month", 0},
    sBoardingFrom{"xxx"},
    sBoardingTill{"xxx"},
    cClass{'X'},
    siFare{999},
    bConfirmStatus{NO},
    bChartPrepared{NO}
{

}

void TrainPnr::setPnrDetails
(
    long long int _lliPnrNumber,
    int _iTrainNumber,
    std::string _sTrainName,
    Date _dateOfBoarding,
    std::string _sBoardingFrom,
    std::string _sBoardingTill,
    char _cClass,
    short int _siFare,
    bool _bConfirmStatus,
    bool _bChartPrepared
)
{
    lliPnrNumber = _lliPnrNumber;
    iTrainNumber = _iTrainNumber;
    sTrainName = _sTrainName;
    dateOfBoarding = _dateOfBoarding;
    sBoardingFrom = _sBoardingFrom;
    sBoardingTill = _sBoardingTill;
    cClass = _cClass;
    siFare = _siFare;
    bConfirmStatus = _bConfirmStatus;
    bChartPrepared = _bChartPrepared;
}

void TrainPnr::showPnrDetails()
{
    std::cout << "PNR Enquiry Details" << std::endl;

    std::cout << lliPnrNumber << std::endl;
    std::cout << iTrainNumber << std::endl;
    std::cout << sTrainName << std::endl;
    std::cout << dateOfBoarding << std::endl;
    std::cout << sBoardingFrom << std::endl;
    std::cout << sBoardingTill << std::endl;
    std::cout << cClass << std::endl;
    std::cout << siFare << std::endl;
    std::cout << bConfirmStatus << std::endl;
    std::cout << bChartPrepared << std::endl;

    std::cout << std::endl;
}