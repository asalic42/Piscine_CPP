# include "Fixed.hpp"

//Forme canonique/Coplien
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

Fixed::~Fixed()
{
    std::cout << "\x1b[31;1mDestructor called\x1b[0m" << std::endl;
}

//Get 'n Set
int     Fixed::getRawBits(void) const
{
    return (_fixedValue);
}

void    Fixed::setRawBits(int const raw)
{
    _fixedValue = raw;
}

//Transformations
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

//Surcharges d'operateurs
Fixed&  Fixed::operator=(const Fixed& bis)
{
    std::cout << "Copy assignement operator called" << std::endl;
    this->_fixedValue = bis.getRawBits();
    return *this;
}

//Operateurs de comparaisons
bool   Fixed::operator>(const Fixed& instance)
{
    return (this->_fixedValue > instance.getRawBits());
}

bool   Fixed::operator>=(const Fixed& instance)
{
    return (this->_fixedValue >= instance.getRawBits());
}

bool   Fixed::operator<(const Fixed& instance)
{
    return (this->_fixedValue < instance.getRawBits());
}

bool   Fixed::operator<=(const Fixed& instance)
{
    return (this->_fixedValue <= instance.getRawBits());
}

bool	Fixed::operator==(const Fixed& instance)
{
    return (this->_fixedValue == instance.getRawBits());
}

bool	Fixed::operator!=(const Fixed& instance)
{
    return (this->_fixedValue != instance.getRawBits());
}

//Operateurs arithmetiques
Fixed   Fixed::operator+(Fixed& instance)
{
    this->_fixedValue += instance.getRawBits();
    return *this;
}

Fixed   Fixed::operator-(Fixed& instance)
{
    this->_fixedValue -= instance.getRawBits();
    return *this; 
}

Fixed   Fixed::operator/(Fixed& instance)
{
    this->_fixedValue /= instance.getRawBits(); //wtf?!
    return *this;
}

Fixed   Fixed::operator*(Fixed& instance)
{
    std::cout << instance.getRawBits() << std::endl; //wtf?!
    this->_fixedValue *= instance.getRawBits();
    return *this;
}

std::ostream&    operator<<(std::ostream& out, const Fixed& instance)
{
    out << instance.toFloat();
    return (out);
}

