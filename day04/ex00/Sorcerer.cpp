/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 23:39:13 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/09 13:37:30 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) {
    std::cout << this->_name << ", " << this->_title << " is born!" << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title): _name(name), _title(title) {
    std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer(void) {
    std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &src) {
    *this = src;
    return ;
}

Sorcerer &Sorcerer::operator=(Sorcerer const &src) {
    this->_name = src._name;
    this->_title = src._title;

    return *this;
}

std::string Sorcerer::getName(void) const {return this->_name; }
std::string Sorcerer::getTitle(void) const {return this->_title; }

void Sorcerer::polymorph(Victim const &victim) const {
    victim.getPolymorphed();
    return ;
}

std::ostream &operator<<(std::ostream &os, Sorcerer const &i) {
    os << "I  am " << i.getName() << ", " << i.getTitle() << ", and I like ponies!" << std::endl;
    return os;
}