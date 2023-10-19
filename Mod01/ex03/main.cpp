#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
	std::cout << "===== subject main =====" << std::endl;
	std::cout << std::endl;
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "===== no weapon test =====" << std::endl;
	std::cout << std::endl;
	{
		HumanB test("test");
		test.attack();
		Weapon weapon("weapon");
		test.setWeapon(weapon);
		test.attack();
	}
	return 0;
}
