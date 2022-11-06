/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:54:17 by greita            #+#    #+#             */
/*   Updated: 2022/09/17 12:08:47 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : m_value(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed &orig)
{
	std::cout << "Copy constructor called\n";
	m_value = orig.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &orig)
{
	std::cout << "Copy assignment operator called\n";
	if (this == &orig)
		return *this;
	m_value = orig.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return m_value;
}

void Fixed::setRawBits(int const raw)
{
	m_value = raw;
}
