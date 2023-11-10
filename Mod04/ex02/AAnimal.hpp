#ifndef ANIMAL_H
# define ANIMAL_H

# include <string>
# include <iostream>

class AAnimal {
public:
	AAnimal();
	AAnimal(const AAnimal &toCopy);
	virtual ~AAnimal();

	AAnimal	&operator=(const AAnimal &rhs);

	virtual void		makeSound() const = 0;
	const std::string	&getType() const;

protected:
	std::string	_type;
};
#endif
