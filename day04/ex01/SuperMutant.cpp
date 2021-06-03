/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:09:28 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/11 16:21:34 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void): Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &src){
	*this = src;
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	return;
}

SuperMutant &SuperMutant::operator=(SuperMutant const &src){
	this->_type = src._type;
	this->_hp = src._hp;
	return *this;
}

SuperMutant::~SuperMutant(void){
	std::cout << "☠️  Aaargh..." << std::endl;
}
void SuperMutant::takeDamage(int damage){
	if ((damage - 3) > 0)
		this->_hp = this->_hp - (damage - 3);
	if(_hp < 0)
		_hp = 0;
}