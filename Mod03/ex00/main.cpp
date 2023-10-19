#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("1");
	ClapTrap b("2");

	a.attack("target");
	a.takeDamage(20);
	for (int i = 0; i < 13; i++)
	{
		a.attack("test");
	}

	std::cout << std::endl;

	b.takeDamage(9);
	for (int i = 0; i < 13; i++)
	{
		b.beRepaired(1);
	}
	return (0);
}
