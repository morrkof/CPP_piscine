/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 14:52:37 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/23 22:29:44 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>

struct Data {
	std::string *s1;
	int			num;
	std::string *s2;
};

void *serialize(void)
{
	std::string *s1 = new std::string;
	std::string *s2 = new std::string;
	int number;
	static unsigned int seed = time(0);
	srand(seed);
	for(int i = 0; i < 32; i++)
	{
		s1->push_back(static_cast<char>(seed = rand()%94 + 33));
		s2->push_back(static_cast<char>(seed = rand()%94 + 33));
	}
	number = rand()%10000;
	std::cout << "RANDOMLY GENERATED FIRST STRING:   " << *s1 << std::endl;
	std::cout << "RANDOMLY GENERATED NUMBER:         " << number << std::endl;
	std::cout << "RANDOMLY GENERATED SECOND STRING:  " << *s2 << std::endl << std::endl;

	void *result = new char[sizeof(std::string *) + sizeof(int) + sizeof(std::string *)];
	std::memcpy(result, &s1, sizeof(std::string *));
	std::memcpy(reinterpret_cast<char *>(result) + sizeof(std::string *), &number, sizeof(int));
	std::memcpy(reinterpret_cast<char *>(result) + sizeof(std::string *) + sizeof(int), &s2, sizeof(std::string *));

	return result;
}

Data *deserialize(void *raw)
{
	Data *result = new Data;

	char *memory = reinterpret_cast<char *>(raw);
	result->s1 = *reinterpret_cast<std::string **>(memory);
	result->num = *reinterpret_cast<int *>(memory + sizeof(std::string *));
	result->s2 = *reinterpret_cast<std::string **>(memory + sizeof(std::string *) + sizeof(int));

	return result;
}

int main()
{
	void *raw = serialize();
	Data *data = deserialize(raw);

	std::cout << "DESERIALIZED FIRST STRING:         " << *(data->s1) << std::endl;
	std::cout << "DESERIALIZED NUMBER:               " << data->num << std::endl;
	std::cout << "DESERIALIZED SECOND STRING:        " << *(data->s2) << std::endl;
}