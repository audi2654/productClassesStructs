// AIRLINE AGENCY SERVER
#include <iostream>
#include <vector>
#include "agency_interface.hpp"

template <class T>
std::ostream &operator<<(std::ostream &os, const std::vector<T> &v) {
  for (const auto &x : v) {
    os << '[' << x << ']';
  }
  return os;
}

::Airline::Agency::Agency()
    : sName{"0"}, ulIATA{0}, sOfficeID{"0"}, sVecAirlineAllowed{"0"},
      dateOfStart{0, "0", 0}, addrOfAgency{"0", 0} {}

::Airline::Date::Date(unsigned short _d, std::string _m, unsigned short _y)
    : usDay(_d), sMonth(_m), usYear(_y) {}

::Airline::Address::Address(std::string _a, unsigned int _p)
    : sAddress(_a), uiPincode(_p) {}

void ::Airline::Agency::setDetails(std::string _sName, unsigned long _ulIATA,
                                   std::string _sOfficeID,
                                   std::vector<std::string> _sVecAirlineAllowed,
                                   Date _dateOfStart, Address _addrOfAgency) {
  sName = _sName;
  ulIATA = _ulIATA;
  sOfficeID = _sOfficeID;
  sVecAirlineAllowed = _sVecAirlineAllowed;
  dateOfStart = _dateOfStart;
  addrOfAgency = _addrOfAgency;
}

void ::Airline::Agency::showDetails() {
  std::cout << "Airline Agency Details are" << std::endl;

  std::cout << sName << std::endl;
  std::cout << ulIATA << std::endl;
  std::cout << sOfficeID << std::endl;
  std::cout << sVecAirlineAllowed << std::endl;
  std::cout << dateOfStart << std::endl;
  std::cout << addrOfAgency << std::endl;

  std::cout << std::endl;
}

namespace Airline {
std::ostream &operator<<(std::ostream &os, const Date &resource) {
  os << resource.usDay << "-" << resource.sMonth << "-" << resource.usYear;
  return os;
}

std::ostream &operator<<(std::ostream &os, const Address &resource) {
  os << resource.sAddress << " " << resource.uiPincode;
  return os;
}

std::ostream &operator<<(std::ostream &os, const std::vector<std::string> resource) {
  for (auto i : resource) {
    os << i << " ";
  };
  return os;
}
} // namespace Airline
