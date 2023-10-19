#include "Point.hpp"

Point::Point(): _x(0), _y(0)
{}

Point::Point(const float x, const float y): _x(x), _y(y)
{}

Point::Point(const Point &toCopy)
{
	*this = toCopy;
}

Point::~Point()
{}

Point	&Point::operator=(const Point &rhs)
{
	if (this != &rhs)
	{
		this->_x = rhs._x;
		this->_y = rhs._y;
	}
	return *this;
}

float	Point::getX() const
{
	return this->_x.toFloat();
}

float	Point::getY() const
{
	return this->_y.toFloat();
}
