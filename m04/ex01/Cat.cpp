/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:54:24 by greita            #+#    #+#             */
/*   Updated: 2022/10/08 10:47:21 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : m_brain(new Brain)
{
	std::cout << "Cat default constructor called\n";
	setType("Cat");
}

Cat::Cat(const std::string &type) : Animal(type), m_brain(new Brain)
{
	std::cout << "Cat constructor called\n";
}

Cat::~Cat()
{
	std::cout << "Cat destructor called\n";
	delete m_brain;
	m_brain = 0;
}

Cat::Cat(const Cat &orig) : Animal(orig)
{
	std::cout << "Cat copy constructor called\n";
	if (orig.getBrain())
	{
		m_brain = new Brain(*orig.getBrain());
	}
	else
		m_brain = 0;
}

Cat &Cat::operator=(const Cat &orig)
{
	std::cout << "Cat copy assignment operator called\n";
	if (this == &orig)
		return *this;
	setType(orig.getType());
	if (orig.getBrain())
	{
		delete m_brain;
		m_brain = new Brain(*orig.getBrain());
	}
	else
		m_brain = 0;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow!\n";
}

const Brain *Cat::getBrain() const { return m_brain; }

void Cat::setBrain(Brain *brain)
{
	delete m_brain;
	m_brain = new Brain(*brain);
}
