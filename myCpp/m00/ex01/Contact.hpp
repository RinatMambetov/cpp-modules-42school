/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 22:11:52 by greita            #+#    #+#             */
/*   Updated: 2022/08/14 22:11:54 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
public:
	Contact();
	Contact(std::string name, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret);

	std::string getName() const;
	std::string getLastName() const;
	std::string getNickname() const;

private:
	std::string name;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;
};

#endif
