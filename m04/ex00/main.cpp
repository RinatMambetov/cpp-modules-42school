/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:54:42 by greita            #+#    #+#             */
/*   Updated: 2022/10/08 10:42:24 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete i;
	delete j;
	delete meta;
	std::cout << '\n';

	const WrongAnimal *wa = new WrongAnimal();
	const WrongAnimal *wc = new WrongCat();
	std::cout << wc->getType() << " " << std::endl;
	wa->makeSound();
	wc->makeSound();
	delete wa;
	delete wc;
	std::cout << '\n';

	Dog d0;
	Dog d1("Dog");
	Dog d2;
	d2 = d1;
	std::cout << d2.getType() << '\n';
	d2.makeSound();

	Animal &ref0 = d2;
	std::cout << ref0.getType() << '\n';
	ref0.makeSound();

	Animal *ptr0 = &d2;
	std::cout << ptr0->getType() << '\n';
	ptr0->makeSound();
	std::cout << '\n';

	Cat c0;
	Cat c1("Cat");
	Cat c2;
	c2 = c1;
	std::cout << c2.getType() << '\n';
	c2.makeSound();

	Animal &ref1 = c2;
	std::cout << ref1.getType() << '\n';
	ref1.makeSound();

	Animal *ptr1 = &c2;
	std::cout << ptr1->getType() << '\n';
	ptr1->makeSound();
	std::cout << '\n';

	return 0;
}
