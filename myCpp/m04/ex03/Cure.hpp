/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:50:11 by greita            #+#    #+#             */
/*   Updated: 2022/10/11 18:50:13 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Cure : public AMateria
{
public:
	Cure();
	~Cure();
	Cure(Cure const &orig);
	Cure &operator=(Cure const &orig);

	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif
