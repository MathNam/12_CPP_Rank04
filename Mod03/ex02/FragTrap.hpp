#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:

	FragTrap(std::string name);
	FragTrap(const FragTrap &toCopy);
	~FragTrap();

	FragTrap	&operator=(const FragTrap &rhs);

	void	highFivesGuys(void);

};
#endif
