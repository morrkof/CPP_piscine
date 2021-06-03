/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Frog.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:29:45 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/09 13:34:39 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Frog.hpp"

Frog::Frog(void) {
    std::cout << "Ribbit!" << std::endl;
}

Frog::Frog(std::string name): Victim(name) {
    std::cout << "Ribbit!" << std::endl;
}

Frog::~Frog(void) {
    std::cout << "Croak!" << std::endl;
}

Frog::Frog(Frog const &src) {
    *this = src;
    return ;
}

Frog &Frog::operator=(Frog const &src) {
    this->_name = src._name;
    return *this;
}

void Frog::getPolymorphed(void) const {
    std::cout << this->_name << " has been turned into a shiny unicorn!" << std::endl;
}
