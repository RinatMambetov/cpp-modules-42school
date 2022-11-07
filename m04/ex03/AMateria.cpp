/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 09:24:49 by greita            #+#    #+#             */
/*   Updated: 2022/10/09 18:15:00 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const &type) : m_type(type) {}

AMateria::~AMateria() {}

AMateria::AMateria(AMateria const &orig) : m_type(orig.getType()) {}

AMateria &AMateria::operator=(AMateria const &orig)
{
	if (this == &orig)
		return *this;
	m_type = orig.getType();
	return *this;
}

std::string const &AMateria::getType() const { return m_type; }

void AMateria::setType(std::string const &type) { m_type = type; }

void AMateria::use(ICharacter &target) { static_cast<void>(target); }
