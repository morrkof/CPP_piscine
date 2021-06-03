/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:09:20 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/15 14:33:46 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_H
#define POWERFIST_H

#include "AWeapon.hpp"

class PowerFist: public AWeapon {
public:
	PowerFist(void);
	PowerFist(PowerFist const &src);
	PowerFist &operator=(PowerFist const &src);
	virtual ~PowerFist(void);
	virtual void attack() const;
};

#endif