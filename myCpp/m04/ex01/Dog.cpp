/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:54:30 by greita            #+#    #+#             */
/*   Updated: 2022/10/08 10:47:44 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : m_brain(new Brain)
{
	std::cout << "Dog default constructor called\n";
	setType("Dog");
}

Dog::Dog(const std::string &type) : Animal(type), m_brain(new Brain)
{
	std::cout << "Dog constructor called\n";
}

Dog::~Dog()
{
	std::cout << "Dog destructor called\n";
	delete m_brain;
	m_brain = 0;
}

Dog::Dog(const Dog &orig) : Animal(orig)
{
	std::cout << "Dog copy constructor called\n";
	if (orig.getBrain())
	{
		m_brain = new Brain(*orig.getBrain());
	}
	else
		m_brain = 0;
}

Dog &Dog::operator=(const Dog &orig)
{
	std::cout << "Dog copy assignment operator called\n";
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

void Dog::makeSound() const
{
	std::cout << "Woof!\n";
}

const Brain *Dog::getBrain() const { return m_brain; }

void Dog::setBrain(Brain *brain)
{
	delete m_brain;
	m_brain = new Brain(*brain);
}
