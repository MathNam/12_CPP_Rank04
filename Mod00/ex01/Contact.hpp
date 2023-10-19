/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaliber <maaliber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:55:05 by maaliber          #+#    #+#             */
/*   Updated: 2023/10/19 10:48:52 by maaliber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Contact
{
public:

	Contact();
	~Contact();
	int			getFirstName();
	int			getLastName();
	int			getNickname();
	int			getNumber();
	int			getDarkestSecret();
	int			checkContact() const;
	void		printContact();
	void		copyContact(Contact contact);

private:

	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _number;
	std::string _darkestSecret;
};

#endif
