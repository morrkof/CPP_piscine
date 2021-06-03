/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 23:39:25 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/09 14:53:20 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_H
#define PEON_H

#include <string>
#include <iostream>
#include "Victim.hpp"

class Peon: public Victim {
private:
	Peon(void);
public:
	Peon(std::string name);
	virtual ~Peon(void);
	Peon(Peon const &src);
	Peon &operator=(Peon const &src);
	virtual void getPolymorphed(void) const;
};

#endif