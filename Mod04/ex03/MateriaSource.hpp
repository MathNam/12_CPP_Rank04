#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource: public IMateriaSource
{
public:

	MateriaSource();
	MateriaSource(const MateriaSource &toCopy);
	~MateriaSource();

	MateriaSource	&operator=(const MateriaSource &rhs);

	virtual void learnMateria(AMateria* m);
	virtual AMateria* createMateria(std::string const & type);

protected:

	AMateria	*_inventory[4];

};
#endif
