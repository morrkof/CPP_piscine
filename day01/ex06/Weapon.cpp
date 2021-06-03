/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 16:13:17 by ppipes            #+#    #+#             */
/*   Updated: 2021/02/12 17:28:10 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) {
	return ;
}

Weapon::Weapon(std::string str) {
	this->setType(str);
	return ;
}

Weapon::~Weapon(void) {
	return ;
}

const std::string &Weapon::getType(void) {
	return (this->_type);
}

void Weapon::setType(std::string str) {
	this->_type = str;
}