/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 11:04:24 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/24 13:14:59 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>
#include <string>

class Awesome {
public:
	Awesome(int n): _n(n) {}
	int getN(void) const { return this->_n; }
	bool operator==(Awesome const &rhs) const { return (this->_n == rhs._n); }
	bool operator!=(Awesome const &rhs) const { return (this->_n != rhs._n); }
	bool operator>(Awesome const &rhs) const { return (this->_n > rhs._n); }
	bool operator<(Awesome const &rhs) const { return (this->_n < rhs._n); }
	bool operator>=(Awesome const &rhs) const { return (this->_n >= rhs._n); }
	bool operator<=(Awesome const &rhs) const { return (this->_n <= rhs._n); }
private:
	int _n;
};

std::ostream &operator<<(std::ostream &os, Awesome const &i){
	os << i.getN();
	return os;
}

int main(void)
{
	int a = 2;
	int b = 3;

	std::cout << "CREATE:     a = " << a << ", b = " << b << std::endl;
	::swap(a, b);
	std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl << std::endl;



	std::string c = "chaine1";
	std::string d = "chaine2";

	std::cout << "CREATE:     c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "After swap: c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << ::max(c, d) << std::endl << std::endl;



	Awesome fortytwo(42);
	Awesome twentyone(21);

	std::cout << "CREATE:     fortytwo = " << fortytwo << ", twentyone = " << twentyone << std::endl;
	::swap(fortytwo, twentyone);
	std::cout << "After swap: fortytwo = " << fortytwo << ", twentyone = " << twentyone << std::endl;
	std::cout << "min(fortytwo, twentyone) = " << ::min(fortytwo, twentyone) << std::endl;
	std::cout << "max(fortytwo, twentyone) = " << ::max(fortytwo, twentyone) << std::endl;

	return 0;
}