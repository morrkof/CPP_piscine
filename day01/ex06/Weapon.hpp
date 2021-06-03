/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 16:13:32 by ppipes            #+#    #+#             */
/*   Updated: 2021/02/12 17:27:13 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon {
private:
	std::string _type;
public:
	Weapon(void);
	Weapon(std::string str);
	~Weapon(void);
	const std::string &getType(void);
	void setType(std::string str);
} ;

#endif