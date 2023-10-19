/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaliber <maaliber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:02:58 by maaliber          #+#    #+#             */
/*   Updated: 2023/10/19 12:07:57 by maaliber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	this->_firstName = "";
	this->_lastName = "";
	this->_nickname = "";
}

Contact::~Contact()
{}
int Contact::getFirstName()
{
	std::cout << "Enter first name : ";
	if (!std::getline(std::cin, this->_firstName))
		return (0);
	return (1);
}

int Contact::getLastName()
{
	std::cout << "Enter last name : ";
	if (!std::getline(std::cin, this->_lastName))
		return (0);
	return (1);
}

int Contact::getNickname()
{
	std::cout << "Enter nickname : ";
	if (!std::getline(std::cin, this->_nickname))
		return (0);
	return (1);
}

int Contact::getNumber()
{
	std::cout << "Enter phone number : ";
	if (!std::getline(std::cin, this->_number))
		return (0);
	return (1);
}

int Contact::getDarkestSecret()
{
	std::cout << "Enter darkest secret : ";
	if (!std::getline(std::cin, this->_darkestSecret))
		return (0);
	return (1);
}

int	Contact::checkContact() const
{
	if (this->_firstName.empty() || this->_lastName.empty() || this->_nickname.empty() || this->_number.empty())
	{
		std::cout << std::endl << std::endl << "One of the fields is empty" << std::endl;
		return false;
	}
	return true;
}

void Contact::copyContact(Contact contact)
{
	this->_firstName = contact._firstName;
	this->_lastName = contact._lastName;
	this->_nickname = contact._nickname;
	this->_number = contact._number;
	this->_darkestSecret = contact._darkestSecret;
}


void Contact::printContact()
{
	if (this->_firstName.length() > 10)
	{
		this->_firstName.resize(9);
		this->_firstName.append(".");
	}
	if (this->_lastName.length() > 10)
	{
		this->_lastName.resize(9);
		this->_lastName.append(".");
	}
	if (this->_nickname.length() > 10)
	{
		this->_nickname.resize(9);
		this->_nickname.append(".");
	}
	std::cout << std::setw(10) << this->_firstName << "|";
	std::cout << std::setw(10) << this->_lastName << "|";
	std::cout << std::setw(10) << this->_nickname << std::endl;
}

