#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(const std::string& name) :
	_name(name), _health(10), _energy(10), _attack(0), _max_health(10)
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
		this->_health = rhs._health;
		this->_energy = rhs._energy;
		this->_attack = rhs._attack;
		this->_max_health = rhs._max_health;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (!this->_energy || !this->_health) {
		std::cout << "ClapTrap " << this->_name << " can't attack: ";
		return this->errorStatus();
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
	if (!this->_energy || !this->_health) {
		std::cout << "ClapTrap " << this->_name << " can't repair: ";
		return this->errorStatus();
	}
	std::cout << "ClapTrap " << this->_name << " is repairing ";
	std::cout << amount << " points of health" << std::endl;
	this->_energy--;
	this->_health += amount;
	if (this->_health > this->_max_health)
		this->_health = this->_max_health;
}

void	ClapTrap::errorStatus()
{
	if (!this->_health)
		std::cout << "too severely damaged." << std::endl;
	if (!this->_energy)
		std::cout << "out of energy." << std::endl;
}
