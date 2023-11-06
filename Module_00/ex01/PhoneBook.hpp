#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <cstring>
# include <stdio.h>

class Contact{

public:

    char name[10];
    char lastname[10];
    char nickname[10];
    char phone_number[10];
    char darkest_secret[10];

    Contact(void);
    ~Contact(void);

    void    new_contact();
};

class PhoneBook {

public:
    PhoneBook(void);
    ~PhoneBook(void);

    Contact		contact[8];
  
    void    add();
    void    search();
};

#endif