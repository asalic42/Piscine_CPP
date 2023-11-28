#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : virtual public Animal
{
	public :
		Dog(void);
    	Dog(const Dog &copy);
    	Dog& operator=(const Dog &bis);
    	~Dog(void);

		virtual void		makeSound(void) const;
		virtual std::string getType(void) const;
		Brain				*getBrain(void);
	
	private :
		Brain	*brainD;
};

#endif