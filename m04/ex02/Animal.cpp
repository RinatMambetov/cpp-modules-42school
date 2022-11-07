/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:54:17 by greita            #+#    #+#             */
/*   Updated: 2022/10/08 11:51:36 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() { std::cout << "Animal default constructor called\n"; }

Animal::Animal(const std::string &type) : m_type(type)
{
	std::cout << "Animal constructor called\n";
}

Animal::~Animal() { std::cout << "Animal destructor called\n"; }

Animal::Animal(const Animal &orig) : m_type(orig.getType())
{
	std::cout << "Animal copy constructor called\n";
}

Animal &Animal::operator=(const Animal &orig)
{
	std::cout << "Animal copy assignment operator called\n";
	if (this == &orig)
		return *this;
	m_type = orig.getType();
	return *this;
}

std::string Animal::getType() const { return m_type; }

void Animal::setType(std::string type) { m_type = type; }
