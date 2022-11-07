/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MultyType.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:55:00 by greita            #+#    #+#             */
/*   Updated: 2022/10/24 22:14:57 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MultyType.hpp"

MultyType::~MultyType() {}

MultyType::MultyType(std::string &value) : m_value(value) {}

MultyType::MultyType(MultyType const &orig) : m_value(orig.getValue()) {}

MultyType &MultyType::operator=(MultyType const &orig)
{
	if (this == &orig)
		return *this;
	m_value = orig.getValue();
	return *this;
}

std::string const &MultyType::getValue() const { return m_value; }

MultyType::operator char() const
{
	char ch = std::stoi(m_value);
	if (ch < ' ' || ch > '~')
	{
		throw("Non displayable");
	}
	return ch;
}

void MultyType::printChar() const
{
	try
	{
		char ch = static_cast<char>(*this);
		std::cout << '\'' << ch << '\'';
	}
	catch (char const *e)
	{
		std::cout << e;
	}
	catch (std::exception const &e)
	{
		std::cout << "impossible";
	}
}

MultyType::operator int() const
{
	return std::stoi(m_value);
}

void MultyType::printInt() const
{
	try
	{
		std::cout << static_cast<int>(*this);
	}
	catch (std::exception const &e)
	{
		std::cout << "impossible";
	}
}

MultyType::operator float() const
{
	return std::stof(m_value);
}

void MultyType::printFloat() const
{
	try
	{
		std::cout.precision(1);
		std::cout << std::fixed << static_cast<float>(*this) << 'f';
	}
	catch (std::exception const &e)
	{
		std::cout << "impossible";
	}
}

MultyType::operator double() const
{
	return std::stod(m_value);
}

void MultyType::printDouble() const
{
	try
	{
		std::cout.precision(1);
		std::cout << std::fixed << static_cast<double>(*this);
	}
	catch (std::exception const &e)
	{
		std::cout << "impossible";
	}
}
