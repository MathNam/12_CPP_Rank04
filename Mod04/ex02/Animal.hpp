#ifndef ANIMAL_H
# define ANIMAL_H

# include <string>
# include <iostream>

class A_Animal
{
public:

	A_Animal();
	A_Animal(const A_Animal &toCopy);
	virtual ~A_Animal();

	A_Animal	&operator=(const A_Animal &rhs);

	virtual void		makeSound() const = 0;
	const std::string	&getType() const;

protected:

	std::string	_type;

};
#endif
