#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap " << name << " created" << std::endl;
	this->_health = 100;
	this->_energy = 100;
	this->_attack = 30;
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
	if (this != &rhs)
		*this = rhs;
	return *this;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "Positive high five request" << std::endl;
}

