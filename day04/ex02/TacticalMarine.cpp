/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:12:31 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/12 17:02:45 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

ISpaceMarine* TacticalMarine::clone() const{
	ISpaceMarine* result = new TacticalMarine(*this);
	return result;
}

void TacticalMarine::battleCry() const{
	std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const{
	std::cout << "* attacks with a chainsword *" << std::endl;
}



TacticalMarine::TacticalMarine(void){
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &src){
	*this = src;
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine &TacticalMarine::operator=(TacticalMarine const &src){
	(void)src;
	return *this;
}

TacticalMarine::~TacticalMarine(void){
	std::cout << "Aaargh..." << std::endl;
}
