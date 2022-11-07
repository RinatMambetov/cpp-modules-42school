/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:54:24 by greita            #+#    #+#             */
/*   Updated: 2022/10/04 19:54:26 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called\n";
	setType("Cat");
}

Cat::Cat(const std::string &type) : Animal(type)
{
	std::cout << "Cat constructor called\n";
}

Cat::~Cat() { std::cout << "Cat destructor called\n"; }

Cat::Cat(const Cat &orig) : Animal(orig)
{
	std::cout << "Cat copy constructor called\n";
}

Cat &Cat::operator=(const Cat &orig)
{
	std::cout << "Cat copy assignment operator called\n";
	if (this == &orig)
		return *this;
	setType(orig.getType());
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow!\n";
}
