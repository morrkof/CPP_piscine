/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:30:50 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/05 21:50:11 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(int hp, int maxHp, int ep, int maxEp, int level, std::string name, int melee, int range, int armor) :
_HP(hp), _maxHP(maxHp), _EP(ep), _maxEP(maxEp), _level(level), _name(name), _meleeDmg(melee), _rangedDmg(range), _armor(armor) {
	std::cout << "<ClapTrap> : Now I will dominate!" << std::endl;
	return ;
	}

ClapTrap::ClapTrap(std::string name): _HP(0), _maxHP(0), _EP(0), _maxEP(0), 
_level(0), _name(name), _meleeDmg(0), _rangedDmg(0), _armor(0) {
	std::cout << "<ClapTrap> : Now I will dominate!" << std::endl;
	return ;
}

void ClapTrap::rangedAttack(std::string const &target) {
	std::cout << this->_name << " attacks " << target;
	std::cout << " with a bow, causing " << this->_rangedDmg << " points of damage!" << std::endl;
	return ;
}

void ClapTrap::meleeAttack(std::string const &target) {
	std::cout << this->_name << " attacks " << target;
	std::cout << " with a knife, causing " << this->_meleeDmg << " points of damage!" << std::endl;
	return ;
}

void ClapTrap::takeDamage(unsigned int amount) {
	this->_HP = this->_HP - (amount - ((float)amount / 100.0 * this->_armor));
	if (this->_HP < 0)
		this->_HP = 0;
	std::cout << "💔 " << this->_name << " was damaged. HP " << this->_HP << "/" << this->_maxHP << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	this->_HP += amount;
	if (this->_HP > this->_maxHP)
		this->_HP = this->_maxHP;
	std::cout << "💚 " << this->_name << " has been repaired. HP " << this->_HP << "/" << this->_maxHP << std::endl;
}

/*
** CANONICAL FORM: default constructor, copy constructor,
**             assignation operator overload, destructor
*/

ClapTrap::ClapTrap(void): _HP(0), _maxHP(0), _EP(0), _maxEP(0), 
_level(0), _name(""), _meleeDmg(0), _rangedDmg(0), _armor(0) {
	std::cout << "<ClapTrap> : Now I will dominate!" << std::endl;
	return ;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "<ClapTrap> : I'm leaking!" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &src) {
	*this = src;
	return ;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &src) {
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

int ClapTrap::getHP(void) const { return this->_HP; }
int ClapTrap::getMaxHP(void) const { return this->_maxHP; }
int ClapTrap::getEP(void) const { return this->_EP; }
int ClapTrap::getMaxEP(void) const { return this->_maxEP; }
int ClapTrap::getLevel(void) const { return this->_level; }
std::string ClapTrap::getName(void) const { return this->_name; }
int ClapTrap::getMeleeDmg(void) const { return this->_meleeDmg; }
int ClapTrap::getRangeDmg(void) const { return this->_rangedDmg; }
int ClapTrap::getArmor(void) const { return this->_armor; }


std::ostream & operator<<(std::ostream &os, ClapTrap const &i) {
	os << i.getName() << " (" << i.getLevel() << " level) with " 
	<< i.getHP() << "/" << i.getMaxHP() << " HP, " << i.getEP() << "/" 
	<< i.getMaxEP() << " EP, " << i.getMeleeDmg() << " melee attack, "
	<< i.getRangeDmg() << " ranged attack and " << i.getArmor() << " armor." << std::endl;
	return os;
}