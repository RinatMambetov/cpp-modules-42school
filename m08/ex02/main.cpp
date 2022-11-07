/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 11:04:48 by greita            #+#    #+#             */
/*   Updated: 2022/11/06 11:04:50 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
	int const size(6);

	// check default constructor
	MutantStack<int> ms0;
	for (int i = 1; i < size; ++i)
	{
		ms0.push(i);
	}
	printMutantStack(ms0);
	std::cout << '\n';

	// check copy constructor
	MutantStack<int> ms1(ms0);
	printMutantStack(ms1);
	std::cout << '\n';

	// check operator=
	MutantStack<int> ms2 = ms1;
	printMutantStack(ms2);
	std::cout << '\n';

	// check default iterators
	std::cout << *ms0.begin() << '\n';
	std::cout << *(ms0.end() - 1) << '\n';
	std::cout << '\n';

	// check const default iterators
	std::cout << *ms0.cbegin() << '\n';
	std::cout << *(ms0.cend() - 1) << '\n';
	std::cout << '\n';

	// check reverse iterators
	std::cout << *ms0.rbegin() << '\n';
	std::cout << *(ms0.rend() - 1) << '\n';
	std::cout << '\n';

	// check const reverse iterators
	std::cout << *ms0.crbegin() << '\n';
	std::cout << *(ms0.crend() - 1) << '\n';
	std::cout << '\n';

	// check from subject
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl; // 17
	mstack.pop();
	std::cout << mstack.size() << std::endl; // 1
	std::cout << '\n';
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	// [...]
	mstack.push(0);
	MutantStack<int>::dIt it = mstack.begin();
	MutantStack<int>::dIt ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << '\n';

	// check from subject, list instead of MutantStack
	std::list<int> mstack0;
	mstack0.push_back(5);
	mstack0.push_back(17);
	std::cout << mstack0.back() << std::endl; // 17
	mstack0.pop_back();
	std::cout << mstack0.size() << std::endl; // 1
	std::cout << '\n';
	mstack0.push_back(3);
	mstack0.push_back(5);
	mstack0.push_back(737);
	// [...]
	mstack0.push_back(0);
	std::list<int>::iterator it0 = mstack0.begin();
	std::list<int>::iterator ite0 = mstack0.end();
	++it0;
	--it0;
	while (it0 != ite0)
	{
		std::cout << *it0 << std::endl;
		++it0;
	}
	std::list<int> l(mstack0);

	return 0;
}
