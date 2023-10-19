#include <iostream>
#include "Zombie.h"

int main()
{
	Zombie zombie("test1");
	Zombie zombie1("test2");
	Zombie zombie2("test3");
	zombie.announce();
	zombie2.announce();
	zombie1.announce();

	Zombie *zombie3 = newZombie("newTest");
	zombie3->announce();

	randomChump("randomChump");

	delete zombie3;
	return (0);
}
