#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
    std::cout << "Je construis l'instance" << std::endl;
}

void    PhoneBook::add()
{
    int i=0;

    while (this->contact[i].name[0] != '\0')
        i ++;
    this->contact[i].new_contact();
}

void    add_space(char *str)
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

void    PhoneBook::search()
{
    int i=0;

    std::cout << "Je vais search la" << std::endl;
    std::cout << "|Index     |Name      |Lastname  |Nickname  |" << std::endl;
    std::cout << "_____________________________________________" << std::endl;
    while (this->contact[i].name[0])
    {
        std::cout << "|" << i + 1 << "         ";
        std::cout << "|" << this->contact[i].name;
        add_space(this->contact[i].name);
        std::cout << "|" << this->contact[i].lastname;
        add_space(this->contact[i].lastname);
        std::cout << "|" << this->contact[i].nickname;
        add_space(this->contact[i].nickname);
        std::cout << "|" << std::endl;
        i ++;
    }
}

PhoneBook::~PhoneBook(){
    std::cout << "Je detruis l'instance" << std::endl;
}

Contact::Contact(){
    std::cout << "Je construis l'instance contact" << std::endl;
}

void    Contact::new_contact(){
    std::cout << "Name : ", std::cin >> this->name;
    std::cout << "Lastname : ", std::cin >> this->lastname;
    std::cout << "Nickname : ", std::cin >> this->nickname;
    std::cout << "Phone number : ", std::cin >> this->phone_number;
    std::cout << "Darkest secret : ", std::cin >> this->darkest_secret;
}

Contact::~Contact(){
    std::cout << "Je detruis l'instance" << std::endl;
}
