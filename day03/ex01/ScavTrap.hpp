/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 17:24:53 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/03 13:42:19 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <string>
#include <iostream>
#include <cstdlib>

class ScavTrap {
private:
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
	ScavTrap(std::string name);
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer(void);

	ScavTrap(void);
	~ScavTrap(void);
	ScavTrap(ScavTrap const &src);
	ScavTrap &operator=(ScavTrap const &src);

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
};

std::ostream & operator<<(std::ostream &os, ScavTrap const &i);

#endif
