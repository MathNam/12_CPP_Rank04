#include "Dog.hpp"

Dog::Dog(): Animal()
{
	std::cout << "Dog constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(const Dog &toCopy): Animal()
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = toCopy;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &rhs)
{
	if (this != &rhs)
	{
		*this = rhs;
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "woof" << std::endl;
}
