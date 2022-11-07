/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:26:46 by greita            #+#    #+#             */
/*   Updated: 2022/09/16 11:26:48 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack() const
{
	if (m_weapon)
		std::cout << m_name << " attacks with their " << m_weapon->getType() << '\n';
	else
		std::cout << m_name << " attacks without weapon\n";
}

void HumanB::setWeapon(Weapon &weapon)
{
	m_weapon = &weapon;
}
