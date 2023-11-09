#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << name << " created" << std::endl;
	this->_health = 100;
	this->_energy = 50;
	this->_attack = 20;
	this->_max_health = 100;
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
		this->_health = rhs._health;
		this->_energy = rhs._energy;
		this->_attack = rhs._attack;
		this->_max_health = rhs._max_health;
	}
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (!this->_energy || !this->_health) {
		std::cout << "ScavTrap " << this->_name << " can't attack:";
		return this->errorStatus();
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target;
	std::cout << ", causing " << this->_attack << " points of damage!" << std::endl;
	this->_energy--;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}
