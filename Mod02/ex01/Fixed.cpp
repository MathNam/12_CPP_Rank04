#include "Fixed.hpp"
#include <math.h>

Fixed::Fixed() : _fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &toCopy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fixedPointValue = toCopy._fixedPointValue;
}

Fixed::Fixed(const int number)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointValue = number << this->_fractionalBits;
}

Fixed::Fixed(const float number)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointValue = roundf(number * pow(2.0, (float)this->_fractionalBits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator = (const Fixed &toAssign)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &toAssign)
		return *this;
	this->_fixedPointValue = toAssign._fixedPointValue;
	return *this;
}

std::ostream &operator << (std::ostream &flux, const Fixed &fixed)
{
	flux << fixed.toFloat();
	return flux;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPointValue;
}

void	Fixed::setRawBits(const int &raw)
{
	this->_fixedPointValue = raw;
}

int	Fixed::toInt() const
{
	return this->_fixedPointValue >> this->_fractionalBits;
}

float	Fixed::toFloat() const
{
	return this->_fixedPointValue / roundf(pow(2.0, (float)this->_fractionalBits));
}
