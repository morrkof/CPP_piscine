/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 17:24:55 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/03 13:54:31 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): _HP(100), _maxHP(100), _EP(50), _maxEP(50), 
_level(1), _name(name), _meleeDmg(20), _rangedDmg(15), _armor(3) {
	std::cout << this->_name << " : Helloooooo, Traveler!" << std::endl;
	return ;
}

void ScavTrap::rangedAttack(std::string const &target) {
	std::cout << this->_name << " attacks " <<  "<" << target << ">";
	std::cout << " with a bow, causing " << this->_rangedDmg << " points of damage!" << std::endl;
	return ;
}

void ScavTrap::meleeAttack(std::string const &target) {
	std::cout << this->_name << " attacks " <<  "<" << target << ">";
	std::cout << " with a knife, causing " << this->_meleeDmg << " points of damage!" << std::endl;
	return ;
}

void ScavTrap::takeDamage(unsigned int amount) {
	this->_HP = this->_HP - (amount - ((float)amount / 100.0 * this->_armor));
	if (this->_HP < 0)
		this->_HP = 0;
	std::cout << "💔 " << this->_name << " was damaged by " << amount << " points. Now HP is " << this->_HP << "/" << this->_maxHP << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
	this->_HP += amount;
	if (this->_HP > this->_maxHP)
		this->_HP = this->_maxHP;
	std::cout << "💚 " << this->_name << " has been repaired by " << amount << " points. Now HP is " << this->_HP << "/" << this->_maxHP << std::endl;
}

void ScavTrap::challengeNewcomer(void) {
	std::string challenge[5] = {"Sing me a lullaby song!", "Show me the robot dance!", 
	"Bring me a delicious pizza!", "Bring me 5 boar skins!", "Mario, you saved me! Now we can kiss!"};
	
	static unsigned int seed = time(0);
	srand(seed);
	std::cout << this->_name << " : " << challenge[(seed = rand())%5] << std::endl;
}

ScavTrap::ScavTrap(void): _HP(100), _maxHP(100), _EP(50), _maxEP(50), 
_level(1), _name("CL4P-TP"), _meleeDmg(20), _rangedDmg(15), _armor(3) {
	std::cout << this->_name << " : Helloooooo, Traveler!" << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void) {
	std::cout << this->_name << " : I'm too pretty to die!" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src) {
	*this = src;
	return ;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &src) {
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


int ScavTrap::getHP(void) const { return this->_HP; }
int ScavTrap::getMaxHP(void) const { return this->_maxHP; }
int ScavTrap::getEP(void) const { return this->_EP; }
int ScavTrap::getMaxEP(void) const { return this->_maxEP; }
int ScavTrap::getLevel(void) const { return this->_level; }
std::string ScavTrap::getName(void) const { return this->_name; }
int ScavTrap::getMeleeDmg(void) const { return this->_meleeDmg; }
int ScavTrap::getRangeDmg(void) const { return this->_rangedDmg; }
int ScavTrap::getArmor(void) const { return this->_armor; }


std::ostream & operator<<(std::ostream &os, ScavTrap const &i) {
	os << i.getName() << " (" << i.getLevel() << " level) with " 
	<< i.getHP() << "/" << i.getMaxHP() << " HP, " << i.getEP() << "/" 
	<< i.getMaxEP() << " EP, " << i.getMeleeDmg() << " melee attack, "
	<< i.getRangeDmg() << " ranged attack and " << i.getArmor() << " armor." << std::endl;
	return os;
}