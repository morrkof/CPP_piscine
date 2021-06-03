/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 21:13:56 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/23 15:52:38 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

int	parser(std::string str){
	if(str == "inf" || str == "inff" || str == "-inf" 
	|| str == "-inff" || str == "nan" || str == "nanf")
		return PSEUDO;
	if(str.length() == 1 && isprint(str[0]) && !isdigit(str[0]))
		return CHAR;
	int dot = 0;
	unsigned int i = 0;
	char final_char = str[str.length() - 1];
	for(unsigned int i = 0; i < str.length(); i++)
		if(str[i] == '.')
			dot++;
	if (dot > 1)
		return NAN;
	if(dot == 1)
	{
		if(str[0] == '-' || str[0] == '+')
			i++;
		while(i < str.length() - 1)
		{
			if(!isdigit(str[i]) && str[i] != '.')
				return NAN;
			i++;
		}
		if (final_char == 'f')
			return FLOAT;
		else if(isdigit(final_char))
			return DOUBLE;
		else
			return NAN;
	}
	i = 0;
	if(str[0] == '-' || str[0] == '+')
		i++;
	for( ; i < str.length(); i++) {
		if(!isdigit(str[i]))
			return NAN;
	}
	return INT;
}

int main(int argc, char **argv)
{
	if (argc == 2) {
		void(*functions[6])(std::string str) = 
		{printNan, printChar, printInt, printFloat, printDouble, printPseudo};

		functions[parser(argv[1])](argv[1]);
	}
	else
		std::cout << "Error: invalid arguments" << std::endl;
	return 0;
}