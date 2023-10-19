#include "Fixed.hpp"
#include <cmath>
#include <math.h>

Fixed::Fixed() : _fixedPointValue(0)
{}

Fixed::Fixed(const Fixed &toCopy)
{
	*this = toCopy;
}

Fixed::Fixed(const int number) : _fixedPointValue(number << this->_fractionalBits)
{}

Fixed::Fixed(const float number) : _fixedPointValue(roundf(number * pow(2, this->_fractionalBits)))
{}

Fixed::~Fixed()
{}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	if (this != &rhs)
		this->_fixedPointValue = rhs._fixedPointValue;
	return *this;
}

// comparison operators

bool	Fixed::operator>(const Fixed &rhs) const
{
	return this->getRawBits() > rhs.getRawBits();
}

bool	Fixed::operator<(const Fixed &rhs) const
{
	return this->getRawBits() < rhs.getRawBits();
}

bool	Fixed::operator>=(const Fixed &rhs) const
{
	return this->getRawBits() >= rhs.getRawBits();
}

bool	Fixed::operator<=(const Fixed &rhs) const
{
	return this->getRawBits() <= rhs.getRawBits();
}

bool	Fixed::operator==(const Fixed &rhs) const
{
	return this->getRawBits() == rhs.getRawBits();
}

bool	Fixed::operator!=(const Fixed &rhs) const
{
	return this->getRawBits() != rhs.getRawBits();
}

// arithmetic operators

Fixed	Fixed::operator+(const Fixed &rhs)
{
	Fixed result;

	result.setRawBits(this->toFloat() + rhs.toFloat());
	return result;
}

Fixed	Fixed::operator-(const Fixed &rhs)
{
	Fixed result;

	result.setRawBits(this->toFloat() - rhs.toFloat());
	return result;
}

Fixed	Fixed::operator*(const Fixed &rhs)
{
	Fixed result(this->toFloat() * rhs.toFloat());
	return result;
}

Fixed	Fixed::operator/(const Fixed &rhs)
{
	Fixed result(this->toFloat() / rhs.toFloat());
	return result;
}

// increment operators

//pre-increment
Fixed	&Fixed::operator++()
{
	++this->_fixedPointValue;
	return *this;
}

Fixed	&Fixed::operator--()
{
	--this->_fixedPointValue;
	return *this;
}

//post-increment
Fixed	Fixed::operator++(int)
{
	Fixed old = *this;
	++(*this);
	return old;
}

Fixed	Fixed::operator--(int)
{
	Fixed old = *this;
	++(*this);
	return old;
}

std::ostream &operator << (std::ostream &flux, const Fixed &fixed)
{
	flux << fixed.toFloat();
	return flux;
}

int	Fixed::getRawBits(void) const
{
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
	return this->_fixedPointValue / roundf(pow(2, this->_fractionalBits));
}

Fixed	&Fixed::min(Fixed &lhs, Fixed &rhs)
{
	if (lhs < rhs)
		return lhs;
	return rhs;
}

Fixed	const &Fixed::min(const Fixed &lhs, const Fixed &rhs)
{
	if (lhs < rhs)
		return rhs;
	return rhs;
}

Fixed	&Fixed::max(Fixed &lhs, Fixed &rhs)
{
	if (lhs > rhs)
		return lhs;
	return rhs;
}

Fixed	const &Fixed::max(const Fixed &lhs, const Fixed &rhs)
{
	if (lhs > rhs)
		return lhs;
	return rhs;
}
