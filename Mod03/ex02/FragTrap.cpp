#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap " << name << " created" << std::endl;
	this->_health = 100;
	this->_energy = 100;
	this->_attack = 30;
	this->_max_health = 100;
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
		this->_health = rhs._health;
		this->_energy = rhs._energy;
		this->_attack = rhs._attack;
		this->_max_health = rhs._max_health;
	}
	return (*this);
}

void	FragTrap::highFivesGuys()
{
	std::cout << "Positive high five request" << std::endl;
}
