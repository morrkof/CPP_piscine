/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:03:24 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/18 18:41:27 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int toSign, int toExec): 
_name(name), _toSign(toSign), _toExec(toExec), _signed(0) {}

void Form::beSigned(Bureaucrat b){
	b.signForm(*this);
	if (b.getGrade() > this->getGradeToSign())
		throw Form::GradeTooLowException();
	this->_signed = 1;
}

/* GETTERS */
std::string const Form::getName(void) const{return this->_name;}
bool Form::getSigned(void) const {return this->_signed;}
int Form::getGradeToSign(void) const{return this->_toSign;}
int Form::getGradeToExec(void) const{return this->_toExec;}

/* COPLIEN FORM */
Form::Form(void): 
_name("default"), _toSign(1), _toExec(1), _signed(0) {}

Form::Form(Form const &src): _name(src._name), _toSign(src._toSign), 
_toExec(src._toExec), _signed(src._signed) { *this = src;}

Form &Form::operator=(Form const &src){
	this->_signed = src._signed;
	return *this;
}

Form::~Form(void){}

/* EXCEPTIONS */
Form::GradeTooHighException::GradeTooHighException(void){
	_error = "Error: Grade for sign is too High!";
}
const char* Form::GradeTooHighException::what() const throw(){
	return _error.c_str();
}

Form::GradeTooLowException::GradeTooLowException(void){
	_error = "Error: Grade for sign is too Low!";
}
const char* Form::GradeTooLowException::what() const throw(){
	return _error.c_str();
}

std::ostream &operator<<(std::ostream &os, Form const &i) {
	os << i.getName() << " form with " << i.getGradeToSign() << " grade to sign is ";
	i.getSigned() ? os << "signed.\n" : os << "not signed.\n";
	return os;
}