#ifndef DOG_H
# define DOG_H

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
public:
	Dog();
	Dog(const Dog& toCopy);
	~Dog();

	Dog& operator=(const Dog& rhs);

	void	makeSound() const;
	void	getIdeas() const;
	void	setIdea(int index, std::string idea);

private:
	Brain*	_brain;
};
#endif
