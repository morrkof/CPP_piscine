/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:05:28 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/19 00:21:02 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
#define INTERN_H

#include <string>
#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreation.hpp"
#include "RobotomyRequest.hpp"
#include "PresidentialPardon.hpp"

class Intern {
private:
	Form *makeShrubberyCreation(std::string const &target);
	Form *makeRobotomyRequest(std::string const &target);
	Form *makePresidentialPardon(std::string const &target);
public:
	Form *makeForm(std::string name, std::string target);

	Intern(void);
	~Intern(void);
	Intern(Intern const &src);
	Intern &operator=(Intern const &src);
};

#endif