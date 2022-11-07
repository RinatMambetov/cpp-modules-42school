/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:28:34 by greita            #+#    #+#             */
/*   Updated: 2022/09/16 11:28:35 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie foo("Foo");
	foo.announce();

	Zombie *bar = newZombie("Bar");
	bar->announce();
	delete bar;

	randomChump("Buz");

	return 0;
}
