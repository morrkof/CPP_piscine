/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fork.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:50:19 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/11 14:52:06 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORK_H
#define FORK_H

#include "AWeapon.hpp"

class Fork: public AWeapon {
public:
	Fork(void);
	Fork(Fork const &src);
	Fork &operator=(Fork const &src);
	virtual ~Fork(void);
	virtual void attack() const;
};

#endif
