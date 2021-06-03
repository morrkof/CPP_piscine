/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 17:25:36 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/05 22:19:34 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <string>
#include <iostream>
#include <cstdlib>
#include "ClapTrap.hpp"

class FragTrap: public virtual ClapTrap {
private:
	static const int _HP_frag = 100;
protected:
	int _magicDmg;
public:
	FragTrap(std::string name);
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void magicAttack(std::string const &target);
	void sneakAttack(std::string const &target);
	void panicAttack(std::string const &target);
	void vaulthunter_dot_exe(std::string const &target);
	int getMagicDmg(void) const;

	FragTrap(void);
	~FragTrap(void);
	FragTrap(FragTrap const &src);
	FragTrap &operator=(FragTrap const &src);
} ;

std::ostream & operator<<(std::ostream &os, FragTrap const &i);

#endif