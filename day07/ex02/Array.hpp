/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:07:03 by ppipes            #+#    #+#             */
/*   Updated: 2021/04/21 16:29:34 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

#include <string>
#include <iostream>

template <typename T>
class Array {
private:
	T *_array;
	int _size;
public:
	int size(void) const { return this->_size; }

	Array(void): _array(new T()), _size(0) {}

	Array(unsigned int N): _array(new T[N]()), _size(N) {}

	Array(Array const &src) { *this = src;}

	Array &operator=(Array const &src) {
		this->_array = new T[src._size]();
		for(int i = 0; i < this->_size; i++) {
			this->_array[i] = src._array[i];
		}
		this->_size = src._size;
		return *this;
	}

	T &operator[](const int index){ 
		if (index < 0 || index >= this->_size)
			throw OutOfRangeException();
		return _array[index]; 
	}

	const T &operator[](const int index) const { 
		if (index < 0 || index >= this->_size)
			throw OutOfRangeException();
		return _array[index]; 
	}

	~Array(void){ delete [] _array; }

	class OutOfRangeException: public std::exception {
	private:
		std::string _error;
	public:
		OutOfRangeException(void){ _error = "Error: out of range!"; }
		~OutOfRangeException(void) throw() {}
		virtual const char *what() const throw() { return _error.c_str(); }
	};
};

#endif