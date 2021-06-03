/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:31:01 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/05 00:27:28 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>

class ClapTrap {
protected:
	int _HP;
	int _maxHP;
	int _EP;
	int _maxEP;
	int _level;
	std::string _name;
	int _meleeDmg;
	int _rangedDmg;
	int _armor;
public:
	ClapTrap(int hp, int maxHp, int ep, int maxEp, int level, 
	std::string name, int melee, int range, int armor);
	ClapTrap(std::string name);
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	ClapTrap(void);
	~ClapTrap(void);
	ClapTrap(ClapTrap const &src);
	ClapTrap &operator=(ClapTrap const &src);

	int getHP(void) const;
	int getMaxHP(void) const;
	int getEP(void) const;
	int getMaxEP(void) const;
	int getLevel(void) const;
	std::string getName(void) const;
	int getMeleeDmg(void) const;
	int getRangeDmg(void) const;
	int getArmor(void) const;
};

std::ostream & operator<<(std::ostream &os, ClapTrap const &i);

#endif