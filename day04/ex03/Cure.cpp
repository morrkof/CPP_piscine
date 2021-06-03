/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:14:51 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/15 12:41:36 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

AMateria* Cure::clone() const{
	AMateria* result = new Cure(*this);
	return result;
} 
void Cure::use(ICharacter& target){
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

/* COPLIEN FORM */
Cure::Cure(void): AMateria("cure"){}

Cure::Cure(Cure const &src){
	*this = src;
}
Cure &Cure::operator=(Cure const &src){
	this->_type = src._type;
	this->_xp = src._xp;
	return *this;
}
Cure::~Cure(void){}