/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 00:04:34 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/28 14:04:59 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

void Span::addNumber(int num){
	if(_span.size() >= _N)
		throw std::runtime_error("Error: Span is already full!");
	_span.insert(num);
}

int Span::shortestSpan(void){
	if(_span.size() < 2)
		throw std::runtime_error("Error: Too few elements!");
	
	std::multiset<int>::iterator it1;
	std::multiset<int>::iterator it2;
	int result = 2147483647;

	it1 = _span.begin();
	it2 = ++_span.begin();
	while (it2 != _span.end())
	{
		if(std::abs(*it1 - *it2) < result)
			result = std::abs(*it1 - *it2);
		it1++;
		it2++;
	}
	return result;
}
int Span::longestSpan(void){
	if(_span.size() < 2)
		throw std::runtime_error("Error: Too few elements!");
	int min = *(std::min_element(_span.begin(), _span.end()));
	int max = *(std::max_element(_span.begin(), _span.end()));
	return (max - min);
}
Span::Span(unsigned int N): _N(N) {}
	
Span::Span(Span const &src){ *this = src; }
Span &Span::operator=(Span const &src){
	this->_N = src._N;
	this->_span = src._span;
	return *this;
}
Span::~Span(void){}