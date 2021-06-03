/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:08:48 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/11 16:30:27 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name): _name(name), _ap(40), 
_weapon(NULL){return;}

void Character::recoverAP(void){
	this->_ap += 10;
	if(this->_ap > 40)
		this->_ap = 40;
	std::cout << "🍬  Recovered AP: " << this->_ap << std::endl;
}

void Character::equip(AWeapon* weapon){
	this->_weapon = weapon;
}

void Character::attack(Enemy* enemy){
	if (this->_ap < this->_weapon->getAPCost()) {
		std::cout << "Not enough action points..." << std::endl;
		return;
	}
	this->_ap -= this->_weapon->getAPCost();
	std::cout << this->_name << " attacks " << enemy->getType()
	<< " with a " << this->_weapon->getName() << std::endl;
	this->_weapon->attack();
	enemy->takeDamage(this->_weapon->getDamage());
	if (enemy->getHP() == 0)
		delete enemy;
}

/* GETTERS */
std::string const &Character::getName(void) const{return this->_name;}
int Character::getAP(void) const {return this->_ap;}
AWeapon* Character::getWeapon(void) const {return this->_weapon;}

/* COPLIEN FORM */
Character::Character(void){}
Character::Character(Character const &src){*this = src;}
Character &Character::operator=(Character const &src){
	this->_name = src._name;
	this->_ap = src._ap;
	this->_weapon = src._weapon;
	return *this;
}
Character::~Character(void){}

std::ostream &operator<<(std::ostream &os, Character const &i){
	os << "🔍 <information>: " << i.getName() << " has " << i.getAP() << " AP and ";
	if(i.getWeapon() == NULL)
		os << "is unarmed" << std::endl;
	else
		os << "wields a " << i.getWeapon()->getName() << std::endl;
	return os;
}