/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:06:39 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/24 16:59:29 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Array.hpp"

int main(void)
{
	std::cout << std::endl << "CREATE REGULAR ARRAY:" << std::endl;
	Array<int> i_array(3);
	i_array[0] = 42;
	i_array[1] = 100;
	i_array[2] = 100500;
	for(int i = 0; i < i_array.size(); i++)
		std::cout << i_array[i] << std::endl;

	std::cout << std::endl << "TRY TO CATCH EXCEPTION:" << std::endl;
	try {
		std::cout << i_array[42] << std::endl;
		std::cout << "This will never be printed" << std::endl;
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl << "CREATE EMPTY ARRAY:" << std::endl;
	Array<float> f_array;
	std::cout << f_array.size() << std::endl;

	std::cout << std::endl << "CREATE STRING ARRAY:" << std::endl;
	Array<std::string> s_array(4);
	s_array[0] = "Клином";
	s_array[1] = "красным";
	s_array[2] = "бей";
	s_array[3] = "белых";
	for(int i = 0; i < s_array.size(); i++)
		std::cout << s_array[i] << std::endl;
}