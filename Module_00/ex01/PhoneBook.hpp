#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <cstring>
# include <stdio.h>
# include <limits>
# include <cstdlib>

# include "Contact.hpp"
# define MAX_VALUE 3

class PhoneBook
{
    public:
        PhoneBook(void);
        ~PhoneBook(void);
    
        int     get_remp();
        void    set_remp(int place);

        void    add();
        void    index_stuff(int len);
        void    search();

    private:
        Contact		contact[MAX_VALUE];
        int         remplace;
};

#endif