/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreation.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:05:31 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/18 20:47:37 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATION_H
#define SHRUBBERYCREATION_H

#include "Form.hpp"

class ShrubberyCreation: public Form {
private:
	std::string _target;
public:
	ShrubberyCreation(std::string target);
	virtual void execute(Bureaucrat const &executor) const;
/* COPLIEN FORM */
	ShrubberyCreation(void);
	~ShrubberyCreation();
	ShrubberyCreation(ShrubberyCreation const &src);
	ShrubberyCreation &operator=(ShrubberyCreation const &src);
};

#endif