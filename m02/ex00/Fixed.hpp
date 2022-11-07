/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:54:14 by greita            #+#    #+#             */
/*   Updated: 2022/09/17 11:54:16 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int m_value;
	static const int m_fractionalBits = 8;

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &orig);
	Fixed &operator=(const Fixed &orig);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif
