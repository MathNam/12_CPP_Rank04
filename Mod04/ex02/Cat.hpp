#ifndef CAT_H
# define CAT_H

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal	{
public:
	Cat();
	Cat(const Cat &toCopy);
	~Cat();

	Cat	&operator=(const Cat &rhs);

	void	makeSound() const;
	void	getIdeas() const;
	void	setIdea(int index, std::string idea);

private:
	Brain	*_brain;
};
#endif
