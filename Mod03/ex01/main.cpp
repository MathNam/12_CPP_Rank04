#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap a("1");
	ScavTrap b("2");

	a.attack("Target");
	a.takeDamage(5);
	for (int i = 0; i < 4; i++)
		a.attack("Enemy");
	a.takeDamage(15);
	a.takeDamage(15);
	a.takeDamage(15);
	a.guardGate();
	a.takeDamage(15);
	a.takeDamage(15);
	a.takeDamage(15);
	a.takeDamage(15);
	a.attack("test");

	a.guardGate();
	std::cout << std::endl;

	b.takeDamage(9);
	for (int i = 0; i < 51; i++)
		b.beRepaired(1);
	return (0);
}
