/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:27:36 by greita            #+#    #+#             */
/*   Updated: 2022/09/16 11:27:38 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	const std::string string("HI THIS IS BRAIN");
	const std::string *stringPTR(&string);
	const std::string &stringREF(string);

	std::cout << &string << '\n';
	std::cout << stringPTR << '\n';
	std::cout << &stringREF << '\n';

	std::cout << string << '\n';
	std::cout << *stringPTR << '\n';
	std::cout << stringREF << '\n';

	return 0;
}
