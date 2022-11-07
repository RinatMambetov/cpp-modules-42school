/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:50:07 by greita            #+#    #+#             */
/*   Updated: 2022/10/11 18:50:09 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::~Cure() {}

Cure::Cure(Cure const &orig) : AMateria(orig) {}

Cure &Cure::operator=(Cure const &orig)
{
	if (this == &orig)
		return *this;
	return *this;
}

AMateria *Cure::clone() const
{
	Cure *temp = new Cure(*this);
	return temp;
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *\n";
}
