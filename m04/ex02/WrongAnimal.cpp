/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:54:45 by greita            #+#    #+#             */
/*   Updated: 2022/10/04 19:54:47 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() { std::cout << "WrongAnimal default constructor called\n"; }

WrongAnimal::WrongAnimal(const std::string &type) : m_type(type)
{
	std::cout << "WrongAnimal constructor called\n";
}

WrongAnimal::~WrongAnimal() { std::cout << "WrongAnimal destructor called\n"; }

WrongAnimal::WrongAnimal(const WrongAnimal &orig) : m_type(orig.getType())
{
	std::cout << "WrongAnimal copy constructor called\n";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &orig)
{
	std::cout << "WrongAnimal copy assignment operator called\n";
	if (this == &orig)
		return *this;
	m_type = orig.getType();
	return *this;
}

std::string WrongAnimal::getType() const { return m_type; }

void WrongAnimal::setType(std::string type) { m_type = type; }

void WrongAnimal::makeSound() const
{
	std::cout << "Wrong animal sound...\n";
}
