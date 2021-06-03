/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:17:09 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/24 14:00:13 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define ITER_H

template<typename T>
void iter(T *array, int len, void (*f)(T const &))
{
	for(int i = 0; i < len; i++)
	{
		f(array[i]);
	}
}

#endif