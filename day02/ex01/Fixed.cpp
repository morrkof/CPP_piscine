/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 01:45:23 by ppipes            #+#    #+#             */
/*   Updated: 2021/02/22 15:29:30 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>


Fixed::Fixed(void): _value(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed &Fixed::operator=(Fixed const &src) {
	std::cout << "Assignation operator called" << std::endl;
	this->_value = src._value;
	return *this;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void Fixed::setRawBits(int const raw) {
	this->_value = raw;
	return ;
}

Fixed::Fixed(const int src) {
	std::cout << "Int constructor called" << std::endl;
	this->_value = src << this->_numFract;
}

Fixed::Fixed(const float src) {
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(src * (1 << _numFract));
}

float Fixed::toFloat(void) const {
	float result;

	result = this->_value / (float)(1 << _numFract);
	return result;
}

int Fixed::toInt(void) const {
	return this->_value >> _numFract;
}

std::ostream & operator<<(std::ostream &os, Fixed const &i) {
	os << i.toFloat();
	return os;
}