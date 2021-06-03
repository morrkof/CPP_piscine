/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <student.21-school.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 23:40:02 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/08 15:28:48 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void) {
    std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(std::string name): _name(name) {
    std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::~Victim(void) {
    std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

Victim::Victim(Victim const &src) {
    *this = src;
    return ;
}

Victim &Victim::operator=(Victim const &src) {
    this->_name = src._name;
    return *this;
}

std::string Victim::getName(void) const {return this->_name; }

void Victim::getPolymorphed(void) const {
    std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream &operator<<(std::ostream &os, Victim const &i) {
    os << "I'm " << i.getName() << " and I like otters!" << std::endl;
    return os;
}