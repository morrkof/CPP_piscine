/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 21:16:15 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/23 23:03:57 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>

class Base {
public:
	virtual ~Base(void){}
};

class A: public Base {};
class B: public Base {};
class C: public Base {};

Base *createA(void) { return new A; }
Base *createB(void) { return new B; }
Base *createC(void) { return new C; }

Base *generate(void)
{
	Base *(*create[3])(void) = {createA, createB, createC};
	srand(time(0));
	int index = rand()%3;
	std::cout << "Random index of array(0=A, 1=B, 2=C): " << index << std::endl;
	return create[index]();
}

void identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "Identify from pointer: this is A!" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "Identify from pointer: this is B!" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "Identify from pointer: this is C!" << std::endl;
}

void identify_from_reference(Base &p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "Identify from reference: this is A!" << std::endl;
	}
	catch(std::exception &e){}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "Identify from reference: this is B!" << std::endl;
	}
	catch(std::exception &e){}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "Identify from reference: this is C!" << std::endl;
	}
	catch(std::exception &e){}
}

int main()
{
	Base *object = generate();
	identify_from_pointer(object);
	identify_from_reference(*object);
}