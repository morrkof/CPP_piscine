/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 17:25:39 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/05 00:18:05 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main(void) {
	std::cout << "CHECK CONSTRUCTOR:" << std::endl;
	ClapTrap clap("Parent");
	FragTrap robot("Jelezyaka");
	ScavTrap host("Hostess");

	std::cout << std::endl << "CHECK ATTRIBUTES:" << std::endl;
	std::cout << clap;
	std::cout << robot;
	std::cout << host;

	std::cout << std::endl << "CHECK VAULTHUNTER_DOT_EXE:" << std::endl;
	for (int i = 0; i < 5; i++)
		robot.vaulthunter_dot_exe("your mom");
	
	std::cout << std::endl << "CHECK CHALLENGE_NEWCOMER:" << std::endl;
	for (int i = 0; i < 5; i++)
		host.challengeNewcomer();

	std::cout << std::endl << "CHECK DESTRUCTOR:" << std::endl;
}