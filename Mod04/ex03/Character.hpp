#ifndef CHARACTER_H
# define CHARACTER_H

#include "ICharacter.hpp"

class Character: public ICharacter
{
public:

	Character(std::string const &name);
	Character(const Character &toCopy);
	virtual ~Character();

	Character	&operator=(const Character &rhs);

	virtual std::string const	&getName() const;
	virtual void				equip(AMateria* m);
	virtual void				unequip(int idx);
	virtual void				use(int idx, ICharacter& target);


protected:

	std::string	_name;
	AMateria	*_inventory[4];

};
#endif
