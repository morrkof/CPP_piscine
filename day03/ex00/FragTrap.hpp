/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 17:25:36 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/03 11:29:05 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <string>
#include <iostream>
#include <cstdlib>

class FragTrap {
private:
	int _HP;
	int _maxHP;
	int _EP;
	int _maxEP;
	int _level;
	std::string _name;
	int _meleeDmg;
	int _rangedDmg;
	int _magicDmg;
	int _armor;
public:
	FragTrap(std::string name);
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void magicAttack(std::string const &target);
	void sneakAttack(std::string const &target);
	void panicAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const &target);

	FragTrap(void);
	~FragTrap(void);
	FragTrap(FragTrap const &src);
	FragTrap &operator=(FragTrap const &src);
	
	int getHP(void) const;
	int getMaxHP(void) const;
	int getEP(void) const;
	int getMaxEP(void) const;
	int getLevel(void) const;
	std::string getName(void) const;
	int getMeleeDmg(void) const;
	int getRangeDmg(void) const;
	int getMagicDmg(void) const;
	int getArmor(void) const;
} ;

std::ostream & operator<<(std::ostream &os, FragTrap const &i);

#endif