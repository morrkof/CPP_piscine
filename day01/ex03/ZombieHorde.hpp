/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 19:16:02 by ppipes            #+#    #+#             */
/*   Updated: 2021/02/09 19:36:38 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_H
#define ZOMBIE_HORDE_H

#include <iostream>
#include <string>
#include "Zombie.hpp"

class ZombieHorde {
private:
	Zombie *_zombie;
	int		_number;
public:
	ZombieHorde(int N);
	~ZombieHorde();
	void announce();
};

#endif