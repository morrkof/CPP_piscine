/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardon.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:05:45 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/18 23:01:27 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardon.hpp"

PresidentialPardon::PresidentialPardon(std::string target): 
Form("Presidential Pardon", 25, 5), _target(target){}

void PresidentialPardon::execute(Bureaucrat const &executor) const{
	executor.executeForm(*this);
	if (this->getSigned() == 0)
		throw Form::NoSignedException();
	if (executor.getGrade() > 5)
		throw Form::GradeTooLowException();
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

/* COPLIEN FORM */
PresidentialPardon::PresidentialPardon(void):
Form("Presidential Pardon", 25, 5), _target("undefined"){}

PresidentialPardon::~PresidentialPardon(){}

PresidentialPardon::PresidentialPardon(PresidentialPardon const &src): Form(src){}

PresidentialPardon &PresidentialPardon::operator=(PresidentialPardon const &src){
	(void)src;
	return *this;
}