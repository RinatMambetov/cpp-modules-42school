/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:47:26 by greita            #+#    #+#             */
/*   Updated: 2022/10/19 18:24:00 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(Intern const &orig) { (void)orig; }

Intern &Intern::operator=(Intern const &orig)
{
	(void)orig;
	return *this;
}

int getFormId(std::string const &name)
{
	std::string const formNames[formNum] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"};

	for (int i = 0; i < formNum; ++i)
	{
		if (formNames[i].compare(name) == 0)
			return i;
	}
	return -1;
}

Form *makeShrubberyCreationForm(std::string const &formTarget)
{
	return new ShrubberyCreationForm(formTarget);
}

Form *makeRobotomyRequestForm(std::string const &formTarget)
{
	return new RobotomyRequestForm(formTarget);
}

Form *makePresidentialPardonForm(std::string const &formTarget)
{
	return new PresidentialPardonForm(formTarget);
}

Form *Intern::makeForm(std::string const &formName, std::string const &formTarget) const
{
	int formId = getFormId(formName);
	if (formId == -1)
	{
		throw("The form name passed as parameter doesn’t exist!");
	}
	else
	{
		Form *(*ptrFuncs[formNum])(std::string const &) = {
			&makeShrubberyCreationForm,
			&makeRobotomyRequestForm,
			&makePresidentialPardonForm};

		return (*ptrFuncs[formId])(formTarget);
	}
	return 0;
}
