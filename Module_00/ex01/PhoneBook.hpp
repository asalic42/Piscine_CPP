#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <cstring>
# include <stdio.h>
# include <limits>
# include <cstdlib>
# include <csignal>

# include "Contact.hpp"
# define MAX_VALUE 8

class PhoneBook
{
    public:
        PhoneBook(void);
        ~PhoneBook(void);
    
        int     get_remp();
        void    set_remp(int place);

        int     add();
        int     index_stuff(int len);
        int     search();

    private:
        Contact		contact[MAX_VALUE];
        int         remplace;
};

#endif