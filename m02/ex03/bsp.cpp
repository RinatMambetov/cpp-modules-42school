/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:44:39 by greita            #+#    #+#             */
/*   Updated: 2022/09/18 19:12:50 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float calcTriArea(Point const &a, Point const &b, Point const &c)
{
	float det = ((a.getX() - c.getX()) * (b.getY() - c.getY()) - (b.getX() - c.getX()) * (a.getY() - c.getY())).toFloat();
	if (det < 0)
		return -det / 2.0f;
	else
		return det / 2.0f;
}

bool checkEdge(Point const &a, Point const &b, Point const &point)
{
	if ((point.getX() - a.getX()) * (b.getY() - a.getY()) == (b.getX() - a.getX()) * (point.getY() - a.getY()))
	{
		if (Fixed::min(a.getY(), b.getY()) <= point.getY() &&
			Fixed::max(a.getY(), b.getY()) >= point.getY() &&
			Fixed::min(a.getX(), b.getX()) <= point.getX() &&
			Fixed::max(a.getX(), b.getX()) >= point.getX())
			return true;
	}
	return false;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	if (a == point || b == point || c == point)
		return false;

	if (checkEdge(a, b, point) || checkEdge(b, c, point) || checkEdge(a, c, point))
		return false;

	float totalArea = calcTriArea(a, b, c);
	float area1 = calcTriArea(point, a, b);
	float area2 = calcTriArea(point, b, c);
	float area3 = calcTriArea(point, a, c);

	if (area1 + area2 + area3 > totalArea)
		return false;
	else
		return true;
}
