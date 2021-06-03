/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bomb.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:55:36 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/11 15:46:45 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bomb.hpp"

Bomb::Bomb(void): AWeapon("Bomb", 15, 200) { return;}

Bomb::Bomb(Bomb const &src) {
	*this = src;
	return;
}

Bomb &Bomb::operator=(Bomb const &src) {
	this->_name = src._name;
	this->_apCost = src._apCost;
	this->_damage = src._damage;
	return *this;
}

Bomb::~Bomb(void) {return;}

void Bomb::attack() const {
	std::cout << "* BDSSSSSCCCH!!! *" << std::endl;
}