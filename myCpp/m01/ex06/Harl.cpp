/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:25:21 by greita            #+#    #+#             */
/*   Updated: 2022/10/19 16:55:57 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}
void Harl::info(void)
{
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}
void Harl::warning(void)
{
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}
void Harl::error(void)
{
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(int lvlNum)
{
	void (Harl::*ptrFuncs[size])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error};
	(this->*ptrFuncs[lvlNum])();
}

int Harl::getLvlId(std::string level) const
{
	std::string lvls[size] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < size; ++i)
	{
		if (lvls[i].compare(level) == 0)
			return i;
	}
	return -1;
}
