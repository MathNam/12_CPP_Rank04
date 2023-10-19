#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &name): ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	std::cout << "DiamondTrap " << name << " created" << std::endl;
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_health = FragTrap::_health;
	this->_energy = ScavTrap::_energy;
	this->_attack = FragTrap::_attack;
}

DiamondTrap::DiamondTrap(const DiamondTrap &toCopy): ClapTrap(toCopy._name), FragTrap(toCopy._name), ScavTrap(toCopy._name)
{
	*this = toCopy;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << " destroyed" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &rhs)
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is " << this->_name << std::endl;
	std::cout << "ClapTrap name is " << ClapTrap::_name << std::endl;
}
