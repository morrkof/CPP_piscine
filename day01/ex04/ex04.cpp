/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 20:53:00 by ppipes            #+#    #+#             */
/*   Updated: 2021/02/09 20:57:59 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *pointer = &str;
	std::string &reference = str;

	std::cout << "String - " << str << std::endl;
	std::cout << "Pointer to it - " << *pointer << std::endl;
	std::cout << "Reference to it - " << reference << std::endl;
}