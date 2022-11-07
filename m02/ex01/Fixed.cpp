/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:54:17 by greita            #+#    #+#             */
/*   Updated: 2022/09/27 12:31:01 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : m_value(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int value) : m_value(value << m_fractionalBits)
{
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float value)
	: m_value(static_cast<int>(roundf(value * (1 << m_fractionalBits))))
{
	std::cout << "Float constructor called\n";
}

Fixed::Fixed(const Fixed &orig) : m_value(orig.getRawBits())
{
	std::cout << "Copy constructor called\n";
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed &Fixed::operator=(const Fixed &orig)
{
	std::cout << "Copy assignment operator called\n";
	if (this == &orig)
		return *this;
	m_value = orig.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Fixed &num)
{
	out << num.toFloat();
	return out;
}

int Fixed::getRawBits(void) const
{
	return m_value;
}

void Fixed::setRawBits(int const raw)
{
	m_value = raw;
}

float Fixed::toFloat(void) const
{
	return static_cast<float>(m_value) / (1 << m_fractionalBits);
}

int Fixed::toInt(void) const
{
	return m_value >> m_fractionalBits;
}
