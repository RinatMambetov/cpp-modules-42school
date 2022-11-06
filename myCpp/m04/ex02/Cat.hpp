/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:54:27 by greita            #+#    #+#             */
/*   Updated: 2022/10/07 22:15:05 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *m_brain;

public:
	Cat();
	Cat(const std::string &type);
	virtual ~Cat();
	Cat(const Cat &orig);
	Cat &operator=(const Cat &orig);

	virtual void makeSound() const;
	const Brain *getBrain() const;
	void setBrain(Brain *brain);
};

#endif
