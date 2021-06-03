/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:09:31 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/10 20:42:19 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_H
#define SUPERMUTANT_H

#include "Enemy.hpp"

class SuperMutant: public Enemy {
public:
	SuperMutant(void);
	SuperMutant(SuperMutant const &src);
	SuperMutant &operator=(SuperMutant const &src);
	virtual ~SuperMutant(void);
	virtual void takeDamage(int);
};

#endif