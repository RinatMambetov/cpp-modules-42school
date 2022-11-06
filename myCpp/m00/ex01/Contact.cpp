/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 22:11:47 by greita            #+#    #+#             */
/*   Updated: 2022/08/14 22:11:49 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){};

Contact::Contact(std::string name, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret)
{
	this->name = name;
	this->lastName = lastName;
	this->nickname = nickname;
	this->phoneNumber = phoneNumber;
	this->darkestSecret = darkestSecret;
}

std::string Contact::getName() const
{
	return this->name;
}

std::string Contact::getLastName() const
{
	return this->lastName;
}

std::string Contact::getNickname() const
{
	return this->nickname;
}
