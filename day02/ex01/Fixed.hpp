/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 01:45:26 by ppipes            #+#    #+#             */
/*   Updated: 2021/02/22 02:38:16 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed {
private:
	int _value;
	static const int _numFract = 8;
public:
	Fixed(void);
	~Fixed(void);
	Fixed(Fixed const &src);
	Fixed &operator=(Fixed const &src);
	int getRawBits(void) const;
	void setRawBits(int const raw);

	Fixed(const int src);
	Fixed(const float src);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream & operator<<(std::ostream &os, Fixed const &i);

#endif