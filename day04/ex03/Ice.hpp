/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:14:59 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/12 22:59:59 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
#define ICE_H

#include "AMateria.hpp"

class Ice: public AMateria {
public:
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);

	/* COPLIEN FORM */
	Ice(void);
	Ice(Ice const &src);
	Ice &operator=(Ice const &src);
	virtual ~Ice(void);
};

#endif