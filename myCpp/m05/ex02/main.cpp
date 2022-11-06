/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:36:35 by greita            #+#    #+#             */
/*   Updated: 2022/10/17 17:43:10 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	std::cout << std::boolalpha;
	srand(static_cast<unsigned int>(time(0)));
	rand();

	Bureaucrat b0("b0_name", lowestPossibleGrade);
	Bureaucrat b1("b1_name", highestPossibleGrade);

	ShrubberyCreationForm scf0("scf0_target");
	ShrubberyCreationForm scf1(scf0);

	std::cout << scf0 << '\n';
	std::cout << scf1 << '\n';
	std::cout << '\n';

	try
	{
		scf0.beSigned(b1);
		std::cout << scf0 << '\n';
		scf0.execute(b1);
		b1.executeForm(scf0);
	}
	catch (std::exception const &e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
	std::cout << '\n';

	RobotomyRequestForm rrf0("rrf0_target");

	try
	{
		rrf0.beSigned(b1);
		std::cout << rrf0 << '\n';
		rrf0.execute(b1);
		b1.executeForm(rrf0);
	}
	catch (std::exception const &e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
	std::cout << '\n';

	PresidentialPardonForm ppf0("ppf0_target");

	try
	{
		ppf0.beSigned(b1);
		std::cout << ppf0 << '\n';
		ppf0.execute(b1);
		b1.executeForm(ppf0);
	}
	catch (std::exception const &e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}

	return 0;
}
