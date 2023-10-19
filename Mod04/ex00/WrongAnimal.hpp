#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <string>
# include <iostream>

class WrongAnimal
{
public:

	WrongAnimal();
	WrongAnimal(const WrongAnimal &toCopy);
	virtual ~WrongAnimal();

	WrongAnimal	&operator=(const WrongAnimal &rhs);

	virtual void		makeSound() const;
	const std::string	&getType() const;

protected:

	std::string	_type;


};
#endif
