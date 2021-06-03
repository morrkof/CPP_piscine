/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardon.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:05:42 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/18 20:40:09 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDON_H
#define PRESIDENTIALPARDON_H

#include "Form.hpp"

class PresidentialPardon: public Form {
private:
	std::string _target;
public:
	PresidentialPardon(std::string target);
	virtual void execute(Bureaucrat const &executor) const;
/* COPLIEN FORM */
	PresidentialPardon(void);
	~PresidentialPardon();
	PresidentialPardon(PresidentialPardon const &src);
	PresidentialPardon &operator=(PresidentialPardon const &src);
};

#endif