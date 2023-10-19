#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	DiamondTrap a("1");
	DiamondTrap b("2");
	DiamondTrap x(a);

	a.whoAmI();
	x.whoAmI();

	std::cout << std::endl;
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
	std::cout << std::endl;
	b.whoAmI();
	std::cout << std::endl;

	return (0);
}
