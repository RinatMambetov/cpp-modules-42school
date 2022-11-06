/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MultyType.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:54:55 by greita            #+#    #+#             */
/*   Updated: 2022/10/24 22:15:01 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MULTY_TYPE_HPP
#define MULTY_TYPE_HPP

#include <string>
#include <iostream>

class MultyType
{
private:
	MultyType();
	std::string m_value;

public:
	~MultyType();
	MultyType(std::string &value);
	MultyType(MultyType const &orig);
	MultyType &operator=(MultyType const &orig);

	std::string const &getValue() const;

	operator char() const;
	void printChar() const;

	operator int() const;
	void printInt() const;

	operator float() const;
	void printFloat() const;

	operator double() const;
	void printDouble() const;
};

#endif
