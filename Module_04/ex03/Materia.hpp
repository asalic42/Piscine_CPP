#ifndef MATERIA_HPP
# define MATERIA_HPP

# include <iostream>
# include "Character.hpp"

class AMateria
{
    protected :

    public :
        AMateria(std::string const& type);
        AMateria(const AMateria& copy);
        AMateria&   operator=(const AMateria& bis);
        ~AMateria(void);

        const std::string& getType(void) const;

        virtual AMateria*   clone(void) const = 0; 
        virtual void        use(ICharacter& target);
};

class IMateriaSource
{
    public :
        virtual ~IMateriaSource(void);
        virtual void    learnMateria(AMateria *) = 0;
        virtual AMateria*   createMateria(std::string const& type);
};

#endif