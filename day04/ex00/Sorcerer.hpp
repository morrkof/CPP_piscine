/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <student.21-school.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 23:39:01 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/08 15:35:54 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_H
#define SORCERER_H

#include <string>
#include <iostream>
#include "Victim.hpp"

class Sorcerer {
private:
	std::string _name;
	std::string _title;
	Sorcerer(void);
public:
	Sorcerer(std::string name, std::string title);
	~Sorcerer(void);
	Sorcerer(Sorcerer const &src);
	Sorcerer &operator=(Sorcerer const &src);

	std::string getName(void) const;
	std::string getTitle(void) const;
	void polymorph(Victim const &) const;
};

std::ostream &operator<<(std::ostream &os, Sorcerer const &i);

#endif