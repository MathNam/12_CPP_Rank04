#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	//const AAnimal* meta = new AAnimal();
	const AAnimal*	j = new Dog();
	const AAnimal*	i = new Cat();
	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	std::cout << std::endl;
	delete i;
	delete j;
	return 0;
}
