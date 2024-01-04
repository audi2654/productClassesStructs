//HOTEL RESERVATION INTERFACE
#ifndef _HOTEL_INTERFACE_HPP
#define _HOTEL_INTERFACE_HPP

#include <vector>

namespace Hotel{
    class Date{
        friend class Reservation;

        private:
        unsigned short usDay;
        std::string sMonth;
        unsigned short usYear;

        public:
        Date(unsigned short _d, std::string _m, unsigned short _y);

        friend std::ostream& operator<<(std::ostream& os, const Date& resource);
    };

    class Reservation{
        private:
        std::string sName;
        Date checkInDate;
        Date checkOutDate;  
        std::string sRoomType;
        int iRoomID;
        std::vector<char> svecMeals;
        int iCost;

        public:
        Reservation();

        void showDetails();
        void setDetails
        (
            std::string _sName,
            Date _checkInDate,
            Date _checkOutDate,
            std::string _sRoomType,
            int _iRoomID,
            std::vector<char> _svecMeals,
            int _iCost
        );
    };
}

#endif /*_HOTEL_INTERFACE_HPP*/
