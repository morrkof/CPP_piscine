/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:14:45 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/15 14:00:17 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void): _name("noname"){
	for(int i = 0; i < 4; i++) {
		_inventory[i] = NULL;
	}
}

Character::Character(Character const &src){
	*this = src;
}

Character &Character::operator=(Character const &src){
	for(int i = 0; i < 4; i++) {
		if (this->_inventory[i] != NULL)
			delete _inventory[i];
	}
	for(int i = 0; i < 4; i++) {
		if(src._inventory[i])
			this->_inventory[i] = src._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	this->_name = src._name;
	return *this;
} 

Character::~Character(){
	for(int i = 0; i < 4; i++) {
		if (_inventory[i] != NULL)
			delete _inventory[i];
	}
}

Character::Character(std::string name): _name(name) {
	for(int i = 0; i < 4; i++) {
		_inventory[i] = NULL;
	}
}

std::string const & Character::getName() const{ return this->_name;}

void Character::equip(AMateria* m){
	if (m == NULL) {
		std::cout << "Can't equip this" << std::endl;
		return;
	}
	for(int i = 0; i < 4; i++) {
		if (_inventory[i] == NULL) {
			std::cout << _name << " equip " << m->getType() << std::endl;
			_inventory[i] = m;
			return;
		}
	}
	std::cout << "Inventory is full" << std::endl;
}

void Character::unequip(int idx){
	if (idx < 0 || idx > 3)
		return;
	_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target){
	if(idx < 0 || idx > 3 || _inventory[idx] == NULL)
		return;
	_inventory[idx]->use(target);
}