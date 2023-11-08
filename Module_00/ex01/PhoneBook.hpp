#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <cstring>
# include <stdio.h>
# include <limits>
# include <cstdlib>

# include "Contact.hpp"

class PhoneBook
{
    public:
        PhoneBook(void);
        ~PhoneBook(void);
    
        void    add();
        void    index_stuff(int len);
        void    search();

    private:
        Contact		contact[8];
};

#endif