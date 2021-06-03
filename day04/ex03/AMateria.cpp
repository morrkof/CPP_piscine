/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:14:39 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/15 12:42:13 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type): _type(type), _xp(0){}

void AMateria::use(ICharacter& target){
	(void)target;
	this->_xp += 10;
}

/* GETTERS & SETTERS*/
std::string const &AMateria::getType() const{
	return this->_type;
}

unsigned int AMateria::getXP() const{
	return this->_xp;
}

/* COPLIEN FORM */
AMateria::AMateria(void): _type("none"), _xp(0) {}

AMateria::AMateria(AMateria const &src){
	*this = src;
}

AMateria &AMateria::operator=(AMateria const &src){
	this->_type = src._type;
	this->_xp = src._xp;
	return *this;
}

AMateria::~AMateria(void){}