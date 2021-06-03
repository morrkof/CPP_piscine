/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 23:39:37 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/09 14:53:13 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_H
#define VICTIM_H

#include <string>
#include <iostream>

class Victim {
protected:
	std::string _name;
	Victim(void);
public:
	Victim(std::string name);
	virtual ~Victim(void);
	Victim(Victim const &src);
	Victim &operator=(Victim const &src);

	std::string getName(void) const;
	virtual void getPolymorphed(void) const;
};

std::ostream &operator<<(std::ostream &os, Victim const &i);

#endif