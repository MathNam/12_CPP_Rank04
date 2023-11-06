#include "Point.hpp"

Fixed triangle_area(Point const a, Point const b, Point const c)
{
	float	area = (a.getX() * (b.getY() - c.getY())
		+ b.getX() * (c.getY() - a.getY())
		+ c.getX() * (a.getY() - b.getY())) / 2;
	return Fixed(std::fabs(area));
}

bool bsp(Point const a, Point const b, Point const c, Point const p)
{
	Fixed	area = triangle_area(a, b, c);

	Fixed	areaPAB = triangle_area(p, a, b);
	Fixed	areaPBC = triangle_area(p, b, c);
	Fixed	areaPAC = triangle_area(p, a, c);

	Fixed	sum = areaPAB + areaPBC + areaPAC;

	if (areaPAB != 0 && areaPBC != 0 && areaPBC != 0
		&& areaPAB + areaPBC + areaPAC <= area)
		return (1);
	return (0);
}
