#include <iostream>
#include "Point.hpp"

int main( void )
{
	const Point a(-1, 0);
	const Point b(5.0, 5.0);
	const Point c(5.0, -5);
	const Point p(-2, 0);

	std::cout << bsp(a, b, c, p) << std::endl;

	return 0;
}
