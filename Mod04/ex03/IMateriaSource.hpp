#ifndef IMATERIASOURCE_H
# define IMATERIASOURCE_H

#include "AMateria.hpp"

class IMateriaSource {
public:
	virtual ~IMateriaSource() {}
	virtual void		learnMateria(AMateria*) = 0;
<<<<<<< HEAD
	virtual AMateria*	createMateria(std::string const & type) = 0;
=======
	virtual AMateria*	createMateria(std::string const& type) = 0;
>>>>>>> d2eab818d5df19d483721b11bcb80213f9c6d906
};

#endif
