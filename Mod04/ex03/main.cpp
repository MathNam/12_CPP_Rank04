#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"

int main()
{
	std::cout << "------TEST MateriaSource------" << std::endl << std::endl;
	{
		IMateriaSource*	src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter*		me = new Character("me");
		AMateria*		tmp;
	
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter* bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}
	std::cout << std::endl << "------TEST Unknown materia------" << std::endl << std::endl;
	{
		IMateriaSource*	src = new MateriaSource();
		ICharacter*		me = new Character("me");
		AMateria*		tmp;

		tmp = src->createMateria("ice");
		src->learnMateria(new Ice());
		tmp = src->createMateria("ice");
		me->equip(tmp);
		me->use(0, *me);
		tmp = src->createMateria("cure");

		delete src;
		delete me;
		delete tmp;
	}
	std::cout << std::endl << "------TEST character inventory------" << std::endl << std::endl;
	{
		IMateriaSource*	src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter*		me = new Character("me");
		AMateria*		first = src->createMateria("cure");
		AMateria*		one_too_many = src->createMateria("ice");
		AMateria*		tmp;
		me->equip(first);
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		tmp = src->createMateria("ice");
		me->equip(tmp);
		me->equip(one_too_many);
		me->unequip(-1);
		me->unequip(0);
		me->unequip(0);
		// me->equip(one_too_many);

		delete me;
		delete src;
		delete first;
		delete one_too_many;
	}
	std::cout << std::endl << "------TEST Deep copy------" << std::endl << std::endl;
	{
		IMateriaSource*	src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter*		me = new Character("me");
		AMateria*		tmp;
		AMateria*		tmp2;

		tmp = src->createMateria("ice");
		tmp2 = tmp->clone();

		delete tmp;
		std::cout << "Copied materia has type " << tmp2->getType() << std::endl;

		std::cout << std::endl;
		delete me;
		delete src;
		delete tmp2;
	}
	return 0;
}
