#ifndef ANIMALS_HPP
# define ANIMALS_HPP

# include <iostream>
# include <string>

class Animals
{
    public : 
        Animals(void);
        Animals(std::string type);
    	Animals(const Animals &copy);
    	Animals& operator=(const Animals &bis);
    	~Animals(void);
	
	protected :
		std::string type;

};

class Dog : virtual public Animals
{
	public :
		Dog(void);
        Dog(std::string type);
    	Dog(const Dog &copy);
    	Dog& operator=(const Dog &bis);
    	~Dog(void);
};

class Cat : virtual public Animals
{
	public :
		Cat(void);
        Cat(std::string type);
    	Cat(const Cat &copy);
    	Cat& operator=(const Cat &bis);
    	~Cat(void);
};

#endif