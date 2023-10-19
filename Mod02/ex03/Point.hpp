#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
public:

	Point();
	Point(const float x, const float y);
	Point(const Point &toCopy);
	~Point();

	Point	&operator=(const Point &rhs);
	bool	operator==(const Point &rhs) const;
	bool	operator!=(const Point &rhs) const;
	Point	operator+(const Point &rhs);
	Point	operator-(const Point &rhs);

	float	getX() const;
	float	getY() const;

private:

	Fixed	_x;
	Fixed	_y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
