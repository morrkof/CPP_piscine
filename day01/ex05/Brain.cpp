/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 21:34:10 by ppipes            #+#    #+#             */
/*   Updated: 2021/02/12 15:00:49 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	return ;
}

Brain::~Brain() {
	return ;
}

int Brain::getWeight(void) {
	return (this->_weight);
}

std::string Brain::identify(void) const {
	std::string result;
	std::ostringstream tmp;

	tmp << this;
	result = tmp.str();
	return (result);
}