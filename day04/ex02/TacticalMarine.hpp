/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:12:34 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/12 16:59:28 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_H
#define TACTICALMARINE_H

#include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine {
public:
	virtual ISpaceMarine* clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;

	TacticalMarine(void);
	TacticalMarine(TacticalMarine const &src);
	TacticalMarine &operator=(TacticalMarine const &src);
	virtual ~TacticalMarine(void);
};

#endif