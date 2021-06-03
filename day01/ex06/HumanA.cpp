/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 16:14:36 by ppipes            #+#    #+#             */
/*   Updated: 2021/02/15 17:28:51 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon) {
	return ;
}

HumanA::~HumanA(void) {
	return ;
}

std::string HumanA::getName(void) {
	return (this->_name);
}

void HumanA::attack(void) {
	std::cout << getName() << " attacks with his " << this->_weapon.getType() << std::endl;
}