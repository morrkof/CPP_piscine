/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:03:00 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/18 23:07:27 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreation.hpp"
#include "RobotomyRequest.hpp"
#include "PresidentialPardon.hpp"

int main(){

std::cout << "SHRUBBERY CREATION" << std::endl;
try {
	Bureaucrat b("John", 100);
	ShrubberyCreation f("home");
	
	f.beSigned(b);
	f.execute(b);
}
catch (std::exception &e) {
	std::cerr << e.what() << std::endl;
}

std::cout << std::endl << "ROBOTOMY REQUEST" << std::endl;
try {
	Bureaucrat b("John", 40);
	RobotomyRequest f("Bob");
	
	f.beSigned(b);
	f.execute(b);
}
catch (std::exception &e) {
	std::cerr << e.what() << std::endl;
}

std::cout << std::endl << "PRESIDENTIAL PARDON" << std::endl;
try {
	Bureaucrat b("Mr President", 3);
	PresidentialPardon f("Zombie");
	
	f.beSigned(b);
	f.execute(b);
}
catch (std::exception &e) {
	std::cerr << e.what() << std::endl;
}

std::cout << std::endl << "========== FAIL: ==========" << std::endl;

std::cout << "SHRUBBERY CREATION" << std::endl;
try {
	Bureaucrat b("John", 151);
	ShrubberyCreation f("street");
	
	f.beSigned(b);
	f.execute(b);
}
catch (std::exception &e) {
	std::cerr << e.what() << std::endl;
}

std::cout << std::endl << "ROBOTOMY REQUEST" << std::endl;
try {
	Bureaucrat b("John", 75);
	RobotomyRequest f("Bob");
	
	f.beSigned(b);
	f.execute(b);
}
catch (std::exception &e) {
	std::cerr << e.what() << std::endl;
}

std::cout << std::endl << "PRESIDENTIAL PARDON" << std::endl;
try {
	Bureaucrat b("Mr President", 3);
	PresidentialPardon f("Zombie");
	
	f.execute(b);
}
catch (std::exception &e) {
	std::cerr << e.what() << std::endl;
}

}