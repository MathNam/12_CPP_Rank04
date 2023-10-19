#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor called" << std::endl;
	this->_type = "";
}

Animal::Animal(const Animal &toCopy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = toCopy;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

void	Animal::makeSound(void) const
{}

const std::string 	&Animal::getType() const
{
	return this->_type;
}
