/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:07:48 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/23 15:51:09 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_H
#define CONVERSION_H

#include <string>
#include <iostream>
#include <iomanip>

#define NAN		0
#define CHAR	1
#define INT		2
#define FLOAT	3
#define DOUBLE	4
#define PSEUDO	5

int	parser(std::string str);
void printNan(std::string);
void printPseudo(std::string str);
void printChar(std::string str);
void printInt(std::string str);
void printFloat(std::string str);
void printDouble(std::string str);

#endif