/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:44:25 by greita            #+#    #+#             */
/*   Updated: 2022/09/20 15:35:41 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : m_x(0), m_y(0) {}

Point::Point(const float x, const float y)
	: m_x(x), m_y(y) {}

Point::~Point() {}

Point::Point(const Point &orig)
	: m_x(orig.getX()), m_y(orig.getY()) {}

Point const Point::operator=(const Point &orig)
{
	if (this == &orig)
		return *this;

	new (this) Point(orig);
	return *this;
}

Fixed const &Point::getX() const
{
	return m_x;
}

Fixed const &Point::getY() const
{
	return m_y;
}

bool operator==(const Point &p1, const Point &p2)
{
	return p1.getX() == p2.getX() && p1.getY() == p2.getY();
}
