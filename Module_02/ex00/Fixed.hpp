#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
    private:
		int					_fixedValue;
		static const int	_bits=8;
    public:
        Fixed(void);
		Fixed(const Fixed& copy);
		Fixed&	operator=(const Fixed&bis);
        ~Fixed(void);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};
#endif