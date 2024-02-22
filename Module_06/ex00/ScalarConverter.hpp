#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

# include <iostream>
# include <string>
# include <cctype>
# include <stdlib.h>

# define INT_MAX 2147483647
# define INT_MIN -2147483648
# define FLOAT_MIN 1.175494351e-38
# define FLOAT_MAX 3.402823466e+38
# define DOUBLE_MIN 2.2250738585072014e-308
# define DOUBLE_MAX 1.7976931348623158e+308

class ScalarConverter
{
    private :
        ScalarConverter(void);
        ScalarConverter(const ScalarConverter& copy);
        ScalarConverter& operator=(const ScalarConverter& bis);
        ~ScalarConverter(void);

    public :
        static void convert(std::string str);
};

void    print_double(double d);
void    print_int(int i);
void    print_char(char c);
void    print_float(float f);
void    print_nan(void);
void    print_inf(char c);
void    print_double_zero(double d);
void    print_float_zero(float f);
void    print_int_float_double(int i, float f, double d, int cod);

int     is_nan(std::string str);
int     is_int(std::string str);
int     is_double(std::string str);
int     is_float(std::string str);
int     is_char(std::string str);

#endif