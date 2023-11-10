#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap a("1");
	FragTrap b("2");

	a.attack("Target");
	a.takeDamage(5);
	for (int i = 0; i < 4; i++)
		a.attack("Enemy");
	a.takeDamage(15);
	a.takeDamage(15);
	a.takeDamage(15);
	a.highFivesGuys();
	a.takeDamage(15);
	a.takeDamage(15);
	a.takeDamage(15);
	a.takeDamage(15);
	a.attack("test");
	a.beRepaired(15);

	a.highFivesGuys();
	std::cout << std::endl;

	b.takeDamage(9);
	for (int i = 0; i < 101; i++)
		b.beRepaired(1);
	return (0);
}
