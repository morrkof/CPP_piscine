/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:08:44 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/10 19:49:05 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_H
#define AWEAPON_H

#include <string>
#include <iostream>

class AWeapon {
protected:
	std::string _name;
	int _apCost;
	int _damage;
public:
	AWeapon(std::string const &name, int apcost, int damage);
	virtual void attack() const = 0;

	/* GETTERS */
	std::string const &getName() const;
	int getAPCost() const;
	int getDamage() const;
	
	/* COPLIEN FORM */
	AWeapon(void);
	AWeapon(AWeapon const &src);
	AWeapon &operator=(AWeapon const &src);
	virtual ~AWeapon();
};

std::ostream &operator<<(std::ostream &os, AWeapon const &i);

#endif