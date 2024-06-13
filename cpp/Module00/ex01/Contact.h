#ifndef CONTACT_H
#define CONTACT_H

#include <PhoneBook.h>

class Contact{
    public:
        Contact(void);
        void Menu(void);
        bool Insert(void);
        ~Contact(void);
    private:
        PhoneBook   agenda[8];
        int         pos;
        int         max;
};

#endif