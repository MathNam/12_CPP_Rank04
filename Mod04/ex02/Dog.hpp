#ifndef DOG_H
# define DOG_H

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
public:
	Dog();
	Dog(const Dog& toCopy);
	virtual ~Dog();

	Dog&	operator=(const Dog& rhs);

	virtual void	makeSound() const;
	void	getIdeas() const;
	void	setIdea(int index, std::string idea);

protected:
	Brain*	_brain;
};
#endif
