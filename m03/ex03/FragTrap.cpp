/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 09:49:07 by greita            #+#    #+#             */
/*   Updated: 2022/09/28 18:24:45 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default constructor called\n";
	this->setHealth(defaultFragTrapHealthPoints);
	m_energy = defaultFragTrapEnergyPoints;
	this->setDamage(defaultFragTrapDamage);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap Constructor called\n";
	this->setHealth(defaultFragTrapHealthPoints);
	m_energy = defaultFragTrapEnergyPoints;
	this->setDamage(defaultFragTrapDamage);
}

FragTrap::FragTrap(const FragTrap &orig) : ClapTrap(orig) { std::cout << "FragTrap Copy Constructor called\n"; }

FragTrap &FragTrap::operator=(const FragTrap &orig)
{
	std::cout << "FragTrap Copy assignment operator called\n";
	if (this == &orig)
		return *this;
	this->setName(orig.getName());
	this->setHealth(orig.getHealth());
	this->setEnergy(orig.getEnergy());
	this->setDamage(orig.getDamage());
	return *this;
}

FragTrap::~FragTrap() { std::cout << "FragTrap Destructor called\n"; }

void FragTrap::printInfo() const
{
	std::cout << "Name: " << this->getName() << ". Health: " << this->getHealth()
			  << ". Energy: " << this->getEnergy() << ". Damage: " << this->getDamage() << ".\n";
}

void FragTrap::attack(const std::string &target)
{
	if (this->checkEnergy())
	{
		std::cout << "FragTrap " << this->getName() << " attacks " << target << ", causing " << this->getDamage() << " points of damage!\n";
		this->setEnergy(this->getEnergy() - costAttackRepair);
	}
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->getName() << " is request the highest of fives!\n";
}
