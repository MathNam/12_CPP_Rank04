#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDmg(0)
{
	std::cout << "ClapTrap " << name << " created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& toCopy)
{
	*this = toCopy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " destroyed" << std::endl;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const & rhs) {
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDmg = rhs._attackDmg;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (!this->_energyPoints || !this->_hitPoints) {
		std::cout << "ClapTrap " << this->_name << " can't attack: ";
		return this->errorStatus();
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target;
	std::cout << ", causing " << this->_attackDmg << " points of damage!" << std::endl;
	this->_energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " received ";
	std::cout << amount << " points of damage!" << std::endl;
	if (amount < this->_hitPoints)
		this->_hitPoints -= amount;
	else
		this->_hitPoints = 0;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->_energyPoints || !this->_hitPoints) {
		std::cout << "ClapTrap " << this->_name << " can't repair: ";
		return this->errorStatus();
	}
	std::cout << "ClapTrap " << this->_name << " is repairing ";
	std::cout << amount << " points of health" << std::endl;
	this->_energyPoints--;
	this->_hitPoints += amount;
	if (this->_hitPoints > 10)
		this->_hitPoints = 10;
}

void	ClapTrap::errorStatus()
{
	if (!this->_hitPoints)
		std::cout << "too severely damaged." << std::endl;
	if (!this->_energyPoints)
		std::cout << "out of energy." << std::endl;
}
