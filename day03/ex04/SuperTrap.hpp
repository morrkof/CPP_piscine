/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 16:26:58 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/05 21:59:24 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_H
#define SUPERTRAP_H

#include <string>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap {
public:
	SuperTrap(void);
	~SuperTrap(void);
	SuperTrap(SuperTrap const &src);
	SuperTrap &operator=(SuperTrap const &src);

	SuperTrap(std::string name);
};

std::ostream & operator<<(std::ostream &os, SuperTrap const &i);

#endif