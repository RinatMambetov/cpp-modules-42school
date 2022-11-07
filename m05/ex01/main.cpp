/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:36:35 by greita            #+#    #+#             */
/*   Updated: 2022/10/19 18:46:47 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat b0("b0", 50);
	std::cout << b0 << '\n';

	Form f0("f0", 70, 100);
	Form f1("f1", 20, 100);
	Form f2(f0);
	Form f3("f3", 70, 100);

	std::cout << std::boolalpha;
	std::cout << f0 << '\n';
	std::cout << f3 << '\n';
	std::cout << f1 << '\n';
	std::cout << '\n';

	try
	{
		Form f3("f3", highestPossibleGradeToSign - 1, highestPossibleGradeToSign);
	}
	catch (std::exception const &e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}

	try
	{
		Form f4("f4", lowestPossibleGradeToSign + 1, highestPossibleGradeToSign);
	}
	catch (std::exception const &e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
	std::cout << '\n';

	try
	{
		f0.beSigned(b0);
		f1.beSigned(b0);
	}
	catch (std::exception)
	{
	}
	std::cout << f0 << '\n';
	std::cout << '\n';

	try
	{
		b0.signForm(f2);
		b0.signForm(f3);
	}
	catch (std::exception)
	{
	}
	std::cout << f3 << '\n';

	return 0;
}
