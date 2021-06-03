/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:14:54 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/12 22:59:25 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
#define CURE_H

#include "AMateria.hpp"

class Cure: public AMateria {
public:
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);

	/* COPLIEN FORM */
	Cure(void);
	Cure(Cure const &src);
	Cure &operator=(Cure const &src);
	virtual ~Cure(void);
};

#endif