/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:03:27 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/18 22:00:29 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
	std::string const _name;
	int const _toSign;
	int const _toExec;
	bool _signed;
public:
	Form(std::string name, int toSign, int toExec);
	void beSigned(Bureaucrat b);
	virtual void execute(Bureaucrat const &executor) const = 0;

/* GETTERS */
	std::string const getName(void) const;
	bool getSigned(void) const;
	int getGradeToSign(void) const;
	int getGradeToExec(void) const;

/* COPLIEN FORM */
	Form(void);
	Form(Form const &src);
	Form &operator=(Form const &src);
	~Form(void);

/* EXCEPTIONS */
	class GradeTooHighException: public std::exception {
	private:
		std::string _error;
	public:
		GradeTooHighException(void);
		~GradeTooHighException(void) throw(){}
		virtual const char* what() const throw();
	};

	class GradeTooLowException: public std::exception {
	private:
		std::string _error;
	public:
		GradeTooLowException(void);
		~GradeTooLowException(void) throw() {}
		virtual const char* what() const throw();
	};

	class NoSignedException: public std::exception {
	private:
		std::string _error;
	public:
		NoSignedException(void);
		~NoSignedException(void) throw() {}
		virtual const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, Form const &i);

#endif