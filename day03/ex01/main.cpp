/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 17:25:39 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/03 13:35:51 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
	std::cout << "CHECK CONSTRUCTOR:" << std::endl;
	FragTrap robot("Jelezyaka");
	ScavTrap host("Hostess");

	std::cout << std::endl << "CHECK ATTRIBUTES:" << std::endl;
	std::cout << robot;
	std::cout << host;

	std::cout << std::endl << "CHECK TAKING DAMAGE:" << std::endl;
	robot.takeDamage(30);
	host.takeDamage(30);
	robot.takeDamage(40);
	host.takeDamage(40);
	robot.takeDamage(50);
	host.takeDamage(50);

	std::cout << std::endl << "CHECK REPAIRING:" << std::endl;
	robot.beRepaired(30);
	host.beRepaired(30);
	robot.beRepaired(10000000);
	host.beRepaired(10000000);

	std::cout << std::endl << "CHECK CHALLENGE_NEWCOMER:" << std::endl;
	for (int i = 0; i < 5; i++)
		host.challengeNewcomer();

	std::cout << std::endl << "CHECK DESTRUCTOR:" << std::endl;
}