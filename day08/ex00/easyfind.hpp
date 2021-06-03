/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 23:56:39 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/27 00:01:33 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>
#include <algorithm>

template<typename T>
int easyfind(T &array, int element)
{
	typename T::iterator it;
	it = std::find(array.begin(), array.end(), element);
	if ( it == array.end())
	{
		std::cout << "Element " << element << " not found!" << std::endl;
		return 1;
	}
	std::cout << "Element " << element << " found!" << std::endl;
	return 0;
}

#endif