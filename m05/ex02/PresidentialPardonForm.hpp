/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:49:11 by greita            #+#    #+#             */
/*   Updated: 2022/10/17 17:49:12 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP

#include "Form.hpp"

int const presidentialPardonFormRequiredGradeSign(25);
int const presidentialPardonFormRequiredGradeExec(5);

class PresidentialPardonForm : public Form
{
private:
	PresidentialPardonForm();
	PresidentialPardonForm &operator=(PresidentialPardonForm const &orig);

public:
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm(std::string const &target);
	PresidentialPardonForm(PresidentialPardonForm const &orig);

	virtual void execute(Bureaucrat const &executor) const;
};

#endif
