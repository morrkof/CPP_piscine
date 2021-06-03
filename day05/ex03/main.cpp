/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:03:00 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/19 00:55:41 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreation.hpp"
#include "RobotomyRequest.hpp"
#include "PresidentialPardon.hpp"
#include "Intern.hpp"

int main(){

Intern someRandonIntern;

std::cout << "TESTING SHRUBBERY CREATION" << std::endl;
try {
	Bureaucrat b("John", 100);
	Form *shrub = someRandonIntern.makeForm("shrubbery creation", "room");
	shrub->beSigned(b);
	shrub->execute(b);
}
catch (std::exception &e) {
	std::cerr << e.what() << std::endl;
}

std::cout << std::endl << "TESTING ROBOTOMY REQUEST" << std::endl;
try {
	Bureaucrat b("John", 40);
	Form *rob = someRandonIntern.makeForm("robotomy request", "Bender");
	rob->beSigned(b);
	rob->execute(b);
}
catch (std::exception &e) {
	std::cerr << e.what() << std::endl;
}

std::cout << std::endl << "TESTING PRESIDENTIAL PARDON" << std::endl;
try {
	Bureaucrat b("Mr President", 3);
	Form *pard = someRandonIntern.makeForm("presidential pardon", "Unicorn");
	pard->beSigned(b);
	pard->execute(b);
}
catch (std::exception &e) {
	std::cerr << e.what() << std::endl;
}

std::cout << std::endl << "TESTING ERROR" << std::endl;
try {
	Bureaucrat b("Mr President", 3);
	Form *fail = someRandonIntern.makeForm("delicious pizza", "Bender");
	fail->beSigned(b);
	fail->execute(b);
}
catch (std::exception &e) {
	std::cerr << e.what() << std::endl;
}

}