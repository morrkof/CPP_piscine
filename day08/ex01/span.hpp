/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 00:04:31 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/28 13:07:43 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <set>
#include <cmath>
#include <stdexcept>
#include <algorithm>
#include <list>
#include <vector>

class Span {
private:
	unsigned int _N;
	std::multiset<int> _span;
	Span(void);
public:
	void addNumber(int num);

	template <typename InputIterator>
	void addNumber(InputIterator begin, InputIterator end)
	{
		if(_span.size() >= _N)
			throw std::runtime_error("Error: Span is already full!");
		if((_span.size() + std::distance(begin, end)) > _N)
			throw std::runtime_error("Error: This range will not fit!");
		_span.insert(begin, end);
	}

	int shortestSpan(void);
	int longestSpan(void);
	Span(unsigned int N);
	
	Span(Span const &src);
	Span &operator=(Span const &src);
	~Span(void);
};

#endif