#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
public:

	DiamondTrap(const std::string &name);
	DiamondTrap(const DiamondTrap &toCopy);
	~DiamondTrap();

	DiamondTrap	&operator=(const DiamondTrap &rhs);

	void	whoAmI();

protected:

	std::string	_name;

};
#endif
