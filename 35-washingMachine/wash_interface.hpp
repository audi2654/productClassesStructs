//WASHING MACHINE INTERFACE
#ifndef _WASH_INTERFACE
#define _WASH_INTERFACE

#include <vector>

namespace Laundry{
    class WashMach{
        private:
        std::string sType;
        std::string sLoadType;
        std::vector<std::string> svecFeatures;
        int iVolt;
        int iCapacity;

        public:
        WashMach();

        void showDetails() const;

        virtual void setDetails
        (
            std::string _sType,
            std::string _sLoadType,
            std::vector<std::string> _svecFeatures,
            int _iVolt,
            int _iCapacity
        );
    };

    class SemiWash : public WashMach{
        private:
        std::string sSType;
        std::string sSLoadType;
        std::vector<std::string> svecSFeatures;
        int iSVolt;
        int iSCapacity;

        public:
        SemiWash();
    };


    class AutoWash : public WashMach{
        private:
        std::string sAType;
        std::string sALoadType;
        std::vector<std::string> svecAFeatures;
        int iAVolt;
        int iACapacity;

        public:
        AutoWash();

        void setDetails
        (
            std::string _sAType,
            std::string _sALoadType,
            std::vector<std::string> _svecAFeatures,
            int _iAVolt,
            int _iACapacity
        ) override;
    };
}

#endif