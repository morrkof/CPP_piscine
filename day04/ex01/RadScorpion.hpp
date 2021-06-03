/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:09:25 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/10 20:52:59 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_H
#define RADSCORPION_H

#include "Enemy.hpp"

class RadScorpion: public Enemy {
public:
	RadScorpion(void);
	RadScorpion(RadScorpion const &src);
	RadScorpion &operator=(RadScorpion const &src);
	virtual ~RadScorpion(void);
};

#endif