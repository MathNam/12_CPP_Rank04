#include "Cat.hpp"

Cat::Cat(): Animal()
{
	std::cout << "Cat constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat &toCopy): Animal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = toCopy;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &rhs)
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "miaou" << std::endl;
}
;
