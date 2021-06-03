/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 21:34:14 by ppipes            #+#    #+#             */
/*   Updated: 2021/02/18 21:43:51 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void) {
	return ;
}

Human::~Human(void) {
	return ;
}

const Brain &Human::getBrain(void) const {
	return (this->_humanBrain);
}

std::string Human::identify(void) {
	return (this->_humanBrain.identify());
}