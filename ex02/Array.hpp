/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:48:52 by jetan             #+#    #+#             */
/*   Updated: 2025/05/28 18:53:25 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private:
		T *arr;
		unsigned int _size;
	public:
		Array()
		{
			arr = NULL;
			_size = 0;
		}
		Array(unsigned int n): _size(n)
		{
			arr = new T[n];
		}
		Array(const Array &other)
		{
			*this = other;
		}
		Array &operator=(const Array &other)
		{
			if (this != &other)
			{
				if (arr != NULL)
					delete[] arr;
				_size = other._size;
				arr = new T[_size];
				for (unsigned int i = 0; i < _size; i++)
					this->arr[i] = other.arr[i];
			}
			return *this;
		}
		~Array()
		{
			delete[] arr;
		}
		T &operator[](unsigned int index)
		{
			if (index >= _size)
				throw outOfBounds();
			return arr[index];
		}
		unsigned int size() const
		{
			return _size;
		}
		class outOfBounds: public std::exception
		{
			public:
				const char *what() const throw()
				{
					return "Index is out of bounds!";
				}
		};
};

#endif