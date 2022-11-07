/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 22:12:08 by greita            #+#    #+#             */
/*   Updated: 2022/08/15 09:36:01 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"
#include <string>
#include <iostream>

std::string getInfo(std::string request)
{
	std::cout << request;
	std::string result;
	std::cin >> result;
	return result;
}

int increaseIndex(int index, int minIndex, int maxIndex)
{
	++index;
	if (index == maxIndex + 1)
	{
		index = minIndex;
	}
	return index;
}

int getSearchIndex(int minIndex, int maxIndex)
{
	int index(0);

	while (index > maxIndex || index < minIndex)
	{
		std::cout << "Enter index (1-8): ";
		std::cin >> index;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<int>::max(), '\n');
		}
	}
	return index;
}

std::string shrinkString(std::string str, int width)
{
	if (static_cast<int>(str.length()) > width)
	{
		str = str.substr(0, width - 1);
		str.push_back('.');
	}
	return str;
}
