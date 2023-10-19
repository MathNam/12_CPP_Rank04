#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(): Animal()
{
	std::cout << "Dog constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain;
}

Dog::Dog(const Dog &toCopy): Animal()
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_brain = new Brain;
	*this = toCopy;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}

Dog	&Dog::operator=(const Dog &rhs)
{
	std::cout << "Dog assignation operator called" << std::endl;
	if (this == &rhs)
		return *this;
	this->_type = rhs._type;
	*this->_brain = *rhs._brain;
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "woof" << std::endl;
}

void	Dog::getIdeas() const
{
	for(int i = 0; i < 100; i++)
		std::cout << "Dog idea: " << this->_brain->getIdea(i) << "\taddress: " << this->_brain->getAddress(i) << std::endl;
}

void	Dog::setIdea(int index, std::string idea)
{
	this->_brain->setIdea(index, idea);
}
