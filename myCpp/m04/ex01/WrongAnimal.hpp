/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:54:54 by greita            #+#    #+#             */
/*   Updated: 2022/10/04 19:54:55 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
protected:
	std::string m_type;

public:
	WrongAnimal();
	WrongAnimal(const std::string &type);
	virtual ~WrongAnimal();
	WrongAnimal(const WrongAnimal &orig);
	WrongAnimal &operator=(const WrongAnimal &orig);

	std::string getType() const;
	void setType(std::string type);
	void makeSound() const;
};

#endif
