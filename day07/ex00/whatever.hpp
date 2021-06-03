/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 11:04:26 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/24 13:16:39 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
#define WHATEVER_H

template <typename T>
void	swap(T &a, T &b)
{
	T c = a;
	a = b;
	b = c;
}

template <typename T>
T const &min(T const &a, T const &b)
{
	if (a > b) 
		return b;
	else if (b > a) 
		return a;
	else
		return b;
}

template <typename T>
T const &max(T const &a, T const &b)
{
	if (a > b) 
		return a;
	else if (b > a) 
		return b;
	else
		return b;
}

#endif