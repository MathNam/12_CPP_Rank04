/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaliber <maaliber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:54:23 by maaliber          #+#    #+#             */
/*   Updated: 2023/10/19 13:54:08 by maaliber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Contact.hpp"

class PhoneBook
{
public:

	PhoneBook();
	~PhoneBook();
	
	void		addContact();
	void		searchContact(std::string index);
	std::string	getIndex();

private:

	Contact	_contacts[8];
	int		_nbContacts;
};

#endif
