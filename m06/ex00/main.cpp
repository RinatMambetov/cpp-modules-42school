/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:54:57 by greita            #+#    #+#             */
/*   Updated: 2022/10/24 22:15:08 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MultyType.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "Error: wrong argument!\n";
		return 1;
	}
	std::string arg(argv[1]);
	if (arg.find_first_not_of("\t\n ") == std::string::npos)
	{
		std::cerr << "Error: empty argument!\n";
		return 1;
	}
	MultyType mt(arg);

	std::cout << "char: ";
	mt.printChar();
	std::cout << "\n";

	std::cout << "int: ";
	mt.printInt();
	std::cout << '\n';

	std::cout << "float: ";
	mt.printFloat();
	std::cout << '\n';

	std::cout << "double: ";
	mt.printDouble();
	std::cout << '\n';

	return 0;
}
