/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 09:34:32 by greita            #+#    #+#             */
/*   Updated: 2022/10/09 17:39:07 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::~Ice() {}

Ice::Ice(Ice const &orig) : AMateria(orig) {}

Ice &Ice::operator=(Ice const &orig)
{
	if (this == &orig)
		return *this;
	return *this;
}

AMateria *Ice::clone() const
{
	Ice *temp = new Ice(*this);
	return temp;
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
