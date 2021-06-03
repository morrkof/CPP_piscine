/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 15:38:58 by ppipes            #+#    #+#             */
/*   Updated: 2021/02/02 18:10:03 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, std::string element, std::string hair): 
				_name(name), _element(element), _hairColor(hair) {
	std::cout << "Pony " << Pony::getName() << " of " << Pony::getElement() << " element is born!" << std::endl;
	std::cout << Pony::getName() << " has hair with " << Pony::getHairColor() << " color." << std::endl;
	return;
}

Pony::~Pony(void) {
	std::cout << Pony::getName() << " died!" << std::endl;
	return;
}

std::string Pony::getName(void) {
	return (this->_name);
}

std::string Pony::getElement(void) {
	return (this->_element);
}

std::string Pony::getHairColor(void) {
	return (this->_hairColor);
}

void Pony::setName(std::string str) {
	this->_name = str;
	return;
}

void Pony::setElement(std::string str) {
	this->_element = str;
	return;
}

void Pony::setHairColor(std::string str) {
	this->_hairColor = str;
	return;
}
