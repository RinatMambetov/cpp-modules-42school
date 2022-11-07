/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:50:37 by greita            #+#    #+#             */
/*   Updated: 2022/10/11 20:45:07 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < sourceCapacity; ++i)
	{
		m_source[i] = 0;
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < sourceCapacity; ++i)
	{
		if (m_source[i])
			delete m_source[i];
		m_source[i] = 0;
	}
}

MateriaSource::MateriaSource(MateriaSource const &orig)
{
	for (int i = 0; i < sourceCapacity; ++i)
	{
		m_source[i] = orig.m_source[i];
	}
}

MateriaSource &MateriaSource::operator=(MateriaSource const &orig)
{
	if (this == &orig)
		return *this;
	for (int i = 0; i < sourceCapacity; ++i)
	{
		m_source[i] = orig.m_source[i];
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < sourceCapacity; ++i)
	{
		if (m_source[i] == 0)
		{
			m_source[i] = m;
			std::cout << "Some materiaSource learn " << m->getType() << " materia on slot " << i << "\n";
			return;
		}
	}
	std::cout << "Error: MateriaSource is full!\n";
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < sourceCapacity; ++i)
	{
		if (m_source[i] && m_source[i]->getType() == type)
		{
			std::cout << "Some materiaSource create " << m_source[i]->getType() << " materia from slot " << i << "\n";
			return m_source[i];
		}
	}
	std::cout << "Error: The type is unknown!\n";
	return 0;
}

void MateriaSource::selfClean()
{
	for (int i = 0; i < sourceCapacity; ++i)
	{
		if (m_source[i])
			delete m_source[i];
		m_source[i] = 0;
	}
	std::cout << "Some materiaSource was selfcleaned\n";
}
