/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 23:10:40 by ppipes            #+#    #+#             */
/*   Updated: 2021/01/27 19:49:48 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "Contact.hpp"

Contact	addNewContact(void)
{
	Contact person;
	std::string	str;

	std::cout << "Please enter the first name: ";
	std::getline(std::cin >> std::ws, str);
	person.setFirstName(str);
	std::cout << "Please enter the last name: ";
	std::getline(std::cin >> std::ws, str);
	person.setLastName(str);
	std::cout << "Please enter the nickname: ";
	std::getline(std::cin >> std::ws, str);
	person.setNickname(str);
	std::cout << "Please enter the login: ";
	std::getline(std::cin >> std::ws, str);
	person.setLogin(str);
	std::cout << "Please enter the postal address: ";
	std::getline(std::cin >> std::ws, str);
	person.setPostalAddress(str);
	std::cout << "Please enter the email address: ";
	std::getline(std::cin >> std::ws, str);
	person.setEmailAddress(str);
	std::cout << "Please enter the phone number: ";
	std::getline(std::cin >> std::ws, str);
	person.setPhoneNumder(str);
	std::cout << "Please enter the birthday date: ";
	std::getline(std::cin >> std::ws, str);
	person.setBirthdayDate(str);
	std::cout << "Please enter the favorite meal: ";
	std::getline(std::cin >> std::ws, str);
	person.setFavoriteMeal(str);
	std::cout << "Please enter the underwear color: ";
	std::getline(std::cin >> std::ws, str);
	person.setUnderwearColor(str);
	std::cout << "Please enter the darkest secret: ";
	std::getline(std::cin >> std::ws, str);
	person.setDarkestSecret(str);

	std::cout << "✅ Done!" << std::endl;
	return (person);
}

int	searchContact(Contact person[], int index)
{
	int i = 0;
	if (index == 0) {
		std::cout << "❌ Sorry, the Phonebook is empty" << std::endl;
		return (0);
	}
	else
		std::cout << "|#         |name      |lastname  |nick      |" << std::endl;
	while (i < index && i < 8) {
	std::string first = person[i].getFirstName();
	std::string last = person[i].getLastName();
	std::string nick = person[i].getNickname();
	if (first.size() > 10) {
		first.resize(10);
		first.back() = '.';
	}
	if (last.size() > 10) {
		last.resize(10);
		last.back() = '.';
	}
	if (nick.size() > 10) {
		nick.resize(10);
		nick.back() = '.';
	}
		std::cout << "|" << std::setw(10) << std::right << i + 1;
		std::cout << "|" << std::setw(10) << std::right << first;
		std::cout << "|" << std::setw(10) << std::right << last;
		std::cout << "|" << std::setw(10) << std::right << nick;
		std::cout << "|" << std::endl;
		i++;
	}
	std::cout << std::endl << "Please enter contact number: ";
	std::cin >> i;
	if (i - 1 >= index || i - 1 < 0) {
		std::cout << "❌ Sorry, there is no such number" << std::endl;
		return (0);
	}
	else {
		std::cout << "First name:      " << person[i - 1].getFirstName() << std::endl;
		std::cout << "Last name:       " << person[i - 1].getLastName() << std::endl;
		std::cout << "Nickname:        " << person[i - 1].getNickname() << std::endl;
		std::cout << "Login:           " << person[i - 1].getLogin() << std::endl;
		std::cout << "Postal address:  " << person[i - 1].getPostalAddress() << std::endl;
		std::cout << "Email address:   " << person[i - 1].getEmailAddress() << std::endl;
		std::cout << "Phone number:    " << person[i - 1].getPhoneNumber() << std::endl;
		std::cout << "Birthday date:   " << person[i - 1].getBirthdayDate() << std::endl;
		std::cout << "Favorite meal:   " << person[i - 1].getFavoriteMeal() << std::endl;
		std::cout << "Underwear color: " << person[i - 1].getUnderwearColor() << std::endl;
		std::cout << "Darkest secret:  " << person[i - 1].getDarkestSecret() << std::endl;
	}
	return (0);
}

int		main(void)
{
	std::string	operation;
	Contact		person[8];
	int			i = 0;

	while (1)
	{
		std::cout << "Please enter the command(ADD, SEARCH or EXIT): ";
		std::cin >> operation;
		if (operation == "ADD") {
			if (i < 8) {
				std::cout << "📝 Now you can add a new contact" << std::endl;
				person[i] = addNewContact();
				i++;
			}
			else
				std::cout << "❌ Sorry, the Phonebook is full" << std::endl;
		}
		else if (operation == "SEARCH") {
			std::cout << "🔎 Searching, wait a second..." << std::endl << std::endl;
			searchContact(person, i);
		}
		else if (operation == "EXIT") {
			std::exit (0);
		}
		else
			std::cout << "❌ This command is invalid" << std::endl;

	}
}