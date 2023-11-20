# include "Fixed.hpp"

int main( void )
{
    Fixed a(8);
    Fixed b(2);
    Fixed c(a / b);
    // Fixed const b( Fixed(5) * Fixed(2) );

    // std::cout << c.getRawBits() << std::endl;
    // std::cout << ++a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a++ << std::endl;
    // std::cout << a << std::endl;
    std::cout << c << std::endl;
    // std::cout << Fixed::max( a, b ) << std::endl;
    return 0;
}