/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 01:45:26 by ppipes            #+#    #+#             */
/*   Updated: 2021/02/22 02:27:05 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

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
};

#endif