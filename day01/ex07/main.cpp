/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 17:42:19 by ppipes            #+#    #+#             */
/*   Updated: 2021/02/18 22:13:24 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include "Replace.hpp"

int main(int argc, char **argv)
{
	if (argc != 4) {
		std::cout << "Error: invalid arguments" << std::endl;
		return (1);
	}
	Replace replace(argv[1], argv[2], argv[3]);
	std::ifstream ifs((replace.getFileIn()).c_str());
	if (!ifs) {
		std::cout << "Error: cannot open the file" << std::endl;
		return (1);
	}
	std::ofstream ofs((replace.getFileOut()).c_str());
	if (!ofs) {
		std::cout << "Error: cannot create the file" << std::endl;
		ifs.close();
		return (1);
	}
	std::string line;
	while (getline(ifs, line)) {
		size_t pos = 0;
		while ((pos = line.find(replace.getS1(), pos)) != std::string::npos)
			line.replace(pos, replace.getS1().length(), replace.getS2());
		ofs << line;
		if (ifs.eof())
			break;
		ofs << std::endl;
	}
	ifs.close();
	ofs.close();
	return (0);
}