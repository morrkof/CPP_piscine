/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 17:25:33 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/05 00:22:59 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): _HP(100), _maxHP(100), _EP(100), _maxEP(100), 
_level(1), _name(name), _meleeDmg(30), _rangedDmg(20), _magicDmg(999), _armor(5) {
	std::cout << this->_name << " : Hey, baby, wanna kill all humans?" << std::endl;
	return ;
}

void FragTrap::rangedAttack(std::string const &target) {
	std::cout << this->_name << " attacks " << "<" << target << ">";
	std::cout << " at range, causing " << this->_rangedDmg << " points of damage!" << std::endl;
	return ;
}

void FragTrap::meleeAttack(std::string const &target) {
	std::cout << this->_name << " attacks " << "<" << target << ">";
	std::cout << " with his own iron fist, causing " << this->_meleeDmg << " points of damage!" << std::endl;
	return ;
}

void FragTrap::magicAttack(std::string const &target) {
	std::cout << this->_name << " attacks " << "<" << target << ">";
	std::cout << " magically with unicorn horn, causing " << this->_magicDmg << " points of damage!" << std::endl;
	return ;
}

void FragTrap::sneakAttack(std::string const &target) {
	std::cout << this->_name << " sneaks up and attacks " << "<" << target << ">";
	std::cout << " stealthy, causing " << this->_meleeDmg * 2 << " points of critical damage!" << std::endl;
	return ;
}

void FragTrap::panicAttack(std::string const &target) {
	std::cout << this->_name << " attacks " << "<" << target << ">";
	std::cout << " with PANIC, causing " << this->_meleeDmg * 3 << " points of psychological damage!" << std::endl;
	return ;
}

void FragTrap::takeDamage(unsigned int amount) {
	this->_HP = this->_HP - (amount - ((float)amount / 100.0 * this->_armor));
	if (this->_HP < 0)
		this->_HP = 0;
	std::cout << "💔 " << this->_name << " was damaged by " << amount << " points. Now HP is " << this->_HP << "/" << this->_maxHP << std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {
	this->_HP += amount;
	if (this->_HP > this->_maxHP)
		this->_HP = this->_maxHP;
	std::cout << "💚 " << this->_name << " has been repaired by " << amount << " points. Now HP is " << this->_HP << "/" << this->_maxHP << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target) {
	void (FragTrap::*attack[5])(std::string const &target) = 
	{&FragTrap::meleeAttack, &FragTrap::rangedAttack, &FragTrap::magicAttack, &FragTrap::sneakAttack, &FragTrap::panicAttack};

	if (this->_EP < 25) {
		std::cout << "Not enough energy..." << std::endl;
		return ;
	}
	this->_EP -= 25;
	static unsigned int seed = time(0);
	srand(seed);
	(this->*attack[(seed = rand())%5])(target);
}



FragTrap::FragTrap(void): _HP(100), _maxHP(100), _EP(100), _maxEP(100), 
_level(1), _name("CL4P-TP"), _meleeDmg(30), _rangedDmg(20), _magicDmg(999), _armor(5) {
	std::cout << this->_name << " : Hey, baby, wanna kill all humans?" << std::endl;
	return ;
}

FragTrap::~FragTrap(void) {
	std::cout << this->_name << " : I can see... the code..." << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const &src) {
	*this = src;
	return ;
}

FragTrap &FragTrap::operator=(FragTrap const &src) {
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

int FragTrap::getHP(void) const { return this->_HP; }
int FragTrap::getMaxHP(void) const { return this->_maxHP; }
int FragTrap::getEP(void) const { return this->_EP; }
int FragTrap::getMaxEP(void) const { return this->_maxEP; }
int FragTrap::getLevel(void) const { return this->_level; }
std::string FragTrap::getName(void) const { return this->_name; }
int FragTrap::getMeleeDmg(void) const { return this->_meleeDmg; }
int FragTrap::getRangeDmg(void) const { return this->_rangedDmg; }
int FragTrap::getMagicDmg(void) const { return this->_magicDmg; }
int FragTrap::getArmor(void) const { return this->_armor; }


std::ostream & operator<<(std::ostream &os, FragTrap const &i) {
	os << i.getName() << " (" << i.getLevel() << " level) with " 
	<< i.getHP() << "/" << i.getMaxHP() << " HP, " << i.getEP() << "/" 
	<< i.getMaxEP() << " EP, " << i.getMeleeDmg() << " melee attack, "
	<< i.getRangeDmg() << " ranged attack, " << i.getMagicDmg() 
	<< " magic attack and " << i.getArmor() << " armor." << std::endl;
	return os;
}