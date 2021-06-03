/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 19:15:51 by ppipes            #+#    #+#             */
/*   Updated: 2021/02/09 20:06:24 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <unistd.h>

int main(void)
{
	ZombieHorde horde = ZombieHorde(13);
	horde.announce();
}