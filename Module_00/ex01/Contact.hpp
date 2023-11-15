#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "PhoneBook.hpp"

//Faire Contact.hpp
class Contact
{
    public:
        Contact(void);
        ~Contact(void);

        int            new_contact();

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

#endif