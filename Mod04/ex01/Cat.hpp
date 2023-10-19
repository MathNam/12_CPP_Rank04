#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public:

	Cat();
	Cat(const Cat &toCopy);
	virtual ~Cat();

	Cat	&operator=(const Cat &rhs);

	virtual void	makeSound() const;
	void	getIdeas() const;
	void	setIdea(int index, std::string idea);

	protected:

	Brain	*_brain;

};
#endif
