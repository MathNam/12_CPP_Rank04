#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
public:

	Fixed();
	Fixed(const Fixed &toCopy);
	Fixed(const int number);
	Fixed(const float number);
	~Fixed();

	Fixed &operator = (const Fixed &toAssign);

	int		getRawBits(void) const;
	void	setRawBits(const int &raw);
	int		toInt() const;
	float	toFloat() const;

private:

	int					_fixedPointValue;
	static const int	_fractionalBits = 8;
};

std::ostream &operator << (std::ostream &flux, const Fixed &fixed);

#endif
