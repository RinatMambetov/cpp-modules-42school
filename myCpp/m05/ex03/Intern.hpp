/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:47:02 by greita            #+#    #+#             */
/*   Updated: 2022/10/19 17:17:02 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>

int const formNum(3);

class Intern
{
public:
	Intern();
	~Intern();
	Intern(Intern const &orig);
	Intern &operator=(Intern const &orig);

	Form *makeForm(std::string const &formName, std::string const &formTarget) const;
};

#endif
