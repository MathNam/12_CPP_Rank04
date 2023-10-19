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

	Fixed	&operator=(const Fixed &rhs);
	bool	operator>(const Fixed &rhs) const;
	bool	operator<(const Fixed &rhs) const;
	bool	operator>=(const Fixed &rhs) const;
	bool	operator<=(const Fixed &rhs) const;
	bool	operator==(const Fixed &rhs) const;
	bool	operator!=(const Fixed &rhs) const;
	Fixed	operator+(const Fixed &rhs);
	Fixed	operator-(const Fixed &rhs);
	Fixed	operator*(const Fixed &rhs);
	Fixed	operator/(const Fixed &rhs);
	Fixed	&operator++();
	Fixed	operator++(int);
	Fixed	&operator--();
	Fixed	operator--(int);

	int			getRawBits(void) const;
	void		setRawBits(const int &raw);
	int			toInt() const;
	float		toFloat() const;

	static Fixed 		&min(Fixed &lhs, Fixed &rhs);
	static Fixed const	&min(const Fixed &lhs, const Fixed &rhs);
	static Fixed 		&max(Fixed &lhs, Fixed &rhs);
	static Fixed const	&max(const Fixed &lhs, const Fixed &rhs);

private:

	int					_fixedPointValue;
	static const int	_fractionalBits = 8;
};
std::ostream &operator << (std::ostream &flux, const Fixed &fixed);

#endif
