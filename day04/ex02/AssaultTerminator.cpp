/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:12:15 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/12 17:02:52 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

ISpaceMarine* AssaultTerminator::clone() const{
	ISpaceMarine* result = new AssaultTerminator(*this);
	return result;
}

void AssaultTerminator::battleCry() const{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const{
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const{
	std::cout << "* attacks with chainfists *" << std::endl;
}



AssaultTerminator::AssaultTerminator(void){
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &src){
	*this = src;
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator &AssaultTerminator::operator=(AssaultTerminator const &src){
	(void)src;
	return *this;
}

AssaultTerminator::~AssaultTerminator(void){
	std::cout << "I'll be back..." << std::endl;
}