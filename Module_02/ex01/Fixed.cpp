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

Fixed::Fixed(const int valueInt)
{
    std::cout << "Int Constructor called" << std::endl;
    this->_fixedValue = valueInt * (1 << _bits);
}

Fixed::Fixed(const float valueFloat)
{
    std::cout << "Float Constructor called" << std::endl;
    this->_fixedValue = roundf(valueFloat * (1 << _bits));
}

int     Fixed::getRawBits(void) const
{
    return (_fixedValue);
}

void    Fixed::setRawBits(int const raw)
{
    _fixedValue = raw;
}

int     Fixed::toInt(void) const
{
    int   fixedToInt = this->_fixedValue >> this->_bits;
    return (fixedToInt);
}

float   Fixed::toFloat(void) const
{
    float   fixedToFloat = _fixedValue / (float)(1 << _bits);
    return (fixedToFloat);
}

Fixed&  Fixed::operator=(const Fixed& bis)
{
    std::cout << "Copy assignement operator called" << std::endl;
    this->_fixedValue = bis.getRawBits();
    return *this;
}

std::ostream&    operator<<(std::ostream& out, const Fixed& instance)
{
    out << instance.toFloat();
    return (out);
}

Fixed::~Fixed()
{
    std::cout << "\x1b[31;1mDestructor called\x1b[0m" << std::endl;
}
