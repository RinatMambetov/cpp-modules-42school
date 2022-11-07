/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:14:45 by greita            #+#    #+#             */
/*   Updated: 2022/10/27 20:14:48 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template <typename T>

void iter(T const *array, int const length, void (*func)(T const &))
{
	if (array == 0)
		throw("The pointer to array is NULL!");
	if (length < 0)
		throw("The length of array MUST be greater then -1!");
	for (int i = 0; i < length; ++i)
	{
		func(array[i]);
	}
	return;
}

#endif
