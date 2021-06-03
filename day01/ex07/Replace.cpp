/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 20:11:32 by ppipes            #+#    #+#             */
/*   Updated: 2021/02/18 19:23:21 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string fileIn, std::string s1, std::string s2): _fileIn(fileIn), _s1(s1), _s2(s2) {
	std::string tmp = fileIn;
	size_t i = 0;

	while (i < tmp.length()) {
		tmp[i] = (char)toupper(tmp[i]);
		i++;
	}
	Replace::setFileOut(tmp + ".replace");
	return ;
}

Replace::~Replace(void) {
	return ;
}

std::string Replace::getFileIn(void) {
	return _fileIn;
}
std::string Replace::getFileOut(void) {
	return _fileOut;
}
std::string Replace::getS1(void) {
	return _s1;
}
std::string Replace::getS2(void) {
	return _s2;
}
void Replace::setFileOut(std::string str) {
	this->_fileOut = str;
}