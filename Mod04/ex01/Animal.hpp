#ifndef ANIMAL_H
# define ANIMAL_H

# include <string>
# include <iostream>

class Animal
{
public:

	Animal();
	Animal(const Animal &toCopy);
	virtual ~Animal();

	Animal	&operator=(const Animal &rhs);

	virtual void		makeSound() const;
	const std::string	&getType() const;

protected:

	std::string	_type;

};
#endif
