/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:54:18 by greita            #+#    #+#             */
/*   Updated: 2022/09/20 15:46:20 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

void getBSP(Point const &a, Point const &b, Point const &c, Point const &point)
{
	if (bsp(a, b, c, point) == true)
		std::cout << "In the triangle\n";
	else
		std::cout << "Outside the triangle\n";
}

int main()
{
	Point const a(11.3f, 17.4f);
	Point const b(11.3f, 1.7f);
	Point const c(2.5f, 2.6f);

	// inside
	Point const p1(7.8f, 3.1f);
	getBSP(a, b, c, p1);

	// on vertex
	Point const p2(11.3f, 17.4f);
	getBSP(a, b, c, p2);

	// on edge
	Point const p3(11.3f, 10.4f);
	getBSP(a, b, c, p3);

	// outside
	Point p4(-21.3f, 10.4f);
	getBSP(a, b, c, p4);

	// copy assignment operator overload
	p4 = p1;
	getBSP(a, b, c, p4);

	// copy constructor
	Point const p5(p4);
	getBSP(a, b, c, p5);

	return 0;
}
