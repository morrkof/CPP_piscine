/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 21:29:53 by ppipes            #+#    #+#             */
/*   Updated: 2021/02/12 14:55:56 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <string>
#include <sstream>

class Brain {
private:
	int _weight;
public:
	Brain(void);
	~Brain(void);
	int	getWeight(void);
	std::string identify(void) const;
};

#endif