/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 17:25:33 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/05 22:20:49 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(100, 100, 100, 100, 1, name, 30, 20, 5), _magicDmg(999){
	std::cout << "<FragTrap> : Hey, baby, wanna kill all humans?" << std::endl;
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

int FragTrap::getMagicDmg(void) const { return this->_magicDmg; }

/*
** CANONICAL FORM: default constructor, copy constructor,
**             assignation operator overload, destructor
*/

FragTrap::FragTrap(void): ClapTrap(100, 100, 100, 100, 1, "", 30, 20, 5), _magicDmg(999) {
	std::cout << "<FragTrap> : Hey, baby, wanna kill all humans?" << std::endl;
	return ;
}

FragTrap::~FragTrap(void) {
	std::cout << "<FragTrap> : I can see... the code..." << std::endl;
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

std::ostream & operator<<(std::ostream &os, FragTrap const &i) {
	os << i.getName() << " (" << i.getLevel() << " level) with " 
	<< i.getHP() << "/" << i.getMaxHP() << " HP, " << i.getEP() << "/" 
	<< i.getMaxEP() << " EP, " << i.getMeleeDmg() << " melee attack, "
	<< i.getRangeDmg() << " ranged attack, " << i.getMagicDmg() 
	<< " magic attack and " << i.getArmor() << " armor." << std::endl;
	return os;
}