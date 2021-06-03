/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 15:38:55 by ppipes            #+#    #+#             */
/*   Updated: 2021/02/02 18:12:01 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap()
{
	Pony *Vulkan = new Pony("Vulkan", "fire", "red");
	delete Vulkan;
}

void	ponyOnTheStack()
{
	Pony Cloud = Pony("Cloud", "air", "grey");
}

int		main(void)
{
	std::cout << "-= Pony on the heap function =- " << std::endl;
	ponyOnTheHeap();
	std::cout << "-= Pony on the stack function =- " << std::endl;
	ponyOnTheStack();
}