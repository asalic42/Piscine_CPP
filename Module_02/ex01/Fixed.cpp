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

Fixed::Fixed(const int valueInt) : _fixedValue(static_cast<int>(valueInt*100.0))
{
    std::cout << "Int Constructor called" << std::endl;
}

Fixed::Fixed(const float valueFloat) : _fixedValue(static_cast<float>(valueFloat*100.0f))
{
    std::cout << "Float Constructor called" << std::endl;
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

int     Fixed::toInt(void) const
{
    int   fixedToInt = _fixedValue / 100.0 ;
    return (fixedToInt);
}

float   Fixed::toFloat(void) const
{
    float   fixedToFloat = _fixedValue/100.0f;
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
