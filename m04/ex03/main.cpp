/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 09:24:51 by greita            #+#    #+#             */
/*   Updated: 2022/10/11 20:45:40 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	Ice ice0;
	Ice ice1(ice0);
	Ice ice2;
	ice2 = ice0;
	Cure cure0;
	Cure cure1;
	AMateria *cloneCure0 = cure0.clone();
	AMateria *cloneCure1 = cure0.clone();
	std::cout << ice2.getType() << '\n';
	AMateria *cloneIce0 = ice2.clone();
	AMateria *cloneIce1 = ice2.clone();
	std::cout << cloneIce0->getType() << '\n';
	std::cout << '\n';

	Character c0("c0_name");
	ice0.use(c0);
	Character c1(c0);
	Character c2("c2_name");
	c2 = c1;
	Character c3("c3_name");
	std::cout << c2.getName() << '\n';
	c0.equip(&ice0);
	c0.equip(&ice1);
	c0.equip(&ice2);
	c0.equip(&cure0);
	// full
	c0.equip(&cure1);
	c0.unequip(0);
	// wrong index
	c0.unequip(10);
	c0.equip(&cure1);
	// full
	c0.equip(&cure1);
	std::cout << '\n';

	c0.use(0, c3);
	c0.use(1, c2);
	// wrong index
	c0.use(10, c3);
	std::cout << '\n';

	MateriaSource ms;
	ms.learnMateria(cloneIce0);
	ms.learnMateria(cloneCure0);
	ms.learnMateria(cloneIce1);
	ms.learnMateria(cloneCure1);
	// full
	ms.learnMateria(cloneCure1);
	AMateria *m0 = ms.createMateria("ice");
	AMateria *m1 = ms.createMateria("cure");
	AMateria *m2 = ms.createMateria("none");
	if (m2 == 0)
		std::cout << "Some materia is NULL\n";
	std::cout << m0->getType() << '\n';
	std::cout << m1->getType() << '\n';
	ms.selfClean();
	m2 = ms.createMateria("ice");
	std::cout << '\n';

	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter *me = new Character("me");
	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter *bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;

	return 0;
}
