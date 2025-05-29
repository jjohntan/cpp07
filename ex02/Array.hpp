/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:48:52 by jetan             #+#    #+#             */
/*   Updated: 2025/05/29 14:52:35 by jetan            ###   ########.fr       */
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
		//defualt constructor
		Array()
		{
			arr = NULL;
			_size = 0;
		}
		//parameter constructor
		Array(unsigned int n): _size(n)
		{
			arr = new T[n];
		}
		//copy constructor
		Array(const Array &other): arr(NULL), _size(0)
		{
			*this = other;
		}
		//copy assignment operator
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
		//destructor
		~Array()
		{
			delete[] arr;
		}
		//subscript operator
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
		//exception
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