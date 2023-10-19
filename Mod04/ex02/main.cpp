#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	{
		const A_Animal meta;
		const A_Animal* j = new Dog();
		const A_Animal* i = new Cat();
		std::cout << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		std::cout << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		std::cout << std::endl;

		delete i;
		delete j;
	}
	return 0;
}
