/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:54:42 by greita            #+#    #+#             */
/*   Updated: 2022/10/08 11:54:20 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	Brain b0;
	Brain b1 = b0;
	b1.setThought(0, "zero thought");
	std::cout << b1.getThoughts()[0] << '\n';
	Brain b2;
	b2 = b1;
	std::cout << b2.getThoughts()[0] << '\n';
	std::cout << '\n';

	Cat c0;
	Cat c1("Cat");
	std::cout << '\n';

	c1.setBrain(&b2);
	std::cout << '\n';

	Cat c2(c1);
	std::cout << c2.getType() << '\n';
	c2.makeSound();
	std::cout << c2.getBrain()->getThoughts()[0] << '\n';
	std::cout << '\n';

	Animal &ref1 = c2;
	std::cout << ref1.getType() << '\n';
	ref1.makeSound();

	Animal *ptr1 = &c2;
	std::cout << ptr1->getType() << '\n';
	ptr1->makeSound();
	std::cout << '\n';

	Dog d0;
	Dog d1("Dog");
	std::cout << '\n';

	d1.setBrain(&b2);
	std::cout << '\n';

	Dog d2;
	d2 = d1;
	std::cout << d2.getType() << '\n';
	d2.makeSound();
	std::cout << d2.getBrain()->getThoughts()[0] << '\n';
	std::cout << '\n';

	const int arraySize(6);

	const Animal *array[arraySize];
	for (int i = 0; i < arraySize / 2; ++i)
	{
		const Animal *dog = new Dog();
		const Animal *cat = new Cat();
		array[i * 2] = dog;
		array[i * 2 + 1] = cat;
	}
	std::cout << '\n';

	for (int i = 0; i < arraySize; ++i)
	{
		delete array[i];
	}
	std::cout << '\n';

	Dog basic;
	{
		Dog tmp = basic;
	}
	std::cout << '\n';

	Animal a;
	a.makeSound();

	return 0;
}
