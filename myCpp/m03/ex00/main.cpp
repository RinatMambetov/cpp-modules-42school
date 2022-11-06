/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:43:58 by greita            #+#    #+#             */
/*   Updated: 2022/09/30 18:14:28 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap ct0;
	ct0.printInfo();
	std::cout << '\n';

	ClapTrap ct1("ct1");
	ct1.printInfo();
	std::cout << '\n';

	ClapTrap ct2(ct1);
	ct2.printInfo();
	std::cout << '\n';

	ClapTrap ct3;
	ct3 = ct2;
	ct3.attack("enemy");
	ct3.printInfo();
	ct3.takeDamage(5);
	ct3.printInfo();
	ct3.beRepaired(2);
	ct3.printInfo();
	ct3.setEnergy(2);
	ct3.printInfo();
	for (int i = 0; i < 3; ++i)
	{
		ct3.attack("enemy");
	}
	ct3.printInfo();
	std::cout << '\n';

	return 0;
}
