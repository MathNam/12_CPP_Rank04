#include "AMateria.hpp"
#include "ICharacter.hpp"

class ICharacter;

AMateria::AMateria(std::string const &type): _type(type)
{
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &toCopy)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = toCopy;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &rhs)
{
	if (this == &rhs)
		return *this;
	*this = rhs;
	return *this;
}

std::string const	&AMateria::getType() const
{
	return this->_type;
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "Amateria " << this->getType() << " used on " << target.getName() << std::endl;
}
