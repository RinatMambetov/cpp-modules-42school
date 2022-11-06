/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:50:40 by greita            #+#    #+#             */
/*   Updated: 2022/10/11 18:50:42 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <iostream>

int const sourceCapacity(4);

class MateriaSource : public IMateriaSource
{
private:
	AMateria *m_source[sourceCapacity];

public:
	MateriaSource();
	virtual ~MateriaSource();
	MateriaSource(MateriaSource const &orig);
	MateriaSource &operator=(MateriaSource const &orig);

	virtual void learnMateria(AMateria *);
	virtual AMateria *createMateria(std::string const &type);
	void selfClean();
};

#endif
