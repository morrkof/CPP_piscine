/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 00:04:29 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/28 13:19:41 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <set>
#include <vector>
#include <iostream>
#include <list>

int main(void)
{
	std::cout << "SIMPLE REPEATEDLY ADDNUMBER: " << std::endl;
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "Shortest span:  " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span:   " << sp.longestSpan() << std::endl;


	std::cout << std::endl << "UPGRADED ADDNUMBER: " << std::endl;
	std::list<int> lst;
	lst.push_back(0);
	lst.push_back(2);
	lst.push_back(50);
	Span sp2 = Span(3);
	sp2.addNumber(lst.begin(), lst.end());
	std::cout << "Shortest span:  " << sp2.shortestSpan() << std::endl;
	std::cout << "Longest span:   " << sp2.longestSpan() << std::endl;


	std::cout << std::endl << "UPGRADED ADDNUMBER WITH 10000 RANDOM NUMBERS: " << std::endl;
	srand(time(0));
	std::vector<int> tenthousand;
	for(int i = 0; i < 10000; i++)
		tenthousand.push_back(rand()%1111111111);
	Span sp3 = Span(10000);
	sp3.addNumber(tenthousand.begin(), tenthousand.end());
	std::cout << "Shortest span:  " << sp3.shortestSpan() << std::endl;
	std::cout << "Longest span:   " << sp3.longestSpan() << std::endl;


	std::cout << std::endl << "TESTING ERROR WITH OVERFLOW: " << std::endl;
	Span sp4 = Span(2);
	try {
		sp4.addNumber(lst.begin(), lst.end());
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	try {
		sp4.addNumber(42);
		sp4.addNumber(42);
		sp4.addNumber(42);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}


	std::cout << std::endl << "TESTING ERROR WITH SEARCHING SPAN IN EMPTY CONTAINER: " << std::endl;
	Span sp5 = Span(1);
	sp5.addNumber(42);
	try {
		std::cout << "Shortest span:  " << sp5.shortestSpan() << std::endl;
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
}