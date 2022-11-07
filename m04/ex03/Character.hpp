/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:50:00 by greita            #+#    #+#             */
/*   Updated: 2022/10/11 18:50:03 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>
#include <iostream>

int const inventoryCapacity(4);

class Character : public ICharacter
{
private:
	Character();

	std::string m_name;
	AMateria *m_inventory[inventoryCapacity];

public:
	Character(std::string const &name);
	virtual ~Character();
	Character(Character const &orig);
	Character &operator=(Character const &orig);

	std::string const &getName() const;
	void equip(AMateria *m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter &target);
};

#endif
