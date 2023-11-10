#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &name): ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	std::cout << "DiamondTrap " << name << " created" << std::endl;
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDmg = FragTrap::_attackDmg;
	this->_max_hitPoints = FragTrap::_max_hitPoints;
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
	if (this != &rhs) {
		ClapTrap::_name = rhs.ClapTrap::_name;
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDmg = rhs._attackDmg;
		this->_max_hitPoints = rhs._max_hitPoints;
	}
	return (*this);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is " << this->_name << std::endl;
	std::cout << "ClapTrap name is " << ClapTrap::_name << std::endl;
}
