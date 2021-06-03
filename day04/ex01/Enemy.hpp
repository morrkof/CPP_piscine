/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:08:57 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/10 22:15:35 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_H
#define ENEMY_H

#include <string>
#include <iostream>

class Enemy {
protected:
	int _hp;
	std::string _type;
public:
	Enemy(int hp, std::string const &type);
	virtual void takeDamage(int);

	/* GETTERS */
	std::string	const &getType() const;
	int getHP() const;

	/* COPLIEN FORM */
	Enemy(void);
	Enemy(Enemy const &src);
	Enemy &operator=(Enemy const &src);
	virtual ~Enemy(void);
};

std::ostream &operator<<(std::ostream &os, Enemy const &i);

#endif