//CONTACTS APP INTERFACE
#ifndef _CONTACTS_INTERFACE_HPP
#define _CONTACTS_INTERFACE_HPP

#include <vector>

namespace App{
    class Application{
        private:
        std::string sName;
        unsigned int uiQuantity;
        std::vector<std::string> svecCategories;
        bool bBackupAllowed;

        public:
        Application();

        void showDetails() const;

        void setDetails
        (
            std::string _sName,
            unsigned int _uiQuantity,
            std::vector<std::string> _svecCategories,
            bool _bBackupAllowed
        );
    };

    class Contacts : public Application{
        private:
        std::string sCName;
        unsigned int uiCQuantity;
        std::vector<std::string> svecCCategories;
        bool bCBackupAllowed;

        public:
        Contacts();
    };

    class Music : public Application{
        private:
        std::string sMName;
        unsigned int uiMQuantity;
        std::vector<std::string> svecMCategories;
        bool bMBackupAllowed;

        public:
        Music();

        void showDetails() const;
    };
}

#endif /*_CONTACTS_INTERFACE_HPP*/
