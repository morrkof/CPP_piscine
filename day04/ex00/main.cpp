/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 23:38:42 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/09 13:35:50 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Frog.hpp"
#include <iostream>

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Frog jaba("Jabbita");

	std::cout << robert << jim << joe << jaba;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(jaba);

	return 0;
}