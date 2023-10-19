#include "MateriaSource.hpp"
#include "ICharacter.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &toCopy)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = toCopy;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->_inventory[i];
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &rhs)
{
	if (this == &rhs)
		return *this;
	for (int i = 0; i < 4; i++)
	{
		//if (this->_inventory[i])
		//	delete this->_inventory[i];
		this->_inventory[i] = rhs._inventory[i];
	}
	return *this;
}

void		MateriaSource::learnMateria(AMateria* m)
{
	int	i = -1;

	while (++i < 4)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			return;
		}
	}
	std::cout << "Can't learn : inventory full" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	int	i = -1;

	while (++i < 4)
	{
		if (this->_inventory[i] && this->_inventory[i]->getType() == type)
			break;
	}
	if (i > 3)
	{
		std::cout << "Can't create : unknown materia" << std::endl;
		return NULL;
	}
	return _inventory[i]->clone();
}
