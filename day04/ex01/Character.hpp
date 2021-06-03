/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:08:51 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/10 21:59:18 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {
private:
	std::string _name;
	int _ap;
	AWeapon* _weapon;
public:
	Character(std::string const &name);
	void recoverAP(void);
	void equip(AWeapon*);
	void attack(Enemy*);

	/* GETTERS */
	std::string const &getName(void) const;
	int getAP(void) const;
	AWeapon* getWeapon(void) const;

	/* COPLIEN FORM */
	Character(void);
	Character(Character const &src);
	Character &operator=(Character const &src);
	~Character(void);
};

std::ostream &operator<<(std::ostream &os, Character const &i);

#endif