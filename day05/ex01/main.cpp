/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:03:00 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/18 18:57:53 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){

std::cout << "FORM GRADE = BUREAUCRAT GRADE:" << std::endl;
try {
	Bureaucrat b("John", 100);
	Form f("A-100", 100, 99);
	std::cout << b << f;
	
	f.beSigned(b);
}
catch (std::exception &e) {
	std::cerr << e.what() << std::endl;
}

std::cout << std::endl << "FORM GRADE < BUREAUCRAT GRADE:" << std::endl;
try {
	Bureaucrat b("Jack", 100);
	Form f("A-42", 42, 50);
	std::cout << b << f;

	f.beSigned(b);
}
catch (std::exception &e) {
	std::cerr << e.what() << std::endl;
}

std::cout << std::endl << "FORM GRADE > BUREAUCRAT GRADE:" << std::endl;
try {
	Bureaucrat b("Jacob", 100);
	Form f("A-120", 120, 110);
	std::cout << b << f;

	f.beSigned(b);
}
catch (std::exception &e) {
	std::cerr << e.what() << std::endl;
}

}