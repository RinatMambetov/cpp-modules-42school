/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colorPrint.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 10:55:13 by greita            #+#    #+#             */
/*   Updated: 2022/11/06 10:56:59 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colorPrint.hpp"

void colorPrint(std::string const &str, std::string const &color)
{
	std::cout << color << str << C_RESET << std::endl;
}

void colorError(std::string const &str, std::string const &color)
{
	std::cerr << color << "Error: " << str << C_RESET << std::endl;
}
