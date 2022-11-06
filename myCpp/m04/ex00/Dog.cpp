/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:54:30 by greita            #+#    #+#             */
/*   Updated: 2022/10/04 19:54:31 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called\n";
	setType("Dog");
}

Dog::Dog(const std::string &type) : Animal(type)
{
	std::cout << "Dog constructor called\n";
}

Dog::~Dog() { std::cout << "Dog destructor called\n"; }

Dog::Dog(const Dog &orig) : Animal(orig)
{
	std::cout << "Dog copy constructor called\n";
}

Dog &Dog::operator=(const Dog &orig)
{
	std::cout << "Dog copy assignment operator called\n";
	if (this == &orig)
		return *this;
	setType(orig.getType());
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Woof!\n";
}
