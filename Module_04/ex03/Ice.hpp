#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp" 

class Ice : public AMateria
{
    public :
        Ice(void);
        ~Ice(void);
        Ice&   operator=(const Ice& bis);
        Ice(const Ice &cpy);

        virtual AMateria*    clone(void) const;
};

#endif