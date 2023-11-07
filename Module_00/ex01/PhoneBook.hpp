#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <cstring>
# include <stdio.h>
# include <limits>
# include <cstdlib>

//Faire Contact.hpp
class Contact
{
    public:
        Contact(void);
        ~Contact(void);

        void            new_contact();

        std::string     get_name();
        std::string     get_lastname();
        std::string     get_nickname();
        std::string     get_phone();
        std::string     get_secret();

        void	        set_name(std::string str);
        void	        set_lastname(std::string str);
        void	        set_nickname(std::string str);
        void	        set_phone(std::string str);
        void	        set_secret(std::string str);

    private:
        std::string     name;
        std::string     lastname;
        std::string     nickname;
        std::string     phone_number;
        std::string     darkest_secret;
};

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