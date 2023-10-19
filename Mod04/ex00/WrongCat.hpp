#ifndef WRONGCAT_H
# define WRONGCAT_H

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:

	WrongCat();
	WrongCat(const WrongCat &toCopy);
	~WrongCat();

	WrongCat	&operator=(const WrongCat &rhs);

	void	makeSound() const;
	const std::string	&getType() const;

};
#endif
