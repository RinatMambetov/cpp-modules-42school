/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:54:20 by greita            #+#    #+#             */
/*   Updated: 2022/10/04 19:54:22 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
protected:
	std::string m_type;

public:
	Animal();
	Animal(const std::string &type);
	virtual ~Animal();
	Animal(const Animal &orig);
	Animal &operator=(const Animal &orig);

	std::string getType() const;
	void setType(std::string type);
	virtual void makeSound() const;
};

#endif
