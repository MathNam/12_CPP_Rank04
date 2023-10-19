#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called" << std::endl;
	this->_type = "";
}

WrongAnimal::WrongAnimal(const WrongAnimal &toCopy)
{
	*this = toCopy;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &rhs)
{
	if (this != &rhs)
	{
		*this = rhs;
	}
	return *this;
}

void	WrongAnimal::makeSound(void) const
{}

const std::string 	&WrongAnimal::getType() const
{
	return this->_type;
}
