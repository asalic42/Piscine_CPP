#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animals.hpp"

class Dog : virtual public Animals
{
	public :
		Dog(void);
    	Dog(const Dog &copy);
    	Dog& operator=(const Dog &bis);
    	~Dog(void);

		virtual void	makeSound(void);
};

#endif