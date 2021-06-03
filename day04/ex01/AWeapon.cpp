/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:08:28 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/11 15:57:19 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage): _name(name),
_apCost(apcost), _damage(damage) { return;}

/* GETTERS */
std::string const &AWeapon::getName() const {return  this->_name;}
int AWeapon::getAPCost() const {return this->_apCost;}
int AWeapon::getDamage() const {return this->_damage;}
	
/* COPLIEN FORM */
AWeapon::AWeapon(void) {}
AWeapon::AWeapon(AWeapon const &src) { *this = src;}
AWeapon &AWeapon::operator=(AWeapon const &src) {
	this->_name = src._name;
	this->_apCost = src._apCost;
	this->_damage = src._damage;
	return *this;
}
AWeapon::~AWeapon() {}

std::ostream &operator<<(std::ostream &os, AWeapon const &i) {
	os << "🔍 <information>: " << i.getName() << ": damage " << i.getDamage() 
	<< ", AP cost " << i.getAPCost() << std::endl;
	return os;
}