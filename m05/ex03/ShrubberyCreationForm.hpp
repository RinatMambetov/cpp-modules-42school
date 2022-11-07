/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:49:24 by greita            #+#    #+#             */
/*   Updated: 2022/10/17 17:49:29 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
#define SHRUBBERY_CREATION_FORM_HPP

#include "Form.hpp"
#include <fstream>

int const shrubberyCreationFormRequiredGradeSign(145);
int const shrubberyCreationFormRequiredGradeExec(137);

class ShrubberyCreationForm : public Form
{
private:
	ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &orig);

public:
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm(std::string const &target);
	ShrubberyCreationForm(ShrubberyCreationForm const &orig);

	virtual void execute(Bureaucrat const &executor) const;
};

#endif
