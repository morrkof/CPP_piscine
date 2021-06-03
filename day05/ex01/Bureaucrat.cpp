/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:02:51 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/18 18:32:27 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void){}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;	
}

void Bureaucrat::incrementGrade(void){
	if ((this->_grade - 1) < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void Bureaucrat::decrementGrade(void){
	if ((this->_grade + 1) > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

void Bureaucrat::signForm(Form &form){
	if (form.getGradeToSign() < _grade) {
		std::cout << _name << " cannot sign " << form.getName()
		 << " because his grade is too low." << std::endl;
	}
	else
		std::cout << _name << " signs " << form.getName() << std::endl;	
}

/* GETTERS */
std::string const Bureaucrat::getName(void) const{ return this->_name;}
int Bureaucrat::getGrade(void) const{return this->_grade;}

/* COPLIEN FORM */
Bureaucrat::Bureaucrat(Bureaucrat const &src): _name(src._name){ *this = src;}
Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src) {
	this->_grade = src._grade;
	return *this;
}
Bureaucrat::~Bureaucrat(void){}

/* EXCEPTIONS */
Bureaucrat::GradeTooHighException::GradeTooHighException(void){
	_error = "Error: Grade too High!";
}
const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return _error.c_str();
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void){
	_error = "Error: Grade too Low!";
}
const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return _error.c_str();
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &i){
	os << i.getName() << ", bureaucrat grade " << i.getGrade() << std::endl;
	return os;
}
