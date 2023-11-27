#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Cat : virtual public Animal
{
	public :
		Cat(void);
    	Cat(const Cat &copy);
    	Cat& operator=(const Cat &bis);
    	~Cat(void);

		virtual void	makeSound(void) const;
		virtual std::string getType(void) const;
};

class WrongCat : public WrongAnimal
{
	public :
		WrongCat(void);
    	WrongCat(const WrongCat &copy);
    	WrongCat& operator=(const WrongCat &bis);
    	~WrongCat(void);

		void		makeSound(void) const;
		std::string getType(void) const;
};

#endif