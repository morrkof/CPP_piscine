/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:05:26 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/19 00:53:26 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Form *Intern::makeShrubberyCreation(std::string const &target){
	Form *result = new ShrubberyCreation(target);
	return result;
}
Form *Intern::makeRobotomyRequest(std::string const &target){
	Form *result = new RobotomyRequest(target);
	return result;
}
Form *Intern::makePresidentialPardon(std::string const &target){
	Form *result = new PresidentialPardon(target);
	return result;
}

Form *Intern::makeForm(std::string name, std::string target){
	const std::string names[] = 
	{"shrubbery creation", "robotomy request", "presidential pardon"};
	Form *(Intern::*funcs[3])(std::string const &target) = 
	{&Intern::makeShrubberyCreation, &Intern::makeRobotomyRequest, &Intern::makePresidentialPardon};
	Form *result =  NULL;

	for (int i = 0; i < 3; i++) {
		if (name == names[i]) {
			result = (this->*funcs[i])(target);
			return result;
		}
	}
	throw std::runtime_error("Error: cannot create this form");
}

Intern::Intern(void){}
Intern::~Intern(void){}
Intern::Intern(Intern const &src){*this = src;}
Intern &Intern::operator=(Intern const &src){(void)src; return *this;}