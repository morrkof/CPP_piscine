/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 21:27:19 by ppipes            #+#    #+#             */
/*   Updated: 2021/02/18 21:15:44 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
#define HUMAN_H

#include "Brain.hpp"

class Human {
private:
	const Brain _humanBrain;
public:
	Human(void);
	~Human(void);
	const Brain &getBrain(void) const;
	std::string identify(void);
};

#endif