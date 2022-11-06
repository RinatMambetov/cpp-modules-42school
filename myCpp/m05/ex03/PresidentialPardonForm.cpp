/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:49:07 by greita            #+#    #+#             */
/*   Updated: 2022/10/17 17:49:09 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target)
	: Form("ppf_name", presidentialPardonFormRequiredGradeSign, presidentialPardonFormRequiredGradeExec, target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &orig) : Form(orig) {}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	checkRequirements(executor);
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox.\n";
}
