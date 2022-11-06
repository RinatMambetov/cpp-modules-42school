/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 22:12:05 by greita            #+#    #+#             */
/*   Updated: 2022/08/14 22:12:07 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>

class Phonebook
{
private:
	static const int minIndex = 1;
	static const int maxIndex = 8;
	static const int columnWidth = 10;
	static int index;
	static std::string separator;
	Contact contacts[maxIndex - minIndex + 1];

public:
	void addContact();
	void searchContact();
};

#endif
