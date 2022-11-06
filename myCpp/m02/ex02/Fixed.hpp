/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:54:14 by greita            #+#    #+#             */
/*   Updated: 2022/09/17 20:54:08 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int m_value;
	static const int m_fractionalBits = 8;

public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	~Fixed();
	Fixed(const Fixed &orig);
	Fixed &operator=(const Fixed &orig);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

	Fixed &operator++();
	Fixed &operator--();
	Fixed operator++(int);
	Fixed operator--(int);

	static Fixed &min(Fixed &num1, Fixed &num2);
	static const Fixed &min(const Fixed &num1, const Fixed &num2);
	static Fixed &max(Fixed &num1, Fixed &num2);
	static const Fixed &max(const Fixed &num1, const Fixed &num2);
};

std::ostream &operator<<(std::ostream &out, const Fixed &num);
bool operator>(const Fixed &num1, const Fixed &num2);
bool operator<(const Fixed &num1, const Fixed &num2);
bool operator>=(const Fixed &num1, const Fixed &num2);
bool operator<=(const Fixed &num1, const Fixed &num2);
bool operator==(const Fixed &num1, const Fixed &num2);
bool operator!=(const Fixed &num1, const Fixed &num2);
Fixed operator+(const Fixed &num1, const Fixed &num2);
Fixed operator-(const Fixed &num1, const Fixed &num2);
Fixed operator*(const Fixed &num1, const Fixed &num2);
Fixed operator/(const Fixed &num1, const Fixed &num2);

#endif
