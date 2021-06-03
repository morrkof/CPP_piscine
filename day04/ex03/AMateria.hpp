/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:14:43 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/15 13:32:33 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H

#include "ICharacter.hpp"
#include <string>
#include <iostream>

class ICharacter;

class AMateria {
protected:
	std::string _type;
	unsigned int _xp;
public:
	AMateria(std::string const &type);
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

	/* GETTERS & SETTERS*/
	std::string const &getType() const;
	unsigned int getXP() const;

	/* COPLIEN FORM */
	AMateria(void);
	AMateria(AMateria const &src);
	AMateria &operator=(AMateria const &src);
	virtual ~AMateria(void);
};

#endif