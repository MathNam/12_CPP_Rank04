#include "Dog.hpp"
#include "Cat.hpp"

#include <cstdlib>

int main()
{
	std::cout << std::endl << std::endl;
	{
		const Animal	*animalsArr[10];
		for (int i = 0; i < 10; i += 2) {
			animalsArr[i] = new Dog();
			animalsArr[i + 1] = new Cat();
		}
		for (int i = 0; i < 10; i += 2) {
			std::cout << std::endl;
			std::cout << "Animal type = " << animalsArr[i]->getType() << std::endl;
			animalsArr[i]->makeSound();
			std::cout << std::endl;
			std::cout << "animal type = " << animalsArr[i + 1]->getType() << std::endl;
			animalsArr[i + 1]->makeSound();
			std::cout << std::endl;
		}
		std::cout << std::endl;
		for (int i = 0; i < 10; i ++)
			delete animalsArr[i];
	}
	std::cout << std::endl << std::endl;
	{
		std::cout << std::endl << std::endl;
		std::cout << "DEEP COPY TEST" << std::endl;
		std::cout << std::endl;

		Dog *a = new Dog();

		a->setIdea(0, "idea1");
		a->setIdea(1, "idea2");
		a->setIdea(2, "idea3");
		a->setIdea(99, "last idea");
		a->setIdea(101, "out of range");

		Dog *b = new Dog(*a);

		std::cout << std::endl;

		std::cout << "Testing a" << std::endl;
		std::cout << "The " << a->getType() << " a has the following ideas: " << std::endl;
		a->getIdeas();
		std::cout << std::endl;

		std::cout << "Destructing a"<< std::endl;
		delete(a);
		std::cout << std::endl;

		std::cout << "Testing b" << std::endl;
		std::cout << "The " << b->getType() << " b has the following ideas: " << std::endl;
		b->getIdeas();
		std::cout << std::endl;

		std::cout << "Destructing b" << std::endl;
		delete(b);
	}
	return 0;
}
