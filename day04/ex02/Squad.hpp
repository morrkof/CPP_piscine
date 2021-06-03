/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:12:29 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/12 20:44:41 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_H
#define SQUAD_H

#include "ISquad.hpp"

typedef struct		s_unit
{
	ISpaceMarine*	marine;
	struct s_unit*	next;
}					t_unit;

class Squad: public ISquad {
private:
	t_unit* _unit;
	int _count;
public:
	virtual int getCount() const;
	virtual ISpaceMarine* getUnit(int) const;
	virtual int push(ISpaceMarine*);

	Squad(void);
	Squad(Squad const &src);
	Squad &operator=(Squad const &src);
	virtual ~Squad(void);
};

#endif
