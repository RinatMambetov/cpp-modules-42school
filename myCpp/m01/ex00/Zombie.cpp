/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:28:52 by greita            #+#    #+#             */
/*   Updated: 2022/09/16 11:28:54 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie()
{
	std::cout << m_name << " destroyed\n";
}

void Zombie::announce(void) const
{
	std::cout << m_name << ": BraiiiiiiinnnzzzZ...\n";
}
