/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:36:35 by greita            #+#    #+#             */
/*   Updated: 2022/10/19 17:00:49 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	std::cout << std::boolalpha;
	srand(static_cast<unsigned int>(time(0)));
	rand();

	Intern someRandomIntern;
	Form *scf;
	Form *rrf;
	Form *ppf;
	Form *fail;

	try
	{
		scf = someRandomIntern.makeForm("shrubbery creation", "scf_target");
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		ppf = someRandomIntern.makeForm("presidential pardon", "ppf_target");
		fail = someRandomIntern.makeForm("pardon", "fail_target");
	}
	catch (char const *e)
	{
		std::cerr << "Error: " << e << '\n';
	}

	std::cout << *rrf << '\n';
	std::cout << '\n';

	Bureaucrat b0("b0_name", lowestPossibleGrade);
	Bureaucrat b1("b1_name", highestPossibleGrade);

	try
	{
		rrf->beSigned(b1);
		std::cout << *rrf << '\n';
		rrf->execute(b1);
		b1.executeForm(*rrf);
	}
	catch (std::exception const &e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}

	delete scf;
	delete rrf;
	delete ppf;

	return 0;
}
