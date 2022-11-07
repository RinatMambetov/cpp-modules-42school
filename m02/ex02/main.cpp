/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:54:18 by greita            #+#    #+#             */
/*   Updated: 2022/09/17 21:30:50 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
	Fixed a(1.2f);
	Fixed b(1.1f);
	std::cout << std::boolalpha;
	std::cout << (a > b) << '\n';
	std::cout << (a < b) << '\n';
	std::cout << (a >= b) << '\n';
	std::cout << (a <= b) << '\n';
	std::cout << (a == b) << '\n';
	std::cout << (a != b) << '\n';
	std::cout << '\n';

	Fixed c(a + b);
	std::cout << c << '\n';
	Fixed d(a - b);
	std::cout << d << '\n';
	Fixed i(a * b);
	std::cout << i << '\n';
	Fixed e(a / b);
	std::cout << e << '\n';
	std::cout << '\n';

	Fixed g;
	std::cout << g << '\n';
	std::cout << ++g << '\n';
	std::cout << --g << '\n';
	std::cout << g++ << '\n';
	std::cout << g << '\n';
	std::cout << g-- << '\n';
	std::cout << g << '\n';
	std::cout << '\n';

	std::cout << Fixed::min(a, b) << '\n';
	std::cout << Fixed::max(a, b) << '\n';
	Fixed const f(Fixed(5.05f) * Fixed(2));
	std::cout << f << '\n';
	Fixed const h(Fixed(5.05f) / Fixed(2));
	std::cout << h << '\n';
	std::cout << Fixed::min(f, h) << '\n';
	std::cout << Fixed::max(f, h) << '\n';
	std::cout << '\n';

	Fixed z(1.501f);
	Fixed x(Fixed(3.001f) / Fixed(2.0f));
	std::cout << z << '\n';
	std::cout << x << '\n';
	std::cout << (z == x) << '\n';

	return 0;
}
