/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Frog.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:29:57 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/09 14:53:30 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FROG_H
#define FROG_H

#include <string>
#include <iostream>
#include "Victim.hpp"

class Frog: public Victim {
private:
	Frog(void);
public:
	Frog(std::string name);
	virtual ~Frog(void);
	Frog(Frog const &src);
	Frog &operator=(Frog const &src);
	virtual void getPolymorphed(void) const;
};

#endif