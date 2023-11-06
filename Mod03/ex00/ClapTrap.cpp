#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(const std::string &name) : _name(name), _health(10), _energy(10), _attack(0)
{
	std::cout << "ClapTrap " << name << " created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &toCopy)
{
	*this = toCopy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " destroyed" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &rhs)
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}


void	ClapTrap::attack(const std::string &target)
{
	if (!this->_energy || !this->_health)
	{
		std::cout << "ClapTrap " << this->_name << " can't attack :";
		this->errorStatus();
		return;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target;
	std::cout << ", causing " << this->_attack << " points of damage!" << std::endl;
	this->_energy--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " received ";
	std::cout << amount << " points of damage!" << std::endl;
	if (amount < this->_health)
		this->_health -= amount;
	else
		this->_health = 0;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->_energy || !this->_health)
	{
		std::cout << "ClapTrap " << this->_name << " can't repair :";
		this->errorStatus();
		return;
	}
	std::cout << "ClapTrap " << this->_name << " is repairing ";
	std::cout << amount << " points of health" << std::endl;
	this->_energy--;
	this->_health += amount;
	if (this->_health > 10)
		this->_health = 10;
}

void	ClapTrap::errorStatus()
{
	if (!this->_health)
	{
		std::cout << " out of health" << std::endl;
		return;
	}
	std::cout << " out of energy" << std::endl;
}
