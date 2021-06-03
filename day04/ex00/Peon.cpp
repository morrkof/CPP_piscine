/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <student.21-school.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 23:39:49 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/08 17:45:43 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void) {
    std::cout << "Zog zog" << std::endl;
}

Peon::Peon(std::string name): Victim(name) {
    std::cout << "Zog zog" << std::endl;
}

Peon::~Peon(void) {
    std::cout << "Bleuark" << std::endl;
}

Peon::Peon(Peon const &src) {
    *this = src;
    return ;
}

Peon &Peon::operator=(Peon const &src) {
    this->_name = src._name;
    return *this;
}

void Peon::getPolymorphed(void) const {
    std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}
