/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:27:58 by greita            #+#    #+#             */
/*   Updated: 2022/09/16 11:28:00 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <cassert>

class Zombie
{
private:
	std::string m_name;

public:
	Zombie() {}
	~Zombie();
	void announce(void) const;
	void setName(std::string name);
};

Zombie *zombieHorde(int N, std::string name);

#endif
