/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 18:08:10 by greita            #+#    #+#             */
/*   Updated: 2022/10/28 14:27:45 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP

template <typename T>

void swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>

T const &min(T const &a, T const &b)
{
	if (a == b)
		return b;
	return a > b ? b : a;
}

template <typename T>

T const &max(T const &a, T const &b)
{
	if (a == b)
		return b;
	return a > b ? a : b;
}

#endif
