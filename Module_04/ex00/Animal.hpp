#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

# define RED "\x1b[31m"
# define BLUE "\x1b[34m"
# define YELLOW "\x1b[33m"
# define B_GREEN "\x1b[32;1m"
# define B_PURP "\x1b[35;1m"
# define B_CYAN "\x1b[36;1m"
# define NC "\x1b[0m"

class Animal
{
    public : 
        Animal(void);
    	Animal(const Animal &copy);
    	Animal& operator=(const Animal &bis);
    	virtual ~Animal(void);

		virtual void			makeSound(void) const;
		virtual std::string		getType(void) const;
	
	protected :
		std::string		_type;

};

class	WrongAnimal
{
	public : 
        WrongAnimal(void);
    	WrongAnimal(const WrongAnimal &copy);
    	WrongAnimal& operator=(const WrongAnimal &bis);
    	virtual ~WrongAnimal(void);

		void			makeSound(void) const;
		std::string		getType(void) const;
	
	protected :
		std::string		_type;
};

#endif