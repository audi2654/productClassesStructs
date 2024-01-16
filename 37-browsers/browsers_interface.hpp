//BROWSERS INTERFACE
#ifndef _BROWSERS_INTERFACE
#define _BROWSERS_INTERFACE
#include <vector>

namespace Web{
    class Browser{
        private:
        std::string sName;
        std::string sEngine;
        std::vector<int> ivecDate;
        std::vector<std::string> svecFeatures;

        public:
        Browser();

        virtual void showDetails() const;

        virtual void setDetails
        (
            std::string _sName,
            std::string _sEngine,
            std::vector<int> _ivecDate,
            std::vector<std::string> _svecFeatures
        );
    };

    class Chrome : public Browser{
        private:
        std::string sCName;
        std::string sCEngine;
        std::vector<int> ivecCDate;
        std::vector<std::string> svecCFeatures;

        public:
        Chrome();
    };

    class Firefox : public Browser{
        private:
        std::string sFName;
        std::string sFEngine;
        std::vector<int> ivecFDate;
        std::vector<std::string> svecFFeatures;

        public:
        Firefox();

        void showDetails() const override;

        void setDetails
        (
            std::string _sFName,
            std::string _sFEngine,
            std::vector<int> _ivecFDate,
            std::vector<std::string> _svecFFeatures
        ) override;
    };
}

#endif /*_BROWSERS_INTERFACE*/
