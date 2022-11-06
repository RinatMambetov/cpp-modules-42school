/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:26:49 by greita            #+#    #+#             */
/*   Updated: 2022/09/16 11:26:51 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	const std::string m_name;
	Weapon *m_weapon;

public:
	HumanB(std::string name, Weapon *weapon = 0)
		: m_name(name), m_weapon(weapon) {}
	void attack() const;
	void setWeapon(Weapon &weapon);
};

#endif
