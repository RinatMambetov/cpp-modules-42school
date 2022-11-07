/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:34:46 by greita            #+#    #+#             */
/*   Updated: 2022/11/06 10:57:49 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include "colorPrint.hpp"

template <typename T>
typename T::iterator easyfind(T &c, int num)
{
	typename T::iterator it;
	it = std::find(c.begin(), c.end(), num);
	if (it == c.end())
		throw "Element not found!";
	return it;
}

template <typename T>
void printContainer(T &c, int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << *easyfind(c, i) << ' ';
	}
	std::cout << '\n';
}

template <typename T>
void testContainer(T &c, int size)
{
	try
	{
		printContainer(c, size);
		std::cout << *easyfind(c, size) << '\n';
	}
	catch (char const *e)
	{
		colorError(e, C_RED);
	}
}

#endif
