/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:08:54 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/11 15:58:07 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type): _hp(hp), _type(type) {return;}
void Enemy::takeDamage(int damage) {
	if (damage > 0)
		this->_hp -= damage;
	if(_hp < 0)
		_hp = 0;
}

/* GETTERS */
std::string	const &Enemy::getType() const {return this->_type;}
int Enemy::getHP() const {return this->_hp;}

/* COPLIEN FORM */
Enemy::Enemy(void) {}
Enemy::Enemy(Enemy const &src) {*this = src;}
Enemy &Enemy::operator=(Enemy const &src) {
	this->_type = src._type;
	this->_hp = src._hp;
	return *this;
}
Enemy::~Enemy(void) {}

std::ostream &operator<<(std::ostream &os, Enemy const &i) {
	os << "🔍 <information>: Enemy type - " << i.getType()
	<< ", " << i.getHP() << " HP" << std::endl;
	return os;
}