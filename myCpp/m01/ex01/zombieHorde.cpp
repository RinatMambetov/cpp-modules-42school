/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:28:18 by greita            #+#    #+#             */
/*   Updated: 2022/09/16 11:28:20 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	assert(N > 0);
	Zombie *array = new Zombie[N];
	for (int i = 0; i < N; ++i)
	{
		array[i].setName(name);
	}

	return array;
}
