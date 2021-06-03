/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 14:13:00 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/05 21:53:43 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name): ClapTrap(60, 60, 120, 120, 1, name, 60, 5, 0) {
	std::cout << "<NinjaTrap> : VIVA LA ROBOLUTION!" << std::endl;
	return ;
}

void NinjaTrap::ninjaShoebox(ClapTrap &target) {
	std::cout << this->_name << " bite shiny metal ass of ClapTrap named " << target.getName() << std::endl;
}
void NinjaTrap::ninjaShoebox(FragTrap &target) {
	std::cout << this->_name << " arranges shadow theater for FragTrap named " << target.getName() << std::endl;
}
void NinjaTrap::ninjaShoebox(ScavTrap &target) {
	std::cout << this->_name << " is hiding in a pile of garbage from ScavTrap named " << target.getName() << std::endl;
}
void NinjaTrap::ninjaShoebox(NinjaTrap &target) {
	std::cout << this->_name << " trying to create a double of NinjaTrap named " << target.getName() << std::endl;
}

/*
** CANONICAL FORM: default constructor, copy constructor,
**             assignation operator overload, destructor
*/

NinjaTrap::NinjaTrap(void): ClapTrap(60, 60, 120, 120, 1, "", 60, 5, 0) {
	std::cout << "<NinjaTrap> : VIVA LA ROBOLUTION!" << std::endl;
	return ;
}

NinjaTrap::~NinjaTrap(void) {
	std::cout << "<NinjaTrap> : DANGER! DANGER!" << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(NinjaTrap const &src) {
	*this = src;
	return ;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &src) {
	this->_HP = src._HP;
	this->_maxHP = src._maxHP;
	this->_EP = src._EP;
	this->_maxEP = src._maxEP;
	this->_level = src._level;
	this->_name = src._name;
	this->_meleeDmg = src._meleeDmg;
	this->_rangedDmg = src._rangedDmg;
	this->_armor = src._armor;
	return *this;
}

std::ostream & operator<<(std::ostream &os, NinjaTrap const &i) {
	os << i.getName() << " (" << i.getLevel() << " level) with " 
	<< i.getHP() << "/" << i.getMaxHP() << " HP, " << i.getEP() << "/" 
	<< i.getMaxEP() << " EP, " << i.getMeleeDmg() << " melee attack, "
	<< i.getRangeDmg() << " ranged attack and " << i.getArmor() << " armor." << std::endl;
	return os;
}