/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:34:44 by greita            #+#    #+#             */
/*   Updated: 2022/11/06 15:53:55 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include "colorPrint.hpp"
#include <vector>
#include <list>
#include <forward_list>
#include <array>
#include <deque>

int main()
{
	int const size(10);

	std::array<int, size> a;
	std::vector<int> v;
	std::list<int> l;
	std::forward_list<int> fl;
	std::deque<int> d;
	for (int i = 0; i < size; ++i)
	{
		a[i] = i;
		v.push_back(i);
		l.push_back(i);
		fl.push_front(i);
		d.push_back(i);
	}

	colorPrint("array", B_CYAN);
	testContainer(a, size);
	std::cout << '\n';

	colorPrint("vector", B_CYAN);
	testContainer(v, size);
	std::cout << '\n';

	colorPrint("list", B_CYAN);
	testContainer(l, size);
	std::cout << '\n';

	colorPrint("forward_list", B_CYAN);
	testContainer(fl, size);
	std::cout << '\n';

	colorPrint("deque", B_CYAN);
	testContainer(d, size);

	return 0;
}
