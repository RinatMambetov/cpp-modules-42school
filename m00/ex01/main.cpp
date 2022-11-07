/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 22:11:55 by greita            #+#    #+#             */
/*   Updated: 2022/08/14 22:11:57 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"
#include <string>
#include <iostream>

int main()
{
	Phonebook phonebook;
	std::string input;
	while (true)
	{
		std::cout << "Enter ADD, SEARCH or EXIT: ";
		std::cin >> input;
		if (input.compare("ADD") == 0)
		{
			phonebook.addContact();
		}
		else if (input.compare("SEARCH") == 0)
		{
			phonebook.searchContact();
		}
		else if (input.compare("EXIT") == 0)
		{
			return 0;
		}
	}
}
