//ADHAAR CARD INTERFACE
#ifndef _ADHAAR_CARD_INTERFACE_HPP
#define _ADHAAR_CARD_INTERFACE_HPP

const std::string M = "male";
const std::string F = "female";

namespace IDCard{
    class Address{
        friend class AdhaarCard;
        
        private:
        std::string sCity;
        unsigned int uiPinCode;

        public:
        Address();
        Address(std::string _c, unsigned int _p);

        friend std::ostream& operator<<(std::ostream& os, const Address& resource);
    };

    class Date{
        friend class AdhaarCard;

        private:
        unsigned short usDay;
        std::string sMonth;
        unsigned short usYear;

        public:
        Date(unsigned short _d, std::string _m, unsigned short _y);

        friend std::ostream& operator<<(std::ostream& os, const Date& resource);
    };

    class AdhaarCard{
        private:
        unsigned long ulNumber;
        std::string sName;
        std::string sGender;
        Date dateOfBirth;
        Address permanentAddr;

        public:
        AdhaarCard
        (
            unsigned long _n,
            std::string _name,
            std::string _gender,
            Date _dateOfBirth,
            Address _permanentAddr
        );

        void showDetails();
    };
}

#endif /*_ADHAAR_CARD_INTERFACE_HPP*/
