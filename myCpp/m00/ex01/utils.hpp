/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 22:12:11 by greita            #+#    #+#             */
/*   Updated: 2022/08/15 09:36:29 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
#define UTILS_HPP

#include <string>

std::string getInfo(std::string request);
int increaseIndex(int index, int minIndex, int maxIndex);
int getSearchIndex(int minIndex, int maxIndex);
std::string shrinkString(std::string str, int width);

#endif
