#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal constructor called" << std::endl;
	this->_type = "";
}

AAnimal::AAnimal(const AAnimal &toCopy)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = toCopy;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal	&AAnimal::operator=(const AAnimal &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

const std::string 	&AAnimal::getType() const
{
	return this->_type;
}
