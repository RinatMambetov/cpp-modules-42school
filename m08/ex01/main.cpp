/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:09:40 by greita            #+#    #+#             */
/*   Updated: 2022/11/02 19:09:42 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

int main()
{
	// check constructor
	Span s0(5);
	// check copy constructor
	Span s1(s0);
	Span s2(3);
	// check operator=
	s2 = s1;
	std::cout << s2.getCapacity() << '\n';

	Span sp = Span(5);
	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		// check limit of span
		sp.addNumber(0);
	}
	catch (std::exception const &e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}

	Span sp0(5);
	Span sp1(5);
	sp1.addNumber(2);

	try
	{
		std::cout << sp.shortestSpan() << std::endl;
		// check size==0 of span
		std::cout << sp0.shortestSpan() << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
	try
	{
		std::cout << sp.longestSpan() << std::endl;
		// check size==1 of span
		std::cout << sp1.longestSpan() << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}

	// check addNumber with range of iterators
	srand(static_cast<unsigned int>(time(0)));
	rand();

	std::vector<int> rv;
	for (size_t i = 0; i < 20000; ++i)
	{
		rv.push_back(getRandomNumber(-0.1e+10, 0.1e+10));
	}
	try
	{
		Span sp0(20000);
		Span sp1(19999);
		sp0.addNumber(rv.begin(), rv.end());
		std::cout << sp0.shortestSpan() << std::endl;
		std::cout << sp0.longestSpan() << std::endl;
		// check limit of span
		sp1.addNumber(rv.begin(), rv.end());
	}
	catch (std::exception const &e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}

	return 0;
}
