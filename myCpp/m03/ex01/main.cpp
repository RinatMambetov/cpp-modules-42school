/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:43:58 by greita            #+#    #+#             */
/*   Updated: 2022/09/30 18:05:15 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap st0;
	st0.printInfo();
	std::cout << '\n';

	ScavTrap st1("st1");
	st1.printInfo();
	std::cout << '\n';

	ScavTrap st2(st1);
	st2.printInfo();
	std::cout << '\n';

	ScavTrap st3("st3");
	st3.printInfo();
	st3 = st1;
	st3.printInfo();
	st3.guardGate();
	st3.printInfo();
	st3.attack("enemy");
	st3.printInfo();
	st3.takeDamage(99);
	st3.printInfo();
	st3.beRepaired(1);
	st3.printInfo();
	st3.guardGate();
	st3.setEnergy(2);
	st3.printInfo();
	for (int i = 0; i < 3; ++i)
	{
		st3.attack("enemy");
	}
	st3.printInfo();
	std::cout << '\n';

	return 0;
}
