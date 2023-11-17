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
		Fixed(const int valueInt); // conv. en virgule fixe
		Fixed(const float valueFloat); // same
		Fixed(const Fixed& copy);
		Fixed&	operator=(const Fixed& bis);
        ~Fixed(void);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const; //convertit _fixedValue en float
		int		toInt(void) const; //convertit _fixedValue en int
};

std::ostream&	operator<<(std::ostream &out, const Fixed& instance);

#endif