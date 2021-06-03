/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 17:24:53 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/05 21:59:10 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <string>
#include <iostream>
#include <cstdlib>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
public:
	ScavTrap(void);
	~ScavTrap(void);
	ScavTrap(ScavTrap const &src);
	ScavTrap &operator=(ScavTrap const &src);

	ScavTrap(std::string name);
	void challengeNewcomer(void);
};

std::ostream & operator<<(std::ostream &os, ScavTrap const &i);

#endif
