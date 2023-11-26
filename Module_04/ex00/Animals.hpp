#ifndef ANIMALS_HPP
# define ANIMALS_HPP

# include <iostream>
# include <string>

class Animals
{
    public : 
        Animals(void);
    	Animals(const Animals &copy);
    	Animals& operator=(const Animals &bis);
    	~Animals(void);

		virtual void	makeSound(void);
	
	protected :
		std::string _type;

};

#endif