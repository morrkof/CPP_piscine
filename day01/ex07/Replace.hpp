/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 20:11:41 by ppipes            #+#    #+#             */
/*   Updated: 2021/02/15 22:24:10 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_H
#define REPLACE_H

#include <string>

class Replace {
private:
	std::string _fileIn;
	std::string _fileOut;
	std::string _s1;
	std::string _s2;
public:
	Replace(std::string fileIn, std::string s1, std::string s2);
	~Replace(void);
	std::string getFileIn(void);
	std::string getFileOut(void);
	std::string getS1(void);
	std::string getS2(void);
	void setFileOut(std::string str);
};

#endif