#ifndef CURE_H
# define CURE_H

#include "AMateria.hpp"

class Cure : public AMateria
{
public:

	Cure();
	Cure(const Cure &toCopy);
	virtual ~Cure();

	Cure	&operator=(const Cure &rhs);

	virtual AMateria*	clone() const;
	virtual void		use(ICharacter &target);

protected:

};
#endif
