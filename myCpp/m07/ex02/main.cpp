/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 23:12:10 by greita            #+#    #+#             */
/*   Updated: 2022/10/28 14:34:26 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

#define MAX_VAL 750

int main()
{
	unsigned int const length(5);

	// check default constructor
	Array<int> a0;
	// check constructor
	Array<int> a1(length);
	Array<std::string> a2(length);

	try
	{
		std::cout << a1 << '\n';
		// check operator[]
		a1[0] = 11;
		a1[length - 1] = 22;
		std::cout << a1 << '\n';
		// check operator[]
		std::cout << a1[0] << '\n';
		// check copy constructor
		Array<int> a3(a1);
		std::cout << a3 << '\n';
		// check exception
		a1[-length] = 11;
	}
	catch (std::exception const &e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}

	try
	{
		std::cout << a2 << '\n';
		a2[0] = "first";
		a2[length - 1] = "last";
		std::cout << a2 << '\n';
		Array<std::string> a4;
		// check operator=
		a4 = a2;
		std::cout << a4 << '\n';
		a2[length] = "wrong";
	}
	catch (std::exception const &e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}

	Array<int> numbers(MAX_VAL);
	int *mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	// SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete[] mirror;

	return 0;
}
