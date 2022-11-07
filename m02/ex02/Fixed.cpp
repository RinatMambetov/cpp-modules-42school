/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:54:17 by greita            #+#    #+#             */
/*   Updated: 2022/09/17 21:29:05 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : m_value(0) {}

Fixed::Fixed(const int value) : m_value(value << m_fractionalBits) {}

Fixed::Fixed(const float value)
	: m_value(static_cast<int>(roundf(value * (1 << m_fractionalBits)))) {}

Fixed::Fixed(const Fixed &orig) : m_value(orig.getRawBits()) {}

Fixed::~Fixed() {}

Fixed &Fixed::operator=(const Fixed &orig)
{
	if (this == &orig)
		return *this;
	m_value = orig.getRawBits();
	return *this;
}

bool operator>(const Fixed &num1, const Fixed &num2)
{
	return num1.toFloat() > num2.toFloat();
}

bool operator<(const Fixed &num1, const Fixed &num2)
{
	return num1.toFloat() < num2.toFloat();
}

bool operator>=(const Fixed &num1, const Fixed &num2)
{
	return !(num1 < num2);
}

bool operator<=(const Fixed &num1, const Fixed &num2)
{
	return !(num1 > num2);
}

bool operator==(const Fixed &num1, const Fixed &num2)
{
	return num1.toFloat() == num2.toFloat();
}

bool operator!=(const Fixed &num1, const Fixed &num2)
{
	return !(num1 == num2);
}

Fixed operator+(const Fixed &num1, const Fixed &num2)
{
	return Fixed(num1.toFloat() + num2.toFloat());
}

Fixed operator-(const Fixed &num1, const Fixed &num2)
{
	return Fixed(num1.toFloat() - num2.toFloat());
}

Fixed operator*(const Fixed &num1, const Fixed &num2)
{
	return Fixed(num1.toFloat() * num2.toFloat());
}

Fixed operator/(const Fixed &num1, const Fixed &num2)
{
	assert(num2.toFloat() != 0);
	return Fixed(num1.toFloat() / num2.toFloat());
}

Fixed &Fixed::operator++()
{
	float temp = this->toFloat();
	this->setRawBits(++temp);
	return *this;
}

Fixed &Fixed::operator--()
{
	float temp = this->toFloat();
	this->setRawBits(--temp);
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp(m_value);
	++(*this);
	return temp;
}

Fixed Fixed::operator--(int)
{
	Fixed temp(m_value);
	--(*this);
	return temp;
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

Fixed &Fixed::min(Fixed &num1, Fixed &num2)
{
	return (num1 < num2) ? num1 : num2;
}

const Fixed &Fixed::min(const Fixed &num1, const Fixed &num2)
{
	return (num1 < num2) ? num1 : num2;
}

Fixed &Fixed::max(Fixed &num1, Fixed &num2)
{
	return (num1 > num2) ? num1 : num2;
}

const Fixed &Fixed::max(const Fixed &num1, const Fixed &num2)
{
	return (num1 > num2) ? num1 : num2;
}
