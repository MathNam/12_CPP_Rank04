/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaliber <maaliber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:06:53 by maaliber          #+#    #+#             */
/*   Updated: 2023/10/19 10:57:23 by maaliber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int main(void)
{
	std::string	cmd;
	PhoneBook	phonebook;

	std::cout << "Enter a command (ADD, SEARCH or EXIT) : ";
	while (std::getline(std::cin, cmd))
	{
		if (cmd == "ADD")
			phonebook.addContact();
		else if (cmd == "SEARCH")
			phonebook.searchContact(phonebook.getIndex());
		else if (cmd == "EXIT")
			return (0);
		else
			std::cout << "Wrong command" << std::endl;
		if (!std::cin.eof())
			std::cout << "Enter a command (ADD, SEARCH or EXIT) : ";
	}
	if (std::cin.eof())
		std::cout << "EOF detected, exiting" << std::endl;
	return (0);
}
