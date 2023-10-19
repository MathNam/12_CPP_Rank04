#include <iostream>
#include "Zombie.h"

int	main()
{
	Zombie	zombie0("Z0");
	Zombie	zombie1("Z1");
	Zombie	zombie2("Z2");
	zombie0.announce();
	zombie1.announce();
	zombie2.announce();

	Zombie	*zombie3 = newZombie("Znew");
	zombie3->announce();

	randomChump("Zrandom");

	delete zombie3;
	return (0);
}
