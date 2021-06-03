/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 16:27:09 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/05 22:21:37 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name): ClapTrap(100, 100, 120, 120, 1, name, 60, 20, 5) {
	_magicDmg = 999;
	std::cout << "<SuperTrap> : Exterminate!" << std::endl;
	return ;
}

SuperTrap::SuperTrap(void): ClapTrap(100, 100, 100, 100, 1, "", 30, 20, 5) {
	_magicDmg = 999;
	std::cout << "<SuperTrap> : Exterminate!" << std::endl;
	return ;
}

SuperTrap::~SuperTrap(void) {
	std::cout << "<SuperTrap> : Nooooooooooooooooooooooo" << std::endl;
	return ;
}

SuperTrap::SuperTrap(SuperTrap const &src) {
	*this = src;
	return ;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &src) {
	this->_HP = src._HP;
	this->_maxHP = src._maxHP;
	this->_EP = src._EP;
	this->_maxEP = src._maxEP;
	this->_level = src._level;
	this->_name = src._name;
	this->_meleeDmg = src._meleeDmg;
	this->_rangedDmg = src._rangedDmg;
	this->_magicDmg = src._magicDmg;
	this->_armor = src._armor;
	return *this;
}

std::ostream & operator<<(std::ostream &os, SuperTrap const &i) {
	os << i.getName() << " (" << i.getLevel() << " level) with " 
	<< i.getHP() << "/" << i.getMaxHP() << " HP, " << i.getEP() << "/" 
	<< i.getMaxEP() << " EP, " << i.getMeleeDmg() << " melee attack, "
	<< i.getRangeDmg() << " ranged attack and " << i.getArmor() << " armor." << std::endl;
	return os;
}