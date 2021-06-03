/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 15:39:02 by ppipes            #+#    #+#             */
/*   Updated: 2021/02/02 16:18:56 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
#define PONY_H

#include <string>
#include <iostream>

class Pony {
private:
	std::string _name;
	std::string _element;
	std::string _hairColor;
public:
	Pony(std::string name, std::string element, std::string hair);
	~Pony(void);
	std::string getName(void);
	std::string getElement(void);
	std::string getHairColor(void);
	void setName(std::string str);
	void setElement(std::string str);
	void setHairColor(std::string str);
};

#endif