#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
	std::cout << "Ice default constructor called" << std::endl;
	this->_type = "ice";
}

Ice::Ice(const Ice &toCopy): AMateria(toCopy)
{
	std::cout << "Ice copy constructor called" << std::endl;
	*this = toCopy;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}

Ice	&Ice::operator=(const Ice &rhs)
{
	if (this != &rhs)
	{
		*this = rhs;
	}
	return *this;
}

AMateria*	Ice::clone() const
{
	return new Ice();
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
