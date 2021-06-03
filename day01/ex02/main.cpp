/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 19:15:51 by ppipes            #+#    #+#             */
/*   Updated: 2021/02/18 20:58:20 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <unistd.h>

Zombie* randomChump(ZombieEvent event)
{
	std::string name;
	Zombie *zombie;
	const int vowels[6] = {97, 101, 105, 111, 117, 121};
	const int consonant[20] = {	98,  99,  100, 102, 103, 
								104, 106, 107, 108, 109, 
								110, 112, 113, 114, 115, 
								116, 118, 119, 120, 122};
	static unsigned int seed = time(0);
	srand(seed);
	name.push_back((char)consonant[(seed = rand())%20]);
	name.push_back((char)vowels[(seed = rand())%6]);
	name.push_back((char)consonant[(seed = rand())%20]);
	name.push_back((char)consonant[(seed = rand())%20]);
	zombie = event.newZombie(name);
	zombie->announce();
	return(zombie);
}

int main(void)
{
	ZombieEvent event;
	Zombie *zombie1;
	Zombie *zombie2;
	event.setZombieType("fresh");
	zombie1 = randomChump(event);
	
	event.setZombieType("handless");
	zombie2 = randomChump(event);

	delete(zombie1);
	delete(zombie2);
}