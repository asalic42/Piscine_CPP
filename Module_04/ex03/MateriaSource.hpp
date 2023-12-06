#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

#define NC 		 "\033[0m"
#define CYAN   	 "\033[36;1m"
#define GREEN    "\033[32;1m"
#define RED      "\033[31;1m"

class MateriaSource : public IMateriaSource
{
    private :
        AMateria*    tab[4];

    public : 
        MateriaSource(void);
        MateriaSource(const MateriaSource& copy);
        ~MateriaSource(void);

        MateriaSource&          operator=(const MateriaSource& bis);
        virtual void            learnMateria(AMateria* bis);
        virtual AMateria*       createMateria(std::string const &type);
        int                     countItems();
};

#endif