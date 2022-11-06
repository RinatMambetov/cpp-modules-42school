/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:54:57 by greita            #+#    #+#             */
/*   Updated: 2022/10/25 10:37:04 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>

Base *generate(void)
{
	int randNum = rand() % 3;
	if (randNum == 0)
		return new A;
	if (randNum == 1)
		return new B;
	if (randNum == 2)
		return new C;
	return 0;
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A\n";
	else if (dynamic_cast<B *>(p))
		std::cout << "B\n";
	else if (dynamic_cast<C *>(p))
		std::cout << "C\n";
}

void identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A\n";
		return;
	}
	catch (std::bad_cast const &)
	{
	}

	try
	{
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B\n";
		return;
	}
	catch (std::bad_cast const &)
	{
	}

	try
	{
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C\n";
		return;
	}
	catch (std::bad_cast const &)
	{
	}
}

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	rand();

	Base *base = generate();
	identify(base);
	identify(*base);

	delete base;

	return 0;
}
