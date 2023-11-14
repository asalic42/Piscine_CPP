#include "PhoneBook.hpp" 

// Getter Contact
// Accede aux objets de l'attribut pv
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

// Setter Contact
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

// Constructeur de la classe Contact
Contact::Contact()
{
}

// Fonction utile a new_contact()
// Check si les champs alphabetiques sont bien respectes
bool	is_digit_in_str(std::string str)
{
	if (str[0] == '\0')
	{
		std::cout << "\t\x1b[31;1mERROR : Please, enter something.\x1b[0m" << std::endl;
		return false;
	}
	for (int i=0; str[i]; i++) 
    {
        if (std::isdigit(str[i]))
		{
			std::cout << "\t\x1b[31;1mERROR : Please, enter aphabetic characters.\x1b[0m" << std::endl;
            return false;
		}
		
    }
	return true;
}

bool	is_something(std::string str)
{
	if (str[0] == '\0')
	{
		std::cout << "\t\x1b[31;1mERROR : Please, enter something.\x1b[0m" << std::endl;
		return false;
	}
	return true;
}

// Fonction utils a new_contact()
// Check si le champs "phone number" est a la norme
// Si c'est bien que des chiffres, 10 caracteres, pas plus pas moins
bool	is_str_in_digit(std::string str)
{
	int i=0;

	if (!is_something(str))
		return false;
	while (str[i])
    {
        if (!std::isdigit(str[i]))
		{
			std::cout << "\t\x1b[31;1mERROR : Please, enter numerical characters.\x1b[0m" << std::endl;
            return false;
		}
		i ++;
    }
	if (i != 10)
	{
		std::cout << "\t\x1b[31;1mERROR : Please, enter a phone number of 10 numerical characters.\x1b[0m" << std::endl;
		return false ;
	}
	return true;
}

// Fonction utile a new_contact()
// Affiche les champs a remplir et demande une entree
std::string	enter_contact(std::string phrase)
{
	std::string var;

	std::cout << phrase;
	if (!std::getline(std::cin, var))
		std::exit(1);
	return (var);
}

/* 	Methode de la classe Contact
	Fonction utile a PhoneBook::add()
	Demande a l'utilisateur de remplir les champs de creation de contact.
	Check si les caracteres sont valides ou non.
	Si non, renvoit une erreur et redemande le champs en question
*/
void    Contact::new_contact()
{
	std::string var;

    var = enter_contact("Name           : ");
	while (!is_digit_in_str(var))
		var = enter_contact("Name           : ");
	set_name(var);
	var = enter_contact("Lastname       : ");
	while (!is_digit_in_str(var))
		var = enter_contact("Lastname       : ");
	set_lastname(var);
	var = enter_contact("Nickname       : ");
	while (!is_digit_in_str(var))
		var = enter_contact("Nickname       : ");
	set_nickname(var);
	var = enter_contact("Phone number   : ");
	while (!is_str_in_digit(var))
		var = enter_contact("Phone number   : ");
	set_phone(var);
	var = enter_contact("Darkest secret : ");
	while (!is_something(var))
		var = enter_contact("Darkest secret : ");
	set_secret(var);
}

// Destructeur de la classe Contact
Contact::~Contact()
{
}
