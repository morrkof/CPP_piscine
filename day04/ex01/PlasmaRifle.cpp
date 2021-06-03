/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:09:10 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/10 20:45:03 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void): AWeapon("Plasma Rifle", 5, 21) { return;}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &src) {
	*this = src;
	return;
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &src) {
	this->_name = src._name;
	this->_apCost = src._apCost;
	this->_damage = src._damage;
	return *this;
}

PlasmaRifle::~PlasmaRifle(void) {return;}

void PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}