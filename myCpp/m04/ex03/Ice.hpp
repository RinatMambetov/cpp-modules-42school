/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 09:34:29 by greita            #+#    #+#             */
/*   Updated: 2022/10/09 17:44:47 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Ice : public AMateria
{
public:
	Ice();
	~Ice();
	Ice(Ice const &orig);
	Ice &operator=(Ice const &orig);

	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif
