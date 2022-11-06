/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:36:18 by greita            #+#    #+#             */
/*   Updated: 2022/10/20 16:49:14 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat b0("b0", 50);
	Bureaucrat b1("b1", 150);
	Bureaucrat b2(b0);

	try
	{
		std::cout << b1 << '\n';
		b1.incrementGrade();
		std::cout << b1 << '\n';
		b1.decrementGrade();
		std::cout << b1 << '\n';
	}
	catch (std::exception const &e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}

	try
	{
		Bureaucrat b4("b4", lowestPossibleGrade + 1);
	}
	catch (std::exception const &e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}

	try
	{
		Bureaucrat b5("b5", highestPossibleGrade - 1);
	}
	catch (std::exception const &e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}

	return 0;
}
