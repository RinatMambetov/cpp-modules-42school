/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:13:10 by greita            #+#    #+#             */
/*   Updated: 2022/10/12 20:04:16 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() : m_thoughts(new std::string[ideasSize])
{
	std::cout << "Brain default constructor called\n";
}

Brain::~Brain()
{
	std::cout << "Brain destructor called\n";
	if (m_thoughts)
	{
		delete[] m_thoughts;
		m_thoughts = 0;
	}
}

Brain::Brain(const Brain &orig)
{
	std::cout << "Brain copy constructor called\n";
	if (orig.m_thoughts)
	{
		m_thoughts = new std::string[ideasSize];
		for (int i = 0; i < ideasSize; ++i)
		{
			m_thoughts[i] = orig.getThoughts()[i];
		}
	}
	else
		m_thoughts = 0;
}

Brain &Brain::operator=(const Brain &orig)
{
	std::cout << "Brain copy assignment operator called\n";
	if (this == &orig)
		return *this;
	delete[] m_thoughts;
	if (orig.getThoughts())
	{
		m_thoughts = new std::string[ideasSize];
		for (int i = 0; i < ideasSize; ++i)
		{
			m_thoughts[i] = orig.getThoughts()[i];
		}
	}
	else
		m_thoughts = 0;
	return *this;
}

const std::string *Brain::getThoughts() const { return m_thoughts; }

void Brain::setThought(const int index, const std::string &thought)
{
	assert(index >= 0 && index < ideasSize);
	m_thoughts[index] = thought;
}
