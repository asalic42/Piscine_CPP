#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

# include <iostream>
# include <string>
# include <cctype>
# include <stdlib.h>

class ScalarConverter
{
    private :
        ScalarConverter(void) {};
        ScalarConverter(const ScalarConverter& copy) {(void)copy;};
        ScalarConverter& operator=(const ScalarConverter& bis) {(void)bis; return (*this);};
        ~ScalarConverter(void) {};

    public :
        static void convert(std::string str);
};

#endif