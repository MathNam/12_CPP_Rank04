#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap a("1");
	FragTrap b("2");

	a.attack("target");
	a.takeDamage(20);
	for (int i = 0; i < 13; i++)
	{
		a.attack("test");
	}
	a.highFivesGuys();
	std::cout << std::endl;

	b.takeDamage(9);
	for (int i = 0; i < 13; i++)
	{
		b.beRepaired(1);
	}
	return (0);
}
