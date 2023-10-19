#ifndef BRAIN_H
# define BRAIN_H

# include <string>
# include <iostream>

class Brain
{
public:

	Brain();
	Brain(const Brain &toCopy);
	virtual ~Brain();

	Brain	&operator=(const Brain &rhs);

	const std::string	getIdea(int index) const;
	const std::string	*getAddress(int index) const;
	void				setIdea(int index, std::string idea);

protected:

	std::string	_ideas[100];

};
#endif
