/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 16:14:38 by ppipes            #+#    #+#             */
/*   Updated: 2021/02/15 17:33:39 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name) {
	return ;
}

HumanB::~HumanB(void) {
	return ;
}

std::string HumanB::getName(void) {
	return (this->_name);
}

void HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}

void HumanB::attack(void) {
	std::cout << getName() << " attacks with his " << this->_weapon->getType() << std::endl;
}
