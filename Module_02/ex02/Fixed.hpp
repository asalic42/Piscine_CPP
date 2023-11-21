#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
    private:
		int					_fixedValue;
		static const int	_bits=8;
    public:
        Fixed(void);
		Fixed(const int valueInt);
		Fixed(const float valueFloat);
		Fixed(const Fixed& copy);
        ~Fixed(void);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		Fixed&	operator=(const Fixed& bis);
		bool	operator>(const Fixed& instance);
		bool	operator>=(const Fixed& instance);
		bool	operator<(const Fixed& instance);
		bool	operator<=(const Fixed& instance);
		bool	operator==(const Fixed& instance);
		bool	operator!=(const Fixed& instance);

        Fixed   operator+(Fixed& instance);
        Fixed	operator*(const Fixed& instance);
		Fixed	operator-(Fixed& instance);
		Fixed	operator/(Fixed& instance);

};

std::ostream&	operator<<(std::ostream &out, const Fixed& instance);

#endif