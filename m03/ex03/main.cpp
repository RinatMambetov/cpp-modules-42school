/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:43:58 by greita            #+#    #+#             */
/*   Updated: 2022/10/01 15:51:27 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap dt0;
	dt0.printInfo();
	dt0.whoAmI();
	std::cout << '\n';

	DiamondTrap dt1("dt1");
	dt1.printInfo();
	dt1.whoAmI();
	dt1.takeDamage(90);
	dt1.printInfo();
	dt1.beRepaired(10);
	dt1.printInfo();
	dt1.setEnergy(2);
	dt1.printInfo();
	for (int i = 0; i < 3; ++i)
	{
		dt1.attack("enemy");
	}
	dt1.printInfo();
	std::cout << '\n';

	DiamondTrap dt2(dt1);
	dt2.printInfo();
	dt2.whoAmI();
	std::cout << '\n';

	DiamondTrap dt3("dt3");
	dt3.printInfo();
	dt3.whoAmI();
	dt3 = dt1;
	dt3.printInfo();
	std::cout << '\n';

	return 0;
}
