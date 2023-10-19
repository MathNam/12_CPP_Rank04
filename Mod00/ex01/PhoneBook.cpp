/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaliber <maaliber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:58:17 by maaliber          #+#    #+#             */
/*   Updated: 2023/10/19 14:06:24 by maaliber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_nbContacts = 0;
}

PhoneBook::~PhoneBook()
{}
void PhoneBook::addContact()
{
	Contact	tmp;
	
	tmp.getFirstName();
	tmp.getLastName();
	tmp.getNickname();
	tmp.getNumber();
	tmp.getDarkestSecret();
	if (!tmp.checkContact())
	{
		std::cout << "Contact not added" << std::endl << std::endl;
		return ;
	}

	static int	cnt;
	int			index;

	index = cnt++ % 8;
	this->_nbContacts = std::min(8, cnt);
	this->_contacts[index].copyContact(tmp);
}

void PhoneBook::searchContact(std::string index)
{
	if (index.empty())
	{
		std::cout << std::endl << "No index provided" << std::endl << std::endl;
		return;
	}
	if (index != "ALL" and std::atoi(index.c_str()) >= this->_nbContacts)
	{
		std::cout << std::endl << "Index outside range" << std::endl << std::endl;
		return;
	}
	if (index != "ALL" and std::atoi(index.c_str()) < 0)
	{
		std::cout << std::endl << "Index can't be negative" << std::endl << std::endl;
		return;
	}
	std::cout << std::endl;
	std::cout << std::setw(10) << "index" << "|" << std::setw(10) << "first name" << "|" << std::setw(10) << "last name" << "|" << std::setw(10) << "nickname" << std::endl;
	std::cout << "     --------------------------------------" << std::endl;
	if (index == "ALL")
	{
		for (int i = 0; i < 8; i++)
		{
			std::cout << std::setw(10) << i << "|";
			this->_contacts[i].printContact();
		}
		return;
	}
	std::cout << std::setw(10) << index << "|";
	this->_contacts[std::atoi(index.c_str())].printContact();
	return;
}

std::string PhoneBook::getIndex()
{
	std::string index;

	std::cout << "Enter index : ";
	std::getline(std::cin, index);
	return (index);
}
