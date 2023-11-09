#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap a("1");
	ScavTrap b("2");

	a.attack("target");
	a.takeDamage(5);
	for (int i = 0; i < 4; i++)
		a.attack("test");
	a.takeDamage(15);
	a.attack("test");

	a.guardGate();
	std::cout << std::endl;

	b.takeDamage(9);
	for (int i = 0; i < 13; i++)
		b.beRepaired(1);
	return (0);
}
