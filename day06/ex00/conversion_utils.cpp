/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_utils.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:05:40 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/23 14:49:22 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

void printNan(std::string)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;
}

void printPseudo(std::string str)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if(str == "nan" || str == "inf" || str == "-inf")
		std::cout << "float: " << str << "f" << std::endl;
	else
		std::cout << "float: " << str << std::endl;
	if(str == "nan" || str == "inf" || str == "-inf")
		std::cout << "double: " << str << std::endl;
	else
	{
		if (str == "inff")
			std::cout << "double: inf" << std::endl;
		if (str == "-inff")
			std::cout << "double: -inf" << std::endl;
		if (str == "nanf")
			std::cout << "double: nan" << std::endl;
	}
}

void printChar(std::string str)
{
	std::cout << "char: " << str[0] << std::endl;
	std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
	std::cout << std::fixed << std::showpoint << std::setprecision(1) << "float: " << static_cast<float>(str[0]) << "f" << std::endl;
	std::cout << std::fixed << std::showpoint << std::setprecision(1) << "double: "<< static_cast<double>(str[0]) << std::endl;
}

void printInt(std::string str)
{
	int result;
	bool flag = 0;
	try 
	{
		result = std::stoi(str, NULL, 10);
	}
	catch(std::out_of_range &e) {
		flag = 1;
	}
	
	std::cout << "char: ";
	if (result < 0 || result > 128)
		std::cout << "impossible" << std::endl;
	else if (result < 33 || result == 128)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << static_cast<char>(result) << std::endl;
	
	std::cout << "int: ";
	if (flag)
		std::cout << "impossible" << std::endl;
	else
		std::cout << result << std::endl;
	
	std::cout << std::fixed << std::showpoint << std::setprecision(1) << "float: " << static_cast<float>(result)  << "f" << std::endl;
	std::cout << std::fixed << std::showpoint << std::setprecision(1) << "double: "<< static_cast<double>(result) << std::endl;
}

void printFloat(std::string str)
{
	float result = std::stof(str, NULL);

	std::cout << "char: ";
	if (result < 0 || result > 128)
		std::cout << "impossible" << std::endl;
	else if (result < 33 || result == 128)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << static_cast<char>(result) << std::endl;

	std::cout << "int: " << static_cast<int>(result) << std::endl;
	std::cout << std::fixed << std::showpoint << std::setprecision(1) << "float: " << result  << "f" << std::endl;
	std::cout << std::fixed << std::showpoint << std::setprecision(1) << "double: "<< static_cast<double>(result) << std::endl;
}

void printDouble(std::string str)
{
	double result = std::stod(str, NULL);

	std::cout << "char: ";
	if (result < 0 || result > 128)
		std::cout << "impossible" << std::endl;
	else if (result < 33 || result == 128)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << static_cast<char>(result) << std::endl;

	std::cout << "int: " << static_cast<int>(result) << std::endl;
	std::cout << std::fixed << std::showpoint << std::setprecision(1) << "float: " << static_cast<float>(result) << "f" << std::endl;
	std::cout << std::fixed << std::showpoint << std::setprecision(1) << "double: "<< result << std::endl;
}