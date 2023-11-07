#include "PhoneBook.hpp" 

//Gngngn Getter
std::string     Contact::get_name()
{
    return (this->name);
}

std::string     Contact::get_lastname()
{
    return (this->lastname);
}

std::string     Contact::get_nickname()
{
    return (this->nickname);
}

std::string     Contact::get_phone()
{
    return (this->phone_number);
}

std::string     Contact::get_secret()
{
    return (this->darkest_secret);
}

///Gngngn Setter
void	Contact::set_name(std::string str)
{
	this->name = str;
}

void	Contact::set_lastname(std::string str)
{
	this->lastname = str;
}

void	Contact::set_nickname(std::string str)
{
	this->nickname = str;
}

void	Contact::set_phone(std::string str)
{
	this->phone_number = str;
}

void	Contact::set_secret(std::string str)
{
	this->darkest_secret = str;
}

Contact::Contact(){
    std::cout << "Je construis l'instance contact" << std::endl;
}

void    Contact::new_contact()
{
	std::string var;

    std::cout << "Name           : ";
	std::getline(std::cin, var);
	set_name(var);
    std::cout << "Lastname       : ";
	std::getline(std::cin, var);
	set_lastname(var);
    std::cout << "Nickname       : ";
	std::getline(std::cin, var);
	set_nickname(var);
    std::cout << "Phone number   : ";
	std::getline(std::cin, var);
	set_phone(var);
    std::cout << "Darkest secret : ";
	std::getline(std::cin, var);
	set_secret(var);
}

Contact::~Contact(){
    std::cout << "Je detruis l'instance" << std::endl;
}
