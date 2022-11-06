/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:09:47 by greita            #+#    #+#             */
/*   Updated: 2022/11/02 19:10:52 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int capacity) : m_capacity(capacity) {}

Span::~Span() {}

Span::Span(Span const &orig)
	: m_nums(orig.getNums()), m_capacity(orig.getCapacity()) {}

Span &Span::operator=(Span const &orig)
{
	if (this == &orig)
		return *this;
	m_nums = orig.getNums();
	m_capacity = orig.getCapacity();
	return *this;
}

std::vector<int> const &Span::getNums() const { return m_nums; }

unsigned int Span::getCapacity() const { return m_capacity; }

char const *Span::SpanIsFullException::what() const throw()
{
	return "The span is full!";
}

char const *Span::SpanIsTooNarrowException::what() const throw()
{
	return "The span is too narrow!";
}

void Span::addNumber(int num)
{
	if (m_nums.size() == m_capacity)
		throw Span::SpanIsFullException();
	m_nums.push_back(num);
}

unsigned int Span::shortestSpan() const
{
	if (m_nums.size() < 2)
		throw Span::SpanIsTooNarrowException();

	std::vector<int> sortedNums(m_nums);
	std::sort(sortedNums.begin(), sortedNums.end());

	unsigned int min = m_nums.back() - m_nums.front();
	for (size_t i = 0; i < m_nums.size() - 1; ++i)
	{
		unsigned int d = m_nums.at(i + 1) - m_nums.at(i);
		if (d < min)
			min = d;
	}
	return min;
}

unsigned int Span::longestSpan() const
{
	if (m_nums.size() < 2)
		throw Span::SpanIsTooNarrowException();

	std::vector<int>::const_iterator min;
	min = min_element(m_nums.begin(), m_nums.end());
	std::vector<int>::const_iterator max;
	max = max_element(m_nums.begin(), m_nums.end());

	return *max - *min;
}
