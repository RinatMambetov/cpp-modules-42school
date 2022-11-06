/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:37:50 by greita            #+#    #+#             */
/*   Updated: 2022/10/01 15:51:30 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string m_name;

protected:
	int m_health;
	int m_energy;
	int m_damage;

public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &orig);
	DiamondTrap &operator=(const DiamondTrap &orig);
	~DiamondTrap();

	std::string getName() const;
	int getHealth() const;
	int getEnergy() const;
	int getDamage() const;

	void setName(const std::string &name);
	void setHealth(const int health);
	void setEnergy(const int energy);
	void setDamage(const int damage);

	void printInfo() const;
	bool checkEnergy() const;
	void whoAmI();
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
