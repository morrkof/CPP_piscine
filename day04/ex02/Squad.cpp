/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:12:26 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/15 14:23:26 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

int Squad::getCount() const{
	return this->_count;
}

ISpaceMarine* Squad::getUnit(int N) const{
	if (N >= this->_count)
		return NULL;
	t_unit* result = this->_unit;
	for(int i = 0; i < N; i++)
		result = result->next;
	return result->marine;
}

int Squad::push(ISpaceMarine* newMarine){
	t_unit *newUnit = new t_unit;
	newUnit->marine = newMarine;
	newUnit->next = NULL;

	if (this->_unit == NULL) {
		this->_unit = newUnit;
		this->_count++;
		return this->_count;
	}

	t_unit *last = this->_unit;
	for(int i = 1; i < this->_count; i++)
		last = last->next;
	last->next = newUnit;
	newUnit->next = NULL;
	this->_count++;

	return this->_count;
}

Squad::Squad(void):  _unit(NULL), _count(0) {}

Squad::Squad(Squad const &src):  _unit(NULL), _count(0) {
	*this = src;
}

Squad &Squad::operator=(Squad const &src){
	if (this->_count != 0) {
		t_unit *tmp;
		t_unit *current;

		current = this->_unit;
		while(current != NULL) {
			tmp = current->next;
			delete current->marine;
			delete current;
			current = tmp;
		}
		this->_unit = NULL;
		this->_count = 0;
	}
	if(src._count == 0)
		return *this;
	for (int i = 0; i < src._count; i++)
		this->push(src.getUnit(i)->clone());
	
	return *this;
}

Squad::~Squad(void){
	t_unit *tmp;
	t_unit *current;

	current = this->_unit;
	while(current != NULL) {
		tmp = current->next;
		delete current->marine;
		delete current;
		current = tmp;
	}
	this->_unit = NULL;
	this->_count = 0;
}