/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 19:16:02 by ppipes            #+#    #+#             */
/*   Updated: 2021/02/04 19:49:35 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_H
#define ZOMBIE_EVENT_H

#include <iostream>
#include <string>
#include "Zombie.hpp"

class ZombieEvent {
private:
	std::string _type;
public:
	ZombieEvent();
	~ZombieEvent();
	void setZombieType(std::string type);
	Zombie* newZombie(std::string name);
};

#endif