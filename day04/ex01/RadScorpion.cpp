/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:09:23 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/11 16:21:39 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void): Enemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &src){
	*this = src;
	std::cout << "* click click click *" << std::endl;
	return;
}

RadScorpion &RadScorpion::operator=(RadScorpion const &src){
	this->_type = src._type;
	this->_hp = src._hp;
	return *this;
}

RadScorpion::~RadScorpion(void){
	std::cout << "☠️  * SPROTCH *" << std::endl;
}
