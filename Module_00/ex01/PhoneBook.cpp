#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
    std::cout << "Je construis l'instance" << std::endl;
}

void    PhoneBook::add()
{
    int i=0;

    while (!this->contact[i].get_name().empty())
        i ++;
    this->contact[i].new_contact();
}

void    add_space(std::string str)
{
    int i=0;

    while (str[i])
        i ++;
    while (10-i > 0)
    {
        std::cout << " ";
        i ++;
    }
}

int    string_to_int(std::string elmt)
{
    const char* cstr;

    cstr = elmt.c_str();
    return (std::atoi(cstr));
}

bool is_it_digit(std::string& str, int len)
{
    for (int i=0; str[i]; i++) 
    {
        if (!std::isdigit(str[i]))
            return false;
    }
    if (string_to_int(str) > len || string_to_int(str) <= 0)
        return false;
    return true;
}


void    PhoneBook::index_stuff(int len)
{
    std::string i_var;
    int         nb;

    std::cout << std::endl;
    std::cout << "index : ";
    if (!std::getline(std::cin, i_var))
        std::exit(1);
    if (is_it_digit(i_var, len))
    {
        nb = string_to_int(i_var) -1;
        std::cout << "\t\x1b[35;1mName           \x1b[0m: " << contact[nb].get_name() << std::endl;
        std::cout << "\t\x1b[35;1mLastname       \x1b[0m: " << contact[nb].get_lastname() << std::endl;
        std::cout << "\t\x1b[35;1mNickname       \x1b[0m: " << contact[nb].get_nickname() << std::endl;
        std::cout << "\t\x1b[35;1mPhone number   \x1b[0m: " << contact[nb].get_phone() << std::endl;
        std::cout << "\t\x1b[35;1mDarkest secret \x1b[0m: " << contact[nb].get_secret() << std::endl;
        return ;
    }
    std::cout << "Invalid index." << std::endl;
    index_stuff(len);



}

void    PhoneBook::search()
{
    int i=0;

    if (contact[i].get_name().empty())
    {
        std::cout << std::endl;
        std::cout << "\t\x1b[32;1mNo contacts registered in the phonebook, please create a new one.\x1b[0m\n" << std::endl;
        return ;
    }
    std::cout << "\n\t┌──────────┬──────────┬──────────┬──────────┐" << std::endl;
    std::cout << "\t│     \x1b[36;1mIndex\x1b[0m│      \x1b[36;1mName\x1b[0m│  \x1b[36;1mLastname\x1b[0m│  \x1b[36;1mNickname\x1b[0m│" << std::endl;
    std::cout << "\t├──────────┼──────────┼──────────┼──────────┤" << std::endl;
    while (!contact[i].get_name().empty())
    {
        std::cout << "\t│         " << i + 1 << "│";
        add_space(contact[i].get_name());
        std::cout << contact[i].get_name() << "│" ;
        add_space(contact[i].get_lastname());
        std::cout << contact[i].get_lastname() << "│" ;
        add_space(contact[i].get_nickname());
        std::cout << contact[i].get_nickname() << "│" ;
        std::cout << std::endl;
        i ++;
    }
    std::cout << "\t└──────────┴──────────┴──────────┴──────────┘" << std::endl;
    
    index_stuff(i);
}

PhoneBook::~PhoneBook(){
    std::cout << "Je detruis l'instance" << std::endl;
}