#include "Dog.hpp"
#include "Cat.hpp"

#include <cstdlib>

int main()
{
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//should not create a leak
		delete i;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	{
		const Animal	*array[10];
		for (int i = 0; i < 10; i += 2)
		{
			array[i] = new Dog();
			array[i + 1] = new Cat();
		}
		for (int i = 0; i < 10; i += 2)
		{
			std::cout << std::endl;
			std::cout << "Animal type = " << array[i]->getType() << std::endl;
			array[i]->makeSound();
			std::cout << std::endl;
			std::cout << "animal type = " << array[i + 1]->getType() << std::endl;
			array[i + 1]->makeSound();
			std::cout << std::endl;
		}
		std::cout << std::endl;
		for (int i = 0; i < 10; i ++)
			delete array[i];
	}
	std::cout << std::endl;
	std::cout << std::endl;
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

		// Dog *b = new Dog;
		// *b = *a;

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
