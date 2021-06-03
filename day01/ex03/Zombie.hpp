/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 19:15:57 by ppipes            #+#    #+#             */
/*   Updated: 2021/02/09 19:37:46 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie {
private:
	std::string _name;
	std::string _type;
public:
	Zombie(void);
	Zombie(std::string name, std::string type);
	~Zombie(void);
	std::string getName(void);
	std::string getType(void);
	void setName(std::string str);
	void setType(std::string str);
	void announce(void);
};

#endif