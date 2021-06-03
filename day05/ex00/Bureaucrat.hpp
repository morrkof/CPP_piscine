/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:02:37 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/18 13:46:28 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <string>
#include <iostream>

class Bureaucrat {
private:
	std::string const _name;
	int _grade;
	Bureaucrat(void);
public:
	Bureaucrat(std::string name, int grade);
	void incrementGrade(void);
	void decrementGrade(void);

/* GETTERS */
	std::string const getName(void) const;
	int getGrade(void) const;

/* COPLIEN FORM */
	Bureaucrat(Bureaucrat const &src);
	Bureaucrat &operator=(Bureaucrat const &src);
	~Bureaucrat(void);

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
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &i);

#endif