/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreation.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:05:34 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/18 23:01:42 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreation.hpp"
#include <fstream>
#include <stdexcept>

ShrubberyCreation::ShrubberyCreation(std::string target): 
Form("Shrubbery Creation", 145, 137), _target(target){}

void ShrubberyCreation::execute(Bureaucrat const &executor) const{
	executor.executeForm(*this);
	if (this->getSigned() == 0)
		throw Form::NoSignedException();
	if (executor.getGrade() > 137)
		throw Form::GradeTooLowException();
	std::string filename = this->_target + "_shrubbery";
	std::ofstream file(filename.c_str());
	if (!file) {
		throw std::runtime_error("Error: cannot create the file");
	}

file << "          .     .  .      +     .      .          ." << std::endl;
file << "     .       .      .     #       .           ." << std::endl;
file << "        .      .         ###            .      .      ." << std::endl;
file << "      .      .   '#:. .:##'##:. .:#'  .      ." << std::endl;
file << "          .      . '####'###'####'  ." << std::endl;
file << "       .     '#:.    .:#'###'#:.    .:#'  .        .       ." << std::endl;
file << "  .             '#########'#########'        .        ." << std::endl;
file << "        .    '#:.  '####'###'####'  .:#'   .       ." << std::endl;
file << "     .     .  '#######''##'##''#######'                  ." << std::endl;
file << "                .'##'#####'#####'##'           .      ." << std::endl;
file << "    .   '#:. ...  .:##'###'###'##:.  ... .:#'     ." << std::endl;
file << "      .     '#######'##'#####'##'#######'      .     ." << std::endl;
file << "    .    .     '#####''#######''#####'    .      ." << std::endl;
file << "            .     '      000      '    .     ." << std::endl;
file << "       .         .   .   000     .        .       ." << std::endl;
file << ".. .. ..................O000O........................ ......" << std::endl;

file.close();

}

/* COPLIEN FORM */
ShrubberyCreation::ShrubberyCreation(void): 
Form("Shrubbery Creation", 145, 137), _target("undefined"){}

ShrubberyCreation::~ShrubberyCreation(){}

ShrubberyCreation::ShrubberyCreation(ShrubberyCreation const &src): Form(src){}

ShrubberyCreation &ShrubberyCreation::operator=(ShrubberyCreation const &src){
	(void)src;
	return *this;
}