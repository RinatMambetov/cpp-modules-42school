/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:54:57 by greita            #+#    #+#             */
/*   Updated: 2022/10/04 19:54:58 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor called\n";
	setType("WrongCat");
}

WrongCat::WrongCat(const std::string &type) : WrongAnimal(type)
{
	std::cout << "WrongCat constructor called\n";
}

WrongCat::~WrongCat() { std::cout << "WrongCat destructor called\n"; }

WrongCat::WrongCat(const WrongCat &orig) : WrongAnimal(orig)
{
	std::cout << "WrongCat copy constructor called\n";
}

WrongCat &WrongCat::operator=(const WrongCat &orig)
{
	std::cout << "WrongCat copy assignment operator called\n";
	if (this == &orig)
		return *this;
	setType(orig.getType());
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong cat sound...\n";
}
