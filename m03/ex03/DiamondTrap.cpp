/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:43:43 by greita            #+#    #+#             */
/*   Updated: 2022/10/01 15:51:34 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap Default constructor called\n";
	m_health = FragTrap::getHealth();
	m_energy = ScavTrap::getEnergy();
	m_damage = FragTrap::getDamage();
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), m_name(name)
{
	std::cout << "DiamondTrap Constructor called\n";
	m_health = FragTrap::getHealth();
	m_energy = ScavTrap::getEnergy();
	m_damage = FragTrap::getDamage();
}

DiamondTrap::DiamondTrap(const DiamondTrap &orig) : ClapTrap(orig), m_name(orig.getName())
{
	std::cout << "DiamondTrap Copy Constructor called\n";
	m_health = orig.getHealth();
	m_energy = orig.getEnergy();
	m_damage = orig.getDamage();
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &orig)
{
	std::cout << "DiamondTrap Copy assignment operator called\n";
	if (this == &orig)
		return *this;
	this->ClapTrap::m_name = orig.ClapTrap::getName();
	m_name = orig.getName();
	m_health = orig.getHealth();
	m_energy = orig.getEnergy();
	m_damage = orig.getDamage();
	return *this;
}

DiamondTrap::~DiamondTrap() { std::cout << "DiamondTrap Destructor called\n"; }

std::string DiamondTrap::getName() const { return m_name; }

int DiamondTrap::getHealth() const { return m_health; }

int DiamondTrap::getEnergy() const { return m_energy; }

int DiamondTrap::getDamage() const { return m_damage; }

void DiamondTrap::setName(const std::string &name) { m_name = name; }

void DiamondTrap::setHealth(const int health) { m_health = health; }

void DiamondTrap::setEnergy(const int energy) { m_energy = energy; }

void DiamondTrap::setDamage(const int damage) { m_damage = damage; }

void DiamondTrap::printInfo() const
{
	std::cout << "Name: " << this->getName() << ". Health: " << this->getHealth()
			  << ". Energy: " << this->getEnergy() << ". Damage: " << this->getDamage() << ".\n";
}

bool DiamondTrap::checkEnergy() const
{
	if (this->getEnergy() > 0)
	{
		return true;
	}
	else
	{
		std::cout << "DiamondTrap " << this->getName() << " has not enought points of energy!\n";
		return false;
	}
}

void DiamondTrap::attack(const std::string &target)
{
	if (this->checkEnergy())
	{
		this->ScavTrap::attack(target);
		this->setEnergy(this->getEnergy() - costAttackRepair);
	}
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << this->getName() << ". ClapTrap name: " << ClapTrap::getName() << ".\n";
}

void DiamondTrap::takeDamage(unsigned int amount)
{
	std::cout << "DiamondTrap " << this->getName() << " take " << amount << " points of damage!\n";
	this->setHealth(this->getHealth() - amount);
}

void DiamondTrap::beRepaired(unsigned int amount)
{
	if (this->checkEnergy())
	{
		std::cout << "DiamondTrap " << this->getName() << " repaired " << amount << " points of health!\n";
		this->setEnergy(this->getEnergy() - costAttackRepair);
		this->setHealth(this->getHealth() + amount);
	}
}
