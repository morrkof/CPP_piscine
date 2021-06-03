/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 00:04:21 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/29 14:33:16 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>
#include <list>

int main()
{
	std::cout << "TESTING DEFAULT STACK WITH INTS (from subject) :" << std::endl;

	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top value: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size of stack: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while(it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;
	std::stack<int> s(mstack);



	std::cout << std::endl << "TESTING LIST STACK WITH INTS:" << std::endl;
	MutantStack<int, std::list<int> > lst;
	int val = 2;
	for(int i = 0; i < 19; i++)
	{
		lst.push(val);
		val *= 2;
	}

	MutantStack<int, std::list<int> >::iterator lst_it = lst.begin();
	MutantStack<int, std::list<int> >::iterator lst_ite = lst.end();
	int index = 1;
	while(lst_it != lst_ite)
	{
		std::cout << "2^" << index  << ": " << *lst_it << std::endl;
		++lst_it;
		++index;
	}

	std::cout << std::endl << "TESTING REVERSE ITERATOR:" << std::endl;

	MutantStack<int, std::list<int> >::r_iterator lst_rit = lst.rbegin();
	MutantStack<int, std::list<int> >::r_iterator lst_rite = lst.rend();
	index = 19;
	while(lst_rit != lst_rite)
	{
		std::cout << "2^" << index  << ": " << *lst_rit << std::endl;
		++lst_rit;
		--index;
	}

	return 0;
}
