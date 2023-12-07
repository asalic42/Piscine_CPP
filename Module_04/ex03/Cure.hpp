#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp" 

class Cure : public AMateria
{
    public :
        Cure(void);
        Cure(const Cure &cpy);
        Cure&   operator=(const Cure& bis);
        ~Cure(void);
        virtual AMateria*    clone(void) const;
};

#endif