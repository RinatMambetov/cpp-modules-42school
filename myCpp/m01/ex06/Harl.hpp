/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:25:20 by greita            #+#    #+#             */
/*   Updated: 2022/10/19 16:55:59 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Harl
{
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	static const int size = 4;

public:
	void complain(int lvlNum);
	int getLvlId(std::string level) const;
};

enum levels
{
	LEVEL_DEBUG,
	LEVEL_INFO,
	LEVEL_WARNING,
	LEVEL_ERROR
};

#endif
