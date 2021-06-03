/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Unicorn.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 15:06:01 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/11 16:21:42 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Unicorn.hpp"

Unicorn::Unicorn(void): Enemy(256, "Unicorn") {
	std::cout << "* NEEEIIIGH *" << std::endl;
}

Unicorn::Unicorn(Unicorn const &src){
	*this = src;
	std::cout << "* NEEEIIIGH *" << std::endl;
	return;
}

Unicorn &Unicorn::operator=(Unicorn const &src){
	this->_type = src._type;
	this->_hp = src._hp;
	return *this;
}

Unicorn::~Unicorn(void){
	std::cout << "☠️  * Ghhhss... *" << std::endl;
	std::cout << "<With this character's death, the thread of prophecy is severed. Restore a saved game to restore the weave of fate, or persist in the doomed world you have created.>" << std::endl;
}
