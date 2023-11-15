#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	std::cout << "WrongCat constructor called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& toCopy): WrongAnimal()
{
	*this = toCopy;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << "Blablablabla" << std::endl;
}

const std::string&	WrongCat::getType() const
{
	return this->_type;
}
