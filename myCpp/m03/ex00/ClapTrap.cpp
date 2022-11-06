/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:44:02 by greita            #+#    #+#             */
/*   Updated: 2022/09/27 19:04:38 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	: m_health(defaultClapTrapHealthPoints), m_energy(defaultClapTrapEnergyPoints), m_damage(defaultClapTrapDamage)
{
	std::cout << "ClapTrap Default constructor called\n";
}

ClapTrap::ClapTrap(const std::string &name)
	: m_name(name), m_health(defaultClapTrapHealthPoints), m_energy(defaultClapTrapEnergyPoints), m_damage(defaultClapTrapDamage)
{
	std::cout << "Constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap &orig)
	: m_name(orig.getName()), m_health(orig.getHealth()), m_energy(orig.getEnergy()), m_damage(orig.getDamage())
{
	std::cout << "Copy constructor called\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &orig)
{
	std::cout << "Copy assignment operator called\n";
	if (this == &orig)
		return *this;
	m_name = orig.getName();
	m_health = orig.getHealth();
	m_energy = orig.getEnergy();
	m_damage = orig.getDamage();
	return *this;
}

ClapTrap::~ClapTrap() { std::cout << "Destructor called\n"; }

std::string ClapTrap::getName() const { return m_name; }

int ClapTrap::getHealth() const { return m_health; }

int ClapTrap::getEnergy() const { return m_energy; }

int ClapTrap::getDamage() const { return m_damage; }

void ClapTrap::setHealth(const int health) { m_health = health; }

void ClapTrap::setEnergy(const int energy) { m_energy = energy; }

void ClapTrap::printInfo() const
{
	std::cout << "Name: " << this->getName() << ". Health: " << this->getHealth()
			  << ". Energy: " << this->getEnergy() << ". Damage: " << this->getDamage() << ".\n";
}

bool ClapTrap::checkEnergy() const
{
	if (this->getEnergy() > 0)
	{
		return true;
	}
	else
	{
		std::cout << "ClapTrap " << this->getName() << " has not enought points of energy!\n";
		return false;
	}
}

void ClapTrap::attack(const std::string &target)
{
	if (this->checkEnergy())
	{
		std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getDamage() << " points of damage!\n";
		this->setEnergy(this->getEnergy() - costAttackRepair);
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->getName() << " take " << amount << " points of damage!\n";
	this->setHealth(this->getHealth() - amount);
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->checkEnergy())
	{
		std::cout << "ClapTrap " << this->getName() << " repaired " << amount << " points of health!\n";
		this->setEnergy(this->getEnergy() - costAttackRepair);
		this->setHealth(this->getHealth() + amount);
	}
}
