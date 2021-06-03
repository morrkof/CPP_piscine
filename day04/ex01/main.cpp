/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:09:05 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/11 17:03:51 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Fork.hpp"
#include "Bomb.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Unicorn.hpp"

int main()
{
    Character* me = new Character("me");
	std::cout << *me;

	AWeapon* rifle = new PlasmaRifle();
	AWeapon* fist = new PowerFist();
	AWeapon* fork = new Fork();
	AWeapon* bomb = new Bomb();

	std::cout << std::endl << "YOU HAVE BEEN DETECTED BY RAD-SCORPION" << std::endl;
	Enemy* scorpion = new RadScorpion();
	me->equip(rifle);
	std::cout << *me;
	me->attack(scorpion);
	std::cout << *me;
	me->equip(fist);
	me->attack(scorpion);
	me->attack(scorpion);
	std::cout << *me;

	std::cout << std::endl << "YOU HAVE BEEN DETECTED BY SUPER MUTANT"  << std::endl;
	Enemy* mutant = new SuperMutant();
	me->equip(fork);
	me->attack(mutant);
	std::cout << *mutant;
	me->attack(mutant);
	std::cout << *mutant;
	me->equip(bomb);
	me->attack(mutant);
	std::cout << *me;

	std::cout << std::endl << "YOU HAVE BEEN DETECTED BY UNICORN" << std::endl;
	Enemy* unicorn = new Unicorn();
	me->attack(unicorn);
	me->recoverAP();
	me->recoverAP();
	me->attack(unicorn);
	me->recoverAP();
	me->attack(unicorn);

	delete bomb;
	delete fork;
	delete fist;
	delete rifle;
	delete me;

	return 0;
}