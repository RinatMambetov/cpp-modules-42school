/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:27:49 by greita            #+#    #+#             */
/*   Updated: 2022/09/16 11:27:50 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	const int size = 5;
	Zombie *horde = zombieHorde(size, "Foo");
	for (int i = 0; i < size; ++i)
	{
		horde[i].announce();
	}
	delete[] horde;

	return 0;
}
