/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:44:00 by greita            #+#    #+#             */
/*   Updated: 2022/09/27 19:04:37 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

const int defaultClapTrapHealthPoints(10);
const int defaultClapTrapEnergyPoints(10);
const int defaultClapTrapDamage(0);
const int costAttackRepair(1);

class ClapTrap
{
private:
	std::string m_name;
	int m_health;
	int m_energy;
	int m_damage;

public:
	ClapTrap();
	ClapTrap(const std::string &name);
	ClapTrap(const ClapTrap &orig);
	ClapTrap &operator=(const ClapTrap &orig);
	~ClapTrap();

	std::string getName() const;
	int getHealth() const;
	int getEnergy() const;
	int getDamage() const;

	void setHealth(const int health);
	void setEnergy(const int energy);

	bool checkEnergy() const;
	void printInfo() const;
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
