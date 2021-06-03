/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:14:56 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/15 12:41:10 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

AMateria* Ice::clone() const{
	AMateria* result = new Ice(*this);
	return result;
}
void Ice::use(ICharacter& target){
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

/* COPLIEN FORM */
Ice::Ice(void): AMateria("ice") {}

Ice::Ice(Ice const &src){
	*this = src;
}
Ice &Ice::operator=(Ice const &src){
	this->_type = src._type;
	this->_xp = src._xp;
	return *this;
}
Ice::~Ice(void){}