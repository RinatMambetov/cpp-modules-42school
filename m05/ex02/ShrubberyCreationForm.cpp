/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:49:20 by greita            #+#    #+#             */
/*   Updated: 2022/10/17 17:49:22 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target)
	: Form("scf_name", shrubberyCreationFormRequiredGradeSign, shrubberyCreationFormRequiredGradeExec, target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &orig) : Form(orig) {}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	checkRequirements(executor);
	try
	{
		std::fstream outf(getTarget() + "_shrubbery", std::ios::out);
		outf << "asciitree\n";
		outf << " +-- sometimes\n";
		outf << " |   +-- you\n";
		outf << " +-- just\n";
		outf << " |   +-- want\n";
		outf << " |       +-- to\n";
		outf << " |       +-- draw\n";
		outf << " +-- trees\n";
		outf << " +-- in\n";
		outf << "     +-- your\n";
		outf << "         +-- terminal\n";
		std::cout << "Bureaucrat " << executor.getName() << " execute form " << getName() << ".\n";
		outf.close();
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
}
