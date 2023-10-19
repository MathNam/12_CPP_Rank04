#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>

class ClapTrap
{
public:

	ClapTrap(const std::string &name);
	ClapTrap(const ClapTrap &toCopy);
	~ClapTrap();

	ClapTrap	&operator=(const ClapTrap &rhs);

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	errorStatus();

protected:

	std::string		_name;
	unsigned int	_health;
	unsigned int	_energy;
	int				_attack;

};

#endif
