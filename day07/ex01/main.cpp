/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:17:18 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/24 13:53:29 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

class Awesome
{
public:
	Awesome(void): _n(42) {return;}
	int getN(void) const { return this->_n; }
private:
	int _n;
};

std::ostream &operator<<(std::ostream &os, Awesome const &i){
	os << i.getN();
	return os;
}

template<typename T>
void print(T const &x)
{
	std::cout << x << std::endl;
	return;
}

int main(void)
{
	int tab[] = {0, 1, 2, 3, 4};
	Awesome tab2[5];

	iter(tab, 5, print);
	iter(tab2, 5, print);

	return 0;
}