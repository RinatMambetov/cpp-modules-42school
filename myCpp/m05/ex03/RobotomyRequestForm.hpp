/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:49:16 by greita            #+#    #+#             */
/*   Updated: 2022/10/17 17:49:19 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
#define ROBOTOMY_REQUEST_FORM_HPP

#include "Form.hpp"

int const robotomyRequestFormRequiredGradeSign(72);
int const robotomyRequestFormRequiredGradeExec(45);

class RobotomyRequestForm : public Form
{
private:
	RobotomyRequestForm();
	RobotomyRequestForm &operator=(RobotomyRequestForm const &orig);

public:
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(RobotomyRequestForm const &orig);

	virtual void execute(Bureaucrat const &executor) const;
};

#endif
