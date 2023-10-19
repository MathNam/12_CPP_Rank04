#include <iostream>
#include "Point.hpp"

int main( void )
{
	const Point a(0.0, 0.0);
	const Point b(1.0, 5.0);
	const Point c(3.0, 3.0);
	const Point point(3, 3);

	std::cout << bsp(a, b, c,point) << std::endl;

	return(0);
}
