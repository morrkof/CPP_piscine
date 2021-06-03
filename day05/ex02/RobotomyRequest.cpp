/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequest.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:05:40 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/18 23:01:32 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequest.hpp"
#include <cstdlib>

RobotomyRequest::RobotomyRequest(std::string target): 
Form("Robotomy Request", 72, 45), _target(target){}

void RobotomyRequest::execute(Bureaucrat const &executor) const{
	executor.executeForm(*this);
	if (this->getSigned() == 0)
		throw Form::NoSignedException();
	if (executor.getGrade() > 45)
		throw Form::GradeTooLowException();
	const std::string message[2] = {" has been robotomized succesfully.", " failed to robotomize."};
	srand((time(0)));
	std::cout << this->_target << message[rand() % 2] << std::endl;

}

/* COPLIEN FORM */
RobotomyRequest::RobotomyRequest(void):
Form("Robotomy Request", 72, 45), _target("undefined"){}

RobotomyRequest::~RobotomyRequest(){}

RobotomyRequest::RobotomyRequest(RobotomyRequest const &src): Form(src){}

RobotomyRequest &RobotomyRequest::operator=(RobotomyRequest const &src){
	(void)src;
	return *this;
}