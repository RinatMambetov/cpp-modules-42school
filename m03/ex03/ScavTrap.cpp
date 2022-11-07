/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 21:06:01 by greita            #+#    #+#             */
/*   Updated: 2022/09/28 20:17:24 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default constructor called\n";
	m_health = defaultScavTrapHealthPoints;
	this->setEnergy(defaultScavTrapEnergyPoints);
	m_damage = defaultScavTrapDamage;
	m_gateKeeperMode = defaultGateKeeperMode;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap Constructor called\n";
	m_health = defaultScavTrapHealthPoints;
	this->setEnergy(defaultScavTrapEnergyPoints);
	m_damage = defaultScavTrapDamage;
	m_gateKeeperMode = defaultGateKeeperMode;
}

ScavTrap::ScavTrap(const ScavTrap &orig) : ClapTrap(orig), m_gateKeeperMode(orig.getGateKeeperMode())
{
	std::cout << "ScavTrap Copy Constructor called\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &orig)
{
	std::cout << "ScavTrap Copy assignment operator called\n";
	if (this == &orig)
		return *this;
	this->setName(orig.getName());
	this->setHealth(orig.getHealth());
	this->setEnergy(orig.getEnergy());
	this->setDamage(orig.getDamage());
	this->setGateKeeperMode(orig.getGateKeeperMode());
	return *this;
}

ScavTrap::~ScavTrap() { std::cout << "ScavTrap Destructor called\n"; }

bool ScavTrap::getGateKeeperMode() const { return m_gateKeeperMode; }

void ScavTrap::setGateKeeperMode(const bool mode)
{
	if (this->getGateKeeperMode() != mode)
		m_gateKeeperMode = mode;
}

void ScavTrap::guardGate()
{
	this->setGateKeeperMode(!this->getGateKeeperMode());
	if (this->getGateKeeperMode() == true)
		std::cout << "ScavTrap " << this->getName() << " is in Gate keeper mode now.\n";
	else
		std::cout << "ScavTrap " << this->getName() << " is out of Gate keeper mode now.\n";
}

void ScavTrap::printInfo() const
{
	std::cout << std::boolalpha;
	std::cout << "Name: " << this->getName() << ". Health: " << this->getHealth()
			  << ". Energy: " << this->getEnergy() << ". Damage: " << this->getDamage()
			  << ". GateKeeperMode: " << this->getGateKeeperMode() << ".\n";
}

void ScavTrap::attack(const std::string &target)
{
	if (this->checkEnergy())
	{
		std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getDamage() << " points of damage!\n";
		this->setEnergy(this->getEnergy() - costAttackRepair);
	}
}
