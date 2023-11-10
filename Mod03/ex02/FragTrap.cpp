#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap " << name << " created" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDmg = 30;
	this->_max_hitPoints = 100;
}

FragTrap::FragTrap(const FragTrap &toCopy): ClapTrap(toCopy._name)
{
	*this = toCopy;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " destroyed" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &rhs)
{
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDmg = rhs._attackDmg;
		this->_max_hitPoints = rhs._max_hitPoints;
	}
	return (*this);
}

void	FragTrap::highFivesGuys()
{
	if (this->_hitPoints == 0)
		std::cout << "Fragtrap " << this->_name
			<< " remembers it doesn't have any arms left" << std::endl;
	else
		std::cout << "Fragtrap " << this->_name << "request a high five." << std::endl;
}
