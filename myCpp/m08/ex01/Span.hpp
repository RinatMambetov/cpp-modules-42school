/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:09:58 by greita            #+#    #+#             */
/*   Updated: 2022/11/02 19:10:13 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span
{
private:
	Span();
	std::vector<int> m_nums;
	unsigned int m_capacity;

public:
	Span(unsigned int capacity);
	~Span();
	Span(Span const &orig);
	Span &operator=(Span const &orig);

	std::vector<int> const &getNums() const;
	unsigned int getCapacity() const;

	void addNumber(int num);
	unsigned int shortestSpan() const;
	unsigned int longestSpan() const;

	template <typename T>
	void addNumber(T const &start, T const &end)
	{
		int d = std::distance(start, end);
		if (m_nums.size() + std::abs(d) > m_capacity)
			throw Span::SpanIsTooNarrowException();
		m_nums.insert(m_nums.end(), start, end);
	}

	class SpanIsFullException : public std::exception
	{
	public:
		virtual char const *what() const throw();
	};

	class SpanIsTooNarrowException : public std::exception
	{
	public:
		virtual char const *what() const throw();
	};
};

#endif
