/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:08:19 by greita            #+#    #+#             */
/*   Updated: 2022/11/05 13:08:28 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>
#include <iostream>

template <class T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack(){};
	~MutantStack(){};
	MutantStack(MutantStack<T> const &orig)
	{
		for (size_t i = 0; i < orig.size(); ++i)
		{
			this->push(*(orig.cbegin() + i));
		}
	}
	MutantStack<T> const &operator=(MutantStack<T> const &orig)
	{
		if (this == &orig)
			return *this;
		for (size_t i = 0; i < orig.size(); ++i)
		{
			this->push(*(orig.cbegin() + i));
		}
		return *this;
	}

	typedef typename std::stack<T>::container_type::iterator dIt;
	typedef typename std::stack<T>::container_type::const_iterator cIt;
	typedef typename std::stack<T>::container_type::reverse_iterator rIt;
	typedef typename std::stack<T>::container_type::const_reverse_iterator crIt;

	dIt begin() { return this->c.begin(); }
	dIt end() { return this->c.end(); }

	cIt cbegin() const { return this->c.cbegin(); }
	cIt cend() const { return this->c.cend(); }

	rIt rbegin() { return this->c.rbegin(); }
	rIt rend() { return this->c.rend(); }

	crIt crbegin() const { return this->c.crbegin(); }
	crIt crend() const { return this->c.crend(); }
};

template <typename T>
void printMutantStack(MutantStack<T> const &ms)
{
	std::stack<T> temp = ms;

	while (!temp.empty())
	{
		std::cout << temp.top() << ' ';
		temp.pop();
	}
	std::cout << '\n';
}

#endif
