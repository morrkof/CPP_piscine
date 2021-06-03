/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 23:25:23 by ppipes            #+#    #+#             */
/*   Updated: 2021/01/27 01:16:29 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <string>

class Contact {
private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _login;
	std::string _postalAddress;
	std::string _emailAddress;
	std::string _phoneNumber;
	std::string _birthdayDate;
	std::string _favoriteMeal;
	std::string _underwearColor;
	std::string _darkestSecret;
public:
	Contact(void);
	~Contact(void);
	std::string getFirstName(void);
	std::string getLastName(void);
	std::string getNickname(void);
	std::string getLogin(void);
	std::string getPostalAddress(void);
	std::string getEmailAddress(void);
	std::string getPhoneNumber(void);
	std::string getBirthdayDate(void);
	std::string getFavoriteMeal(void);
	std::string getUnderwearColor(void);
	std::string getDarkestSecret(void);
	void setFirstName(std::string str);
	void setLastName(std::string str);
	void setNickname(std::string str);
	void setLogin(std::string str);
	void setPostalAddress(std::string str);
	void setEmailAddress(std::string str);
	void setPhoneNumder(std::string str);
	void setBirthdayDate(std::string str);
	void setFavoriteMeal(std::string str);
	void setUnderwearColor(std::string str);
	void setDarkestSecret(std::string str);
};

#endif