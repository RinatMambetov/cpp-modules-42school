/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 21:05:58 by greita            #+#    #+#             */
/*   Updated: 2022/09/28 15:31:18 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

const int defaultScavTrapHealthPoints(100);
const int defaultScavTrapEnergyPoints(50);
const int defaultScavTrapDamage(20);
const bool defaultGateKeeperMode(false);

class ScavTrap : virtual public ClapTrap
{
private:
	bool m_gateKeeperMode;

protected:
	std::string m_name;
	int m_health;
	int m_energy;
	int m_damage;

public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &orig);
	ScavTrap &operator=(const ScavTrap &orig);
	~ScavTrap();

	bool getGateKeeperMode() const;
	void setGateKeeperMode(const bool mode);

	void printInfo() const;
	void guardGate();
	void attack(const std::string &target);
};

#endif
