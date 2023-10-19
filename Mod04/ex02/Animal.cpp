#include "Animal.hpp"

A_Animal::A_Animal()
{
	std::cout << "A_Animal constructor called" << std::endl;
	this->_type = "";
}

A_Animal::A_Animal(const A_Animal &toCopy)
{
	std::cout << "A_Animal copy constructor called" << std::endl;
	*this = toCopy;
}

A_Animal::~A_Animal()
{
	std::cout << "A_Animal destructor called" << std::endl;
}

A_Animal	&A_Animal::operator=(const A_Animal &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

const std::string 	&A_Animal::getType() const
{
	return this->_type;
}
