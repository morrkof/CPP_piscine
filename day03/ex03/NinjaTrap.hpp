/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 14:13:03 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/05 00:38:02 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H
#define NINJATRAP_H

#include <string>
#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap: public ClapTrap {
public:
	NinjaTrap(void);
	~NinjaTrap(void);
	NinjaTrap(NinjaTrap const &src);
	NinjaTrap &operator=(NinjaTrap const &src);

	NinjaTrap(std::string name);
	void ninjaShoebox(ClapTrap &target);
	void ninjaShoebox(FragTrap &target);
	void ninjaShoebox(ScavTrap &target);
	void ninjaShoebox(NinjaTrap &target);
};

std::ostream & operator<<(std::ostream &os, NinjaTrap const &i);

#endif