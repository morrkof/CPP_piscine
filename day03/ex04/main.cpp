/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 17:25:39 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/05 00:56:42 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main(void) {
	std::cout << "CHECK CONSTRUCTOR:" << std::endl;
	FragTrap frag("Bandit");
	NinjaTrap samurai("Naruto");
	SuperTrap super("Clark Kent");

	std::cout << std::endl << "CHECK ATTRIBUTES:" << std::endl;
	std::cout << frag;
	std::cout << samurai;
	std::cout << super;

	std::cout << std::endl << "CHECK VAULTHUNTER_DOT_EXE FROM SUPERTRAP:" << std::endl;
	for(int i = 0; i < 5; i++) {
		super.vaulthunter_dot_exe("enemy");
		frag.vaulthunter_dot_exe("enemy");
	}

	std::cout << std::endl << "CHECK NINJA_SHOEBOX FROM SUPERTRAP:" << std::endl;
	super.ninjaShoebox(frag);

	std::cout << std::endl << "CHECK DESTRUCTOR:" << std::endl;
}