/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 00:04:24 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/29 14:50:38 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <iostream>
#include <stack>
// #include <list>

template<typename T, typename Container = std::deque<T> >
class MutantStack: public std::stack<T, Container>
{
private:
public:
	typedef typename std::stack<T, Container>::container_type::iterator iterator;
	typedef typename std::stack<T, Container>::container_type::reverse_iterator r_iterator;

	iterator begin() { return this->c.begin(); }
	iterator end() { return this->c.end(); }
	r_iterator rbegin() { return this->c.rbegin(); }
	r_iterator rend() { return this->c.rend(); }

	MutantStack(void){}
	virtual ~MutantStack(void){}
	MutantStack(MutantStack<T, Container> const &src){ *this = src; }
	MutantStack &operator=(MutantStack<T, Container> const &src) { this->c= src.c; }
};

#endif