#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("1");
	ClapTrap b("2");

	a.attack("target");
	a.takeDamage(5);
	for (int i = 0; i < 4; i++)
		a.attack("test");
	a.takeDamage(15);
	a.attack("test");

	std::cout << std::endl;

	b.takeDamage(9);
	for (int i = 0; i < 13; i++)
		b.beRepaired(4);
	return (0);
}
