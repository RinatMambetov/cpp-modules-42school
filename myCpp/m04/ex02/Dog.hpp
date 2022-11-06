/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:54:33 by greita            #+#    #+#             */
/*   Updated: 2022/10/08 10:35:37 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *m_brain;

public:
	Dog();
	Dog(const std::string &type);
	virtual ~Dog();
	Dog(const Dog &orig);
	Dog &operator=(const Dog &orig);

	virtual void makeSound() const;
	const Brain *getBrain() const;
	void setBrain(Brain *brain);
};

#endif
