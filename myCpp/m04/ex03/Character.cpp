/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:49:57 by greita            #+#    #+#             */
/*   Updated: 2022/10/11 19:18:10 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {}

Character::Character(std::string const &name) : m_name(name)
{
	for (int i = 0; i < inventoryCapacity; ++i)
	{
		m_inventory[i] = 0;
	}
}

Character::~Character() {}

Character::Character(Character const &orig)
{
	m_name = orig.getName();
	for (int i = 0; i < inventoryCapacity; ++i)
	{
		m_inventory[i] = orig.m_inventory[i];
	}
}

Character &Character::operator=(Character const &orig)
{
	if (this == &orig)
		return *this;
	m_name = orig.getName();
	for (int i = 0; i < inventoryCapacity; ++i)
	{
		m_inventory[i] = orig.m_inventory[i];
	}
	return *this;
}

std::string const &Character::getName() const { return m_name; }

void Character::equip(AMateria *m)
{
	for (int i = 0; i < inventoryCapacity; ++i)
	{
		if (m_inventory[i] == 0)
		{
			m_inventory[i] = m;
			std::cout << getName() << " equip " << m->getType() << " materia on slot " << i << "\n";
			return;
		}
	}
	std::cout << "Error: Inventory is full!\n";
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < inventoryCapacity)
	{
		std::cout << getName() << " unequip " << m_inventory[idx]->getType() << " materia from slot " << idx << "\n";
		m_inventory[idx] = 0;
	}
	else
		std::cout << "Error: Wrong index!\n";
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < inventoryCapacity)
		m_inventory[idx]->use(target);
	else
		std::cout << "Error: Wrong index!\n";
}
