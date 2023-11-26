#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animals.hpp"

class Cat : virtual public Animals
{
	public :
		Cat(void);
    	Cat(const Cat &copy);
    	Cat& operator=(const Cat &bis);
    	~Cat(void);

		virtual void	makeSound(void);
};

#endif