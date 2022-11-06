/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:13:07 by greita            #+#    #+#             */
/*   Updated: 2022/10/12 20:04:48 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

const int thoughtsSize(100);

class Brain
{
private:
	std::string *m_thoughts;

public:
	Brain();
	~Brain();
	Brain(const Brain &orig);
	Brain &operator=(const Brain &orig);

	const std::string *getThoughts() const;
	void setThought(const int index, const std::string &thought);
};

#endif
