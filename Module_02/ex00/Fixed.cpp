# include "Fixed.hpp"

Fixed::Fixed(void): _fixedValue(0)
{
    std::cout << "\x1b[33;1mDefault Constructor called\x1b[0m" << std::endl;
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "\x1b[33mCopy Constructor called\x1b[0m" << std::endl;
    *this = copy;
}

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (_fixedValue);
}

void    Fixed::setRawBits(int const raw)
{
    _fixedValue = raw;
}

Fixed&  Fixed::operator=(const Fixed& bis)
{
    std::cout << "Copy assignement operator called" << std::endl;
    this->_fixedValue = bis.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "\x1b[31;1mDestructor called\x1b[0m" << std::endl;
}
