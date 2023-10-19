#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat(): A_Animal()
{
	std::cout << "Cat constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain;
}

Cat::Cat(const Cat &toCopy): A_Animal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_brain = new Brain;
	*this = toCopy;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
}

Cat	&Cat::operator=(const Cat &rhs)
{
	std::cout << "Cat assignation operator called" << std::endl;
	if (this == &rhs)
		return *this;
	this->_type = rhs._type;
	*this->_brain = *rhs._brain;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "miaou" << std::endl;
}

void	Cat::getIdeas() const
{
	for(int i = 0; i < 100; i++)
		std::cout << "Cat idea: " << this->_brain->getIdea(i) << "\taddress: " << this->_brain->getAddress(i) << std::endl;
}

void	Cat::setIdea(int index, std::string idea)
{
	this->_brain->setIdea(index, idea);
}
