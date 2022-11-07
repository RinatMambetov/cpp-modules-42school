/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 20:27:50 by greita            #+#    #+#             */
/*   Updated: 2022/09/16 20:27:54 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
	std::string m_name;

public:
	Zombie(std::string name) : m_name(name) {}
	~Zombie();
	void announce(void) const;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
