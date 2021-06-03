/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bomb.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:55:33 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/11 14:57:52 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOMB_H
#define BOMB_H

#include "AWeapon.hpp"

class Bomb: public AWeapon {
public:
	Bomb(void);
	Bomb(Bomb const &src);
	Bomb &operator=(Bomb const &src);
	virtual ~Bomb(void);
	virtual void attack() const;
};

#endif