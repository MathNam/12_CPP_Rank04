#include "Point.hpp"

Fixed triangle_area(Point const a, Point const b, Point const c)
{
	Fixed	area = a.getX() * (b.getY() - c.getY())
		+ b.getX() * (c.getY() - a.getY())
		+ c.getX() * (a.getY() - b.getY()) / 2;
	Fixed	absArea(std::fabs(area.toFloat()));
	return (absArea);
}

bool bsp(Point const a, Point const b, Point const c, Point const p)
{
	Fixed	area = triangle_area(a, b, c);

	Fixed	areaPAB = triangle_area(p, a, b);
	Fixed	areaPBC = triangle_area(p, b, c);
	Fixed	areaPAC = triangle_area(p, a, c);

	std::cout << "area: " << area << std::endl;
	std::cout << "areaPAB: " << areaPAB << std::endl;
	std::cout << "areaPBC: " << areaPBC << std::endl;
	std::cout << "areaPAC: " << areaPAC << std::endl;
	Fixed sum = areaPAB + areaPBC + areaPAC;
	std::cout << "Sum: " << sum << std::endl;

	if (areaPAB != 0 && areaPBC != 0 && areaPBC != 0
		&& areaPAB + areaPBC + areaPAC <= area)
		return (1);
	return (0);
}
