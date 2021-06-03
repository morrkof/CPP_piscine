/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:09:13 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/10 20:39:55 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_H
#define PLASMARIFLE_H

#include "AWeapon.hpp"

class PlasmaRifle: public AWeapon {
public:
	PlasmaRifle(void);
	PlasmaRifle(PlasmaRifle const &src);
	PlasmaRifle &operator=(PlasmaRifle const &src);
	virtual ~PlasmaRifle(void);
	virtual void attack() const;
};

#endif
