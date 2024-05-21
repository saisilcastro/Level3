#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H

#include <iostream>

class PhoneBook{
    public:
        PhoneBook(void);
        void Set(std::string fN, std::string lN, std::string nN, std::string pN, std::string dS);
        std::string TextTruncate(std::string text);
        void Show(int index);
        ~PhoneBook(void);
    private:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkSecret;
};

#endif