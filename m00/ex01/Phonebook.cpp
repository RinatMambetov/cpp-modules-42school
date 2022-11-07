/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 22:12:02 by greita            #+#    #+#             */
/*   Updated: 2022/08/14 22:12:04 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include "utils.hpp"
#include <iostream>
#include <iomanip>

int Phonebook::index = minIndex;
std::string Phonebook::separator = "|";

void Phonebook::addContact()
{
	std::string name = getInfo("Enter name: ");
	std::string lastName = getInfo("Enter last name: ");
	std::string nickname = getInfo("Enter nickname: ");
	std::string phoneNumber = getInfo("Enter phone number: ");
	std::string darkestSecret = getInfo("Enter darkest secret: ");
	Contact contact(name, lastName, nickname, phoneNumber, darkestSecret);

	contacts[index - minIndex] = contact;
	index = increaseIndex(index, minIndex, maxIndex);
}

void Phonebook::searchContact()
{
	int searchIndex = getSearchIndex(minIndex, maxIndex);
	std::cout << std::setw(columnWidth) << searchIndex << separator;

	std::string temp;
	temp = shrinkString(contacts[searchIndex - minIndex].getName(), columnWidth);
	std::cout << std::setw(columnWidth) << temp << separator;

	temp = shrinkString(contacts[searchIndex - minIndex].getLastName(), columnWidth);
	std::cout << std::setw(columnWidth) << temp << separator;

	temp = shrinkString(contacts[searchIndex - minIndex].getNickname(), columnWidth);
	std::cout << std::setw(columnWidth) << temp << separator;
	std::cout << std::endl;
}
