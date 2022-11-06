/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:54:57 by greita            #+#    #+#             */
/*   Updated: 2022/10/24 22:44:04 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdint>
#include <iostream>

struct Data
{
	bool b;
	char ch;
	int num;
	double d;
};

uintptr_t serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main()
{
	std::cout << std::boolalpha;

	Data *oldData = new Data;
	oldData->b = true;
	oldData->ch = 'a';
	oldData->num = 42;
	oldData->d = 21.21;

	uintptr_t raw = serialize(oldData);
	Data *newData = deserialize(raw);

	std::cout << newData->b << '\n';
	std::cout << newData->ch << '\n';
	std::cout << newData->num << '\n';
	std::cout << newData->d << '\n';

	delete oldData;

	return 0;
}
