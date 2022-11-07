/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:25:18 by greita            #+#    #+#             */
/*   Updated: 2022/10/17 20:48:30 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		Harl harl;
		int lvlNum = harl.getLvlId(argv[1]);
		switch (lvlNum)
		{
		case LEVEL_DEBUG:
			harl.complain(LEVEL_DEBUG);
		case LEVEL_INFO:
			harl.complain(LEVEL_INFO);
		case LEVEL_WARNING:
			harl.complain(LEVEL_WARNING);
		case LEVEL_ERROR:
			harl.complain(LEVEL_ERROR);
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
			break;
		}
	}
	else
	{
		std::cerr << "Error: bad arguments\n";
		exit(1);
	}

	return 0;
}
