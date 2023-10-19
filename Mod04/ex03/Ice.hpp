#ifndef ICE_H
# define ICE_H

#include "AMateria.hpp"

class Ice: public AMateria
{
public:

	Ice();
	Ice(const Ice &toCopy);
	virtual ~Ice();

	Ice	&operator=(const Ice &rhs);

	virtual AMateria*	clone() const;
	virtual void		use(ICharacter &target);

protected:

};
#endif
