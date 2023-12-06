#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp" 

class Cure : public AMateria
{
    public :
        Cure();
        Cure(const Cure &cpy);
        ~Cure(void);
        Cure&   operator=(const Cure& bis);
        virtual AMateria*    clone(void) const;
};

#endif