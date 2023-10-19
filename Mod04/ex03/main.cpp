#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"

int main()
{
	{
		std::cout << "TEST subject" << std::endl;
		std::cout << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		std::cout << std::endl;
	
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);

		std::cout << std::endl;
		delete bob;
		delete me;
		delete src;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	{
		std::cout << "TEST Unknown materia" << std::endl;
		std::cout << std::endl;
		IMateriaSource* src = new MateriaSource();
		ICharacter* me = new Character("me");
		AMateria* tmp;

		std::cout << std::endl;
		tmp = src->createMateria("ice");
		src->learnMateria(new Ice());
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");

		std::cout << std::endl;
		delete src;
		delete me;
		delete tmp;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	{
		std::cout << "TEST character inventory" << std::endl;
		std::cout << std::endl;

		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		std::cout << std::endl;

		AMateria *tmp2 = src->createMateria("ice");
		me->equip(tmp2);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		tmp = src->createMateria("ice");
		me->equip(tmp);
		me->unequip(-1);
		me->unequip(0);


		std::cout << std::endl;
		delete me;
		delete src;
		delete tmp;
		delete tmp2;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	{
		std::cout << "TEST deep copy" << std::endl;
		std::cout << std::endl;

		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		AMateria* tmp2;
		std::cout << std::endl;

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
