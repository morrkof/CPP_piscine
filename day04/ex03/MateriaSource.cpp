/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:15:10 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/15 14:05:17 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void){
	for(int i = 0; i < 4; i++)
		_memory[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src){
	*this = src;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &src){
	for(int i = 0; i < 4; i++) {
		if (this->_memory[i] != NULL)
			delete _memory[i];
	}
	for(int i = 0; i < 4; i++) {
		if(src._memory[i])
			this->_memory[i] = src._memory[i]->clone();
		else
			this->_memory[i] = NULL;
	}
	return *this;
}

MateriaSource::~MateriaSource(){
	for(int i = 0; i < 4; i++) {
		if (_memory[i] != NULL)
			delete _memory[i];
	}
}

void MateriaSource::learnMateria(AMateria* m){
	for(int i = 0; i < 4; i++) {
		if (_memory[i] == NULL) {
			_memory[i] = m;
			std::cout << "Materia Source: learned " << m->getType() << std::endl;
			return;
		}
	}
	std::cout << "Materia Source: memory is full" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const &type){
	for(int i = 0; i < 4; i++) {
		if (_memory[i]->getType() == type) {
			std::cout << "Materia Source: created " << _memory[i]->getType() << std::endl;
			return _memory[i]->clone();
		}
	}
	std::cout << "Materia Source: unknown type of materia" << std::endl;
	return 0;
}