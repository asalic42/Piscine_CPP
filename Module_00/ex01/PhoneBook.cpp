#include "PhoneBook.hpp"

// Constructeur de la classe PhoneBook
PhoneBook::PhoneBook() : remplace(0) {}

int PhoneBook::get_remp()
{
    return (this->remplace);
}

void    PhoneBook::set_remp(int place)
{
    this->remplace = place;
}

/*  Methode de la classe PhoneBook
    Ajoute un contact au repertoire
*/
int    PhoneBook::add()
{
    int i=0;

    while (i < MAX_VALUE && !this->contact[i].get_name().empty())
        i ++;
    if (i == MAX_VALUE)
    {
        if (get_remp() == MAX_VALUE)
            set_remp(0);
        if (this->contact[get_remp()].new_contact())
            return 1;
        set_remp(get_remp() +1);
        return 0;
    }
    if (this->contact[i].new_contact())
        return 1;
    return 0;
}

// Fonction utile a search()
// Ajoute des espaces en fonction du nb de caracteres
void    add_space(std::string str)
{
    int i=0;

    i = str.length();
    while (10-i > 0)
    {
        std::cout << " ";
        i ++;
    }
}

// Fonction utile a index_stuff()
// Transforme une string to un int
int    string_to_int(std::string elmt)
{
    const char* cstr;

    cstr = elmt.c_str();
    return (std::atoi(cstr));
}

// Fonction utile a index_stuff()
// Check si l'index est valide ou non
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

/*  Fonction specifique de search()
    Demande l'index du contact a visualiser.
    Check si il est valide: -> si oui, affiche les infos du contact
                            -> si non, redemande un index
*/
int    PhoneBook::index_stuff(int len)
{
    std::string i_var;
    int         nb;

    std::cout << std::endl;
    std::cout << "\x1b[1mIndex : \x1b[0m";
    if (!std::getline(std::cin, i_var) || std::cin.eof())
    {
        std::cout << "\x1b[31;1mERROR\x1b[0m" << std::endl;
        return 1;
    }
    if (is_it_digit(i_var, len))
    {
        nb = string_to_int(i_var) -1;
        std::cout << "\t├─\x1b[36;1mName           \x1b[0m: " << contact[nb].get_name() << std::endl;
        std::cout << "\t├─\x1b[36;1mLastname       \x1b[0m: " << contact[nb].get_lastname() << std::endl;
        std::cout << "\t├─\x1b[36;1mNickname       \x1b[0m: " << contact[nb].get_nickname() << std::endl;
        std::cout << "\t├─\x1b[36;1mPhone number   \x1b[0m: " << contact[nb].get_phone() << std::endl;
        std::cout << "\t└─\x1b[36;1mDarkest secret \x1b[0m: " << contact[nb].get_secret() << std::endl;
        while (i_var != "Y" && i_var != "N")
        {
            std::cout << "\n └────────> Another index ? (Y/N)";
            if (!std::getline(std::cin, i_var) || std::cin.eof())
            {
                std::cout << "\x1b[31;1mERROR\x1b[0m" << std::endl;
                return 1;
            }
            if (i_var == "N")
                return 0;
            else if (i_var == "Y")
            {
                if (index_stuff(len))
                    return 1;
            }
        }
    }
    else
    {
        std::cout << "\x1b[31;1mERROR : Invalid index.\x1b[0m" << std::endl;
        if (index_stuff(len))
            return 1;
    }
    return 0;
}
/*  Fonction utile a search()
    Check si, lors de l'affichage, la string ne depasse pas 10 caracteres.
    Si oui, on remplace le dernier par un .
    Si non, afficher la string
*/
void is_more_than_ten(std::string str)
{
    add_space(str);
    if (str.length() <= 10)
        std::cout << str;
    else
        std::cout << str.substr(0, 9) << ".";
}

/*  Methode search() de la classe PhoneBook
    Affiche l'annuaire des contacts
    Propose des index pour afficher toutes les informations du contact lie 
        a l'index demande par l'utilisateur
*/
int    PhoneBook::search()
{
    int i=0;

    if (contact[i].get_name().empty())
    {
        std::cout << std::endl;
        std::cout << "\t\x1b[32;1mNo contacts registered in the phonebook, please create a new one.\x1b[0m\n" << std::endl;
        return 0;
    }
    std::cout << "\n\t┌──────────┬──────────┬──────────┬──────────┐" << std::endl;
    std::cout << "\t│     \x1b[36;1mIndex\x1b[0m│      \x1b[36;1mName\x1b[0m│  \x1b[36;1mLastname\x1b[0m│  \x1b[36;1mNickname\x1b[0m│" << std::endl;
    std::cout << "\t├──────────┼──────────┼──────────┼──────────┤" << std::endl;
    while (i < MAX_VALUE && !contact[i].get_name().empty())
    {
        std::cout << "\t│         " << i + 1 << "│";
        is_more_than_ten(contact[i].get_name());
        std::cout << "│" ;
        is_more_than_ten(contact[i].get_lastname());
        std::cout << "│" ;
        is_more_than_ten(contact[i].get_nickname());
        std::cout << "│" << std::endl;
        i ++;
    }
    std::cout << "\t└──────────┴──────────┴──────────┴──────────┘" << std::endl;
    if (index_stuff(i))
        return 1;
    return 0;
}

//Destructeur de PhoneBook
PhoneBook::~PhoneBook()
{
}