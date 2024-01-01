// G SEC BONDS INTERFACE
#ifndef _G_SEC_BONDS_INTERFACE_HPP
#define _G_SEC_BONDS_INTERFACE_HPP

const std::string GoI = "Government Of India";

namespace Market{
    class Date{
        //friend class Bonds;

        private:
        unsigned short usDay;
        std::string sMonth;
        unsigned short usYear;

        public:
        Date(unsigned short _d, std::string _m, unsigned short _y);

        friend std::ostream& operator<<(std::ostream& os, const Date& resource);
    };

    class Bonds{
        private:
        std::string sName;
        unsigned int uiPrice;
        float fCouponRate;
        std::string sIssuedBy;
        Date dateOfIssue;
        std::string sPaymentDuration;

        public:
        Bonds();

        void setDetails
        (
            std::string _sName,
            unsigned int _uiPrice,
            float _fCouponRate,
            std::string _sIssuedBy,
            Date _dateOfIssue,
            std::string _sPaymentDuration
        );

        void showDetails();
    };
}

#endif /*_G_SEC_BONDS_INTERFACE_HPP*/
