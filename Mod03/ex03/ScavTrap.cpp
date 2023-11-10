#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << name << " created" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDmg = 20;
	this->_max_hitPoints = 100;
}

ScavTrap::ScavTrap(const ScavTrap &toCopy) : ClapTrap(toCopy._name)
{
	*this = toCopy;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " destroyed" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &rhs)
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

void	ScavTrap::attack(const std::string &target)
{
	if (!this->_energyPoints || !this->_hitPoints) {
		std::cout << "ScavTrap " << this->_name << " can't attack:";
		return this->errorStatus();
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target;
	std::cout << ", causing " << this->_attackDmg << " points of damage!" << std::endl;
	this->_energyPoints--;
}

void	ScavTrap::guardGate()
{
	if (this->_hitPoints == 0)
		std::cout << "ScavTrap " << this->_name
			<< " can't guard the gate in its broken state." << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}
