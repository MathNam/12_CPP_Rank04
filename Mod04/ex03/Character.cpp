#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(std::string const &name): _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(const Character &toCopy)
{
	std::cout << "Character copy constructor called" << std::endl;
	*this = toCopy;
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->_inventory[i];
}

Character	&Character::operator=(const Character &rhs)
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

std::string const	&Character::getName() const
{
	return this->_name;
}

void				Character::equip(AMateria* m)
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
	std::cout << "Can't equip : inventory full" << std::endl;
}

void				Character::unequip(int idx)
{
	if(idx < 0 || idx > 3)
	{
		std::cout << "Can't unequip : slot out of range" << std::endl;
		return;
	}
	if (!this->_inventory[idx])
	{
		std::cout << "Can't unequip : slot is empty" << std::endl;
	}
	this->_inventory[idx] = NULL;
}

void				Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Can't use : slot out of range";
		return;
	}
	if (!this->_inventory[idx])
	{
		std::cout << "Can't use : slot is empty";
		return;
	}
	this->_inventory[idx]->use(target);
}
