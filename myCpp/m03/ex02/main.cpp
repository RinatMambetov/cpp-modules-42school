/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:43:58 by greita            #+#    #+#             */
/*   Updated: 2022/09/30 18:00:24 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap ft0;
	ft0.printInfo();
	std::cout << '\n';

	FragTrap ft1("ft1");
	ft1.printInfo();
	std::cout << '\n';

	FragTrap ft2(ft1);
	ft2.printInfo();
	std::cout << '\n';

	FragTrap ft3("ft3");
	ft3.printInfo();
	ft3 = ft1;
	ft3.printInfo();
	ft3.highFivesGuys();
	ft3.attack("enemy");
	ft3.printInfo();
	ft3.takeDamage(99);
	ft3.printInfo();
	ft3.beRepaired(1);
	ft3.printInfo();
	ft3.setEnergy(2);
	ft3.printInfo();
	for (int i = 0; i < 3; ++i)
	{
		ft3.attack("enemy");
	}
	ft3.printInfo();
	std::cout << '\n';

	return 0;
}
