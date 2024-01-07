//SANGEET INTERFACE
#ifndef _SANGEET_INTERFACE_HPP
#define _SANGEET_INTERFACE_HPP

#include <vector>

namespace ShastriyaSangeet{
    class Sangeet{
        private:
        std::string sRegion;
        unsigned short usRagaCount;
        std::vector<std::string> svecInfluencedBy;
        std::vector<std::string> svecInstruments;
        std::string sStyle;

        public:
        Sangeet();

        void showDetails();

        void setDetails
        (
            std::string _sRegion,
            unsigned short _usRagaCount,
            std::vector<std::string> _svecInfluencedBy,
            std::vector<std::string> _svecInstruments,
            std::string _sStyle
        );
    };

    class Hindustani : public Sangeet{
        private:
        std::string sRegion;
        unsigned short usRagaCount;
        std::vector<std::string> svecInfluencedBy;
        std::vector<std::string> svecInstruments;
        std::string sStyle;

        public:
        Hindustani();
    };

    class Carnatic : public Sangeet{
        private:
        std::string sRegion;
        unsigned short usRagaCount;
        std::vector<std::string> svecInfluencedBy;
        std::vector<std::string> svecInstruments;
        std::string sStyle;

        public:
        Carnatic();

        void showDetails();     //Overriding the base class member function
    };
}

#endif /*_SANGEET_INTERFACE_HPP*/
