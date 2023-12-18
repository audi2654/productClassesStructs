//TRAIN PNR INTERFACE
#ifndef _TRAIN_PNR_INTERFACE_H
#define _TRAIN_PNR_INTERFACE_H

const bool YES = 1;
const bool NO = 0;

class Date{
    friend class TrainPnr;

    private:
    unsigned short usDay;
    std::string sMonth;
    unsigned short usYear;

    public:
    Date(unsigned int _d, std::string _m, unsigned short _y);

    friend std::ostream& operator<<(std::ostream& os, const Date& resource)
    {
        std::cout << resource.usDay << "-" << resource.sMonth << "-" << resource.usYear;
        return os;
    }
};

class TrainPnr{
    private:
    long long int lliPnrNumber;
    int iTrainNumber;
    std::string sTrainName;
    Date dateOfBoarding;
    std::string sBoardingFrom;
    std::string sBoardingTill;
    char cClass;
    short int siFare;
    bool bConfirmStatus;
    bool bChartPrepared;

    public:
    TrainPnr();

    void showPnrDetails();

    void setPnrDetails
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
    );
};

#endif /*_TRAIN_PNR_INTERFACE_H*/