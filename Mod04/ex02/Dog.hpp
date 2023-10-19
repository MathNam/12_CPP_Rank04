#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public A_Animal
{
public:

	Dog();
	Dog(const Dog &toCopy);
	virtual ~Dog();

	Dog	&operator=(const Dog &rhs);

	virtual void	makeSound() const;
	void	getIdeas() const;
	void	setIdea(int index, std::string idea);

protected:

	Brain*	_brain;

};
#endif
