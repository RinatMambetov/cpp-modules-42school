/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:14:43 by greita            #+#    #+#             */
/*   Updated: 2022/11/02 18:37:58 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "iostream"

class Awesome
{
public:
	Awesome(void) : _n(42) { return; }
	int get(void) const { return this->_n; }

private:
	int _n;
};

std::ostream &operator<<(std::ostream &o, Awesome const &rhs)
{
	o << rhs.get();
	return o;
}

template <typename T>

void print(T const &x)
{
	std::cout << x << '\n';
	return;
}

int main()
{
	int const length(5);
	int const wrongLength(-5);

	int arr0[length] = {0, 1, 2, 3, 4};
	try
	{
		// check negative length
		iter(arr0, wrongLength, &print);
	}
	catch (char const *e)
	{
		std::cerr << "Error: " << e << '\n';
	}

	int *arr1 = new int[length];
	delete[] arr1;
	arr1 = nullptr;

	try
	{
		// check null pointer
		iter(arr1, length, &print);
	}
	catch (char const *e)
	{
		std::cerr << "Error: " << e << '\n';
	}

	double arr2[length] = {0.1, 1.2, 2.3, 3.4, 4.5};
	std::string arr3[length] = {"one", "two", "three", "four", "five"};
	Awesome arr4[length];

	try
	{
		iter(arr0, length, &print);
		iter(arr2, length, &print);
		iter(arr3, length, &print);
		iter(arr4, length, &print);
	}
	catch (char const *e)
	{
		std::cerr << "Error: " << e << '\n';
	}

	return 0;
}
