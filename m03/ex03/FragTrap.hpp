/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 09:45:35 by greita            #+#    #+#             */
/*   Updated: 2022/09/28 17:36:02 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

const int defaultFragTrapHealthPoints(100);
const int defaultFragTrapEnergyPoints(100);
const int defaultFragTrapDamage(30);

class FragTrap : virtual public ClapTrap
{
protected:
	std::string m_name;
	int m_health;
	int m_energy;
	int m_damage;

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &orig);
	FragTrap &operator=(const FragTrap &orig);
	~FragTrap();

	void printInfo() const;
	void attack(const std::string &target);
	void highFivesGuys(void);
};

#endif
