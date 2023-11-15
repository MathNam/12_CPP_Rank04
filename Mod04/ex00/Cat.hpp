#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"

class Cat : public Animal {
public:
	Cat();
	Cat(const Cat& toCopy);
	~Cat();

	Cat& operator=(const Cat& rhs);

	void	makeSound() const;
};

#endif
