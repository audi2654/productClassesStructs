//AIRLINE AGENCY INTERFACE
#ifndef _AGENCY_INTERFACE_HPP
#define _AGENCY_INTERFACE_HPP
#include <vector>

namespace Airline{
  class Date{
      friend class Agency;

      private:
      unsigned short usDay;
      std::string sMonth;
      unsigned short usYear;

      public:
      Date(unsigned short _d, std::string _m, unsigned short _y);

      friend std::ostream& operator<<(std::ostream& os, const Date& resource);
  };

  class Address{
      friend class Agency;

      private:
      std::string sAddress;
      unsigned int uiPincode;

      public:
      Address(std::string _a, unsigned int _p);

      friend std::ostream& operator<<(std::ostream& os, const Address& resource);
  };

    class Agency{
        private:
        std::string sName;
        unsigned long ulIATA;
        std::string sOfficeID;
        std::vector<std::string> sVecAirlineAllowed;
        Date dateOfStart;
        Address addrOfAgency;

        public:
        Agency();

        void showDetails();
        void setDetails
        (
          std::string _sName,
          unsigned long _ulIATA,
          std::string _sOfficeID,
          std::vector<std::string> _sVecAirlineAllowed,
          Date _dateOfStart,
          Address _addrOfAgency
        );

        /*friend std::ostream& operator<<(std::ostream& os, const std::vector<std::string> resource);*/
    };
}

#endif /*_AGENCY_INTERFACE_HPP*/
