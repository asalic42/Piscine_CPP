#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>
# include <cctype>
# include <stdlib.h>
# include <stdint.h>
# include "Data.hpp"

# define NC      "\033[0m"
# define RED     "\033[31;1m"
# define GREEN   "\033[32;1m"
# define YELLOW  "\033[33;1m"
# define BLUE    "\033[34;1m"
# define MAGENTA "\033[35;1m"
# define CYAN    "\033[36;1m"
# define WHITE   "\033[37;1m"  

class Serializer
{
    private :
        Serializer(void);
        Serializer(const Serializer& copy);
        Serializer& operator=(const Serializer& bis);
        ~Serializer(void);

    public :
        static uintptr_t    serialize(Data* ptr);
        static Data*        deserialize(uintptr_t raw);
};

#endif