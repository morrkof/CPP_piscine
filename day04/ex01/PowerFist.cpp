/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:09:17 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/15 14:34:21 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void): AWeapon("Power Fist", 8, 50) { return;}

PowerFist::PowerFist(PowerFist const &src) {
	*this = src;
	return;
}

PowerFist &PowerFist::operator=(PowerFist const &src) {
	this->_name = src._name;
	this->_apCost = src._apCost;
	this->_damage = src._damage;
	return *this;
}

PowerFist::~PowerFist(void) {return;}

void PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}