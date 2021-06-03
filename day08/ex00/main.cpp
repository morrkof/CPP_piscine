/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 23:56:48 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/27 00:02:27 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main(void)
{
	std::cout << "TESTING VECTOR:" << std::endl;
	std::vector<int> v;
	v.push_back(1);
	v.push_back(5);
	v.push_back(42);

	easyfind<std::vector<int> >(v, 2);
	easyfind<std::vector<int> >(v, 42);
	easyfind<std::vector<int> >(v, 1);

	std::cout << std::endl << "TESTING LIST:" << std::endl;
	std::list<int> lst;
	lst.push_back(50);
	lst.push_back(60);
	lst.push_back(70);
	lst.push_back(88);

	easyfind<std::list<int> >(lst, 42);
	easyfind<std::list<int> >(lst, 88);
	easyfind<std::list<int> >(lst, 2);
}
