/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 09:24:47 by greita            #+#    #+#             */
/*   Updated: 2022/10/09 18:07:00 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>

class ICharacter;

class AMateria
{
protected:
	std::string m_type;

public:
	AMateria();
	AMateria(std::string const &type);
	virtual ~AMateria();
	AMateria(AMateria const &orig);
	AMateria &operator=(AMateria const &orig);

	std::string const &getType() const;
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);

	void setType(std::string const &type);
};

#endif
