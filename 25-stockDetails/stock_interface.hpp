//STOCK DETAILS INTERFACE

namespace Market{
    class Date{
        friend class Stock;
        
        private:
        unsigned short usDay;
        std::string sMonth;
        unsigned short usYear;

        public:
        Date(unsigned short _d, std::string _m, unsigned short _y);

        friend std::ostream& operator<<(std::ostream& os, const Date& resoure);        
    };

    class Stock{
        private:
        std::string sScripName;
        unsigned long ulPrice;
        unsigned long ulMarketCapitalization;
        unsigned long ulUpperCircuit;
        unsigned long ulLowerCircuit;
        float fDividendYield;
        Date dateOfData;

        public:
        Stock();

        void showDetails();
        void setDetails
        (
            std::string _sScripName,
            unsigned long _ulPrice,
            unsigned long _ulMarketCapitalization,
            unsigned long _ulUpperCircuit,
            unsigned long _ulLowerCircuit,
            float _fDividendYield,
            Date _dateOfData
        );
    };
}
