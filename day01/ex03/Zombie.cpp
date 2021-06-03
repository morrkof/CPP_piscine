/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 19:15:54 by ppipes            #+#    #+#             */
/*   Updated: 2021/02/09 20:07:56 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
	return ;
}

Zombie::Zombie(std::string name, std::string type): 
					_name(name), _type(type) {
	this->announce();
	return ;
}

Zombie::~Zombie() {
	std::cout << "Ggghhhhhssss..." << std::endl;
	return ;
}

std::string Zombie::getName(void) {
	return (this->_name);
}

std::string Zombie::getType(void) {
	return (this->_type);
}

void Zombie::setName(std::string str) {
	this->_name = str;
	return;
}

void Zombie::setType(std::string str) {
	this->_type = str;
	return;
}

void Zombie::announce() {
	std::cout << "<" << Zombie::getName() << " (" << Zombie::getType() << ")> ";
	std::cout << "Braiiiiiiiinnnssss..." << std::endl;
}