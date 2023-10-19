#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
	std::cout << "Cure default constructor called" << std::endl;
	this->_type = "cure";
}

Cure::Cure(const Cure &toCopy): AMateria(toCopy)
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = toCopy;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure	&Cure::operator=(const Cure &rhs)
{
	if (this != &rhs)
	{
		*this = rhs;
	}
	return *this;
}

AMateria*	Cure::clone() const
{
	return new Cure();
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
