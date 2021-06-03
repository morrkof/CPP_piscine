/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 17:25:39 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/05 00:40:02 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void) {
	std::cout << "CHECK CONSTRUCTOR:" << std::endl;
	ClapTrap clap("Floppa");
	FragTrap robot("Jelezyaka");
	ScavTrap host("Hostess");
	NinjaTrap samurai("Naruto");

	std::cout << std::endl << "CHECK ATTRIBUTES:" << std::endl;
	std::cout << clap;
	std::cout << robot;
	std::cout << host;
	std::cout << samurai;

	std::cout << std::endl << "CHECK NINJA_SHOEBOX:" << std::endl;
	samurai.ninjaShoebox(clap);
	samurai.ninjaShoebox(robot);
	samurai.ninjaShoebox(host);
	samurai.ninjaShoebox(samurai);

	std::cout << std::endl << "CHECK DESTRUCTOR:" << std::endl;
}