/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 19:15:59 by ppipes            #+#    #+#             */
/*   Updated: 2021/02/09 20:35:33 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <cstdlib>

ZombieHorde::ZombieHorde(int N) : _number(N) {
	int i = 0;
	const std::string name[] = {"Poe", "Rimbaud", "Mallarme", "Baudelaire", "Verlaine"};
	const std::string type[] = {"écrivain", "poète", "troubadour", "rhapsode", "barde"};

	this->_zombie = new Zombie[N];
	srand((time(0)));
	while(i < N) {
		this->_zombie[i].setName(name[rand() % 5]);
		this->_zombie[i].setType(type[rand() % 5]);
		i++;
	}
	return ;
}

ZombieHorde::~ZombieHorde() {
	delete [] this->_zombie;
	return ;
}

void	ZombieHorde::announce(void) {
	int i = 0;
	while(i < _number) {
		this->_zombie[i].announce();
		i++;
	}
}