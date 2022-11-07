/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:26:43 by greita            #+#    #+#             */
/*   Updated: 2022/09/16 11:26:45 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	const std::string m_name;
	Weapon &m_weapon;

public:
	HumanA(std::string name, Weapon &weapon)
		: m_name(name), m_weapon(weapon) {}
	void attack() const;
};

#endif
