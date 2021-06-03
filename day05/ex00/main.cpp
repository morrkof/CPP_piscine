/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:03:00 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/18 16:03:55 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){

std::cout << "NORMAL BUREAUCRAT:" << std::endl;
try {
	Bureaucrat b("John", 100);
	std::cout << b;
}
catch (std::exception &e) {
	std::cerr << e.what() << std::endl;
}

std::cout << std::endl << "BUREAUCRAT WITH GRADE 0:" << std::endl;
try {
	Bureaucrat b("John", 0);
}
catch (std::exception &e) {
	std::cerr << e.what() << std::endl;
}

std::cout << std::endl << "BUREAUCRAT WITH GRADE 200:" << std::endl;
try {
	Bureaucrat b("John", 200);
}
catch (std::exception &e) {
	std::cerr << e.what() << std::endl;
}

std::cout << std::endl << "TRY TO INCREASE BUREAUCRAT'S GRADE (NORMAL):" << std::endl;
try {
	Bureaucrat b("John", 15);
	std::cout << b;
	b.incrementGrade();
	std::cout << b;
}
catch (std::exception &e) {
	std::cerr << e.what() << std::endl;
}

std::cout << std::endl << "TRY TO DECREASE BUREAUCRAT'S GRADE (NORMAL):" << std::endl;
try {
	Bureaucrat b("John", 15);
	std::cout << b;
	b.decrementGrade();
	std::cout << b;
}
catch (std::exception &e) {
	std::cerr << e.what() << std::endl;
}

std::cout << std::endl << "TRY TO INCREASE BUREAUCRAT'S GRADE:" << std::endl;
try {
	Bureaucrat b("John", 1);
	std::cout << b;
	b.incrementGrade();
}
catch (std::exception &e) {
	std::cerr << e.what() << std::endl;
}

std::cout << std::endl << "TRY TO DECREASE BUREAUCRAT'S GRADE:" << std::endl;
try {
	Bureaucrat b("John", 150);
	std::cout << b;
	b.decrementGrade();
}
catch (std::exception &e) {
	std::cerr << e.what() << std::endl;
}


}