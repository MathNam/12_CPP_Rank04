#include <iostream>
#include "Point.hpp"

int main( void )
{
	const Point a(-2, 0);
	const Point b(5.0, 5.0);
	const Point c(5.0, -5);
	const Point p(-2, 0);

	std::cout << bsp(a, b, c, p) << std::endl;

	const Point a1(-1, 0);
	const Point b1(5.0, 5.0);
	const Point c1(5.0, -5);
	const Point p1(0, 0);

	std::cout << bsp(a1, b1, c1, p1) << std::endl;

	const Point a2(0, 0);
	const Point b2(5.0, 5.0);
	const Point c2(5.0, -5);
	const Point p2(2, 2);

	std::cout << bsp(a2, b2, c2, p2) << std::endl;

	return 0;
}
