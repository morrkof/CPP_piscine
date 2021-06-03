/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fork.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:50:22 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/11 15:19:41 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fork.hpp"

Fork::Fork(void): AWeapon("Fork of Horripilation", 1, 1) { return;}

Fork::Fork(Fork const &src) {
	*this = src;
	return;
}

Fork &Fork::operator=(Fork const &src) {
	this->_name = src._name;
	this->_apCost = src._apCost;
	this->_damage = src._damage;
	return *this;
}

Fork::~Fork(void) {return;}

void Fork::attack() const {
	std::cout << "* chpunk chpunk *" << std::endl;
}