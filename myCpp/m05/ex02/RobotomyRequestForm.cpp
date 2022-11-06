/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:49:14 by greita            #+#    #+#             */
/*   Updated: 2022/10/17 17:49:15 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target)
	: Form("rrf_name", robotomyRequestFormRequiredGradeSign, robotomyRequestFormRequiredGradeExec, target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &orig) : Form(orig) {}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	checkRequirements(executor);
	std::cout << "Some drilling noises...\n";
	if (rand() % 2 == 1)
	{
		std::cout << getTarget() << " has been robotomized successfully.\n";
	}
	else
	{
		std::cout << "The robotomy failed.\n";
	}
}
