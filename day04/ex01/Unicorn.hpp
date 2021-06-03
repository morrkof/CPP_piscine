/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Unicorn.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 15:00:29 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/11 15:06:48 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNICORN_H
#define UNICORN_H

#include "Enemy.hpp"

class Unicorn: public Enemy {
public:
	Unicorn(void);
	Unicorn(Unicorn const &src);
	Unicorn &operator=(Unicorn const &src);
	virtual ~Unicorn(void);
};

#endif