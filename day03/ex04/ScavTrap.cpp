/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 17:24:55 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/05 21:59:04 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(100, 100, 50, 50, 1, name, 20, 15, 3) {
	std::cout << "<ScavTrap> : Helloooooo, Traveler!" << std::endl;
	return ;
}

void ScavTrap::challengeNewcomer(void) {
	std::string challenge[5] = {"Sing me a lullaby song!", "Show me the robot dance!", 
	"Bring me a delicious pizza!", "Bring me 5 boar skins!", "Наконец-то вы прибыли, но в наших записях не указано, откуда!"};
	
	static unsigned int seed = time(0);
	srand(seed);
	std::cout << this->_name << " : " << challenge[(seed = rand())%5] << std::endl;
}

ScavTrap::ScavTrap(void): ClapTrap(100, 100, 50, 50, 1, "", 20, 15, 3) {
	std::cout << "<ScavTrap> : Helloooooo, Traveler!" << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "<ScavTrap> : I'm too pretty to die!" << std::endl;
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

std::ostream & operator<<(std::ostream &os, ScavTrap const &i) {
	os << i.getName() << " (" << i.getLevel() << " level) with " 
	<< i.getHP() << "/" << i.getMaxHP() << " HP, " << i.getEP() << "/" 
	<< i.getMaxEP() << " EP, " << i.getMeleeDmg() << " melee attack, "
	<< i.getRangeDmg() << " ranged attack and " << i.getArmor() << " armor." << std::endl;
	return os;
}