/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:44:30 by greita            #+#    #+#             */
/*   Updated: 2022/09/20 15:26:09 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	Fixed const m_x;
	Fixed const m_y;

public:
	Point();
	Point(const float x, const float y);
	~Point();
	Point(const Point &orig);
	Point const operator=(const Point &orig);

	Fixed const &getX() const;
	Fixed const &getY() const;
};

bool operator==(const Point &p1, const Point &p2);

#endif
