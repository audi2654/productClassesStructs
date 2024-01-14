//PENS INTERFACE
#ifndef _PENS_INTERFACE
#define _PENS_INTERFACE

#include <vector>

namespace Pens{

    class Pen{
        private:
        std::string sName;
        std::vector<std::string> svecColors;
        std::string sRecyclable;
        unsigned short usPrice;

        public:
        Pen();

        virtual void showDetails() const;
        
        virtual void setDetails
        (
            std::string _sName,
            std::vector<std::string> _svecColors,
            std::string _sRecyclable,
            unsigned short _usPrice
        );
    };

    class BallPen : public Pen{
        private:
        std::string sBName;
        std::vector<std::string> svecBColors;
        std::string sBRecyclable;
        unsigned short usBPrice;

        public:
        BallPen();
    };

    class InkPen : public Pen{
        private:
        std::string sIName;
        std::vector<std::string> svecIColors;
        std::string sIRecyclable;
        unsigned short usIPrice;

        public:
        InkPen();

        void showDetails() const override;
        
        void setDetails
        (
            std::string _sIName,
            std::vector<std::string> _svecIColors,
            std::string _sIRecyclable,
            unsigned short _usIPrice
        ) override;
    };
}

#endif /*_PENS_INTERFACE*/
